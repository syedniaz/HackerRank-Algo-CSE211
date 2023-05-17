#include<iostream>
#include<vector>
using namespace std;

vector<int>edges[7];
vector<bool>visited(7, false);

void visit(int current_node){
    cout<<current_node<<endl;
    for(int i=0;i<edges[current_node].size();i++){
        if(visited[edges[current_node][i]]==false){
            visited[edges[current_node][i]]=true;
            visit(edges[current_node][i]);
        }
    }
}

int main(){
    edges[0].push_back(1);
    edges[1].push_back(0);

    edges[0].push_back(3);
    edges[3].push_back(0);

    edges[0].push_back(4);
    edges[4].push_back(0);

    edges[1].push_back(2);
    edges[2].push_back(1);

    edges[1].push_back(5);
    edges[5].push_back(1);

    edges[1].push_back(6);
    edges[6].push_back(1);

    for (int i=0; i<7; i++){
        cout<<"Node "<<i<<": ";
        for (int j=0;j<edges[i].size();j++){
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }

    int starting_node = 0;
    visited[starting_node] = true;
    visit(starting_node);
}
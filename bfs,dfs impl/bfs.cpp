#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int V=7;
    vector<int> edges[V];

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

    for (int i=0; i<V; i++){
        cout<<"Node "<<i<<": ";
        for (int j=0;j<edges[i].size();j++){
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }

    queue<int>myqueue;
    vector<bool>visited(V, false);

    myqueue.push(0);
    visited[0]=true;

    while(!myqueue.empty()){
        int top = myqueue.front();
        
        for(int i=0;i<edges[top].size();i++){
            int current_node = edges[top][i];
            if(visited[current_node]==false){
                myqueue.push(current_node);
                visited[current_node] = true;       
            }
        }
        
        myqueue.pop();
        cout<<top<<endl;
    }
    
}
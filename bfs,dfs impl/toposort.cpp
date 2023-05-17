#include <iostream>
#include <stack>
#include <climits>
#include <vector>
#include <cfloat>

using namespace std;

struct node
{
    node *parent = NULL;
    int id;
    bool visited = false;
    int starting_time;
    int finishing_time;
    int in_degree = 0;
    vector<pair<node *, double>> list;
};

void addEdge(vector<node *> adjacencyList, int source, int destination, double weight)
{
    adjacencyList[source]->list.push_back(make_pair(adjacencyList[destination], weight));
}
void display(vector<node *> adjacencyList)
{
    cout << "Source Vertex->(Destination Vertex, Vertex Cost)" << endl;
    for (int i = 0; i < adjacencyList.size(); i++)
    {
        cout << i;
        for (int j = 0; j < adjacencyList[i]->list.size(); j++)
        {
            cout << " -> (" << adjacencyList[i]->list[j].first->id << ", " << adjacencyList[i]->list[j].second << ")";
        }
        if (adjacencyList[i]->list.size() == 0)
        {
            cout << " -> NULL";
        }
        cout << endl;
    }
}
void displayParentAndDistance(vector<node *> adjacencyList)
{

    for (int i = 0; i < adjacencyList.size(); i++)
    {
        if (adjacencyList[i]->parent != NULL)
        {
            cout << "Vertex " << adjacencyList[i]->id << " Parent " << adjacencyList[i]->parent->id << endl;
        }
        else
        {
            cout << "Vertex " << adjacencyList[i]->id << " Parent "
                 << "NULL" << endl;
        }
    }
}
void displayTopology(vector<node *> topology)
{   
    cout << "(Vertex, Parent)-> " ;
    for (int i = 0; i < topology.size(); i++)
    {
        cout <<"("<<topology[i]->id<<", " <<  (topology[i]->parent!=NULL?topology[i]->parent->id:-1)<<") ";
    }
    cout<<endl;
}

void calculateInDegree(vector<node *> adjacencyList)
{
    for (int i = 0; i < adjacencyList.size(); i++)
    {
        for (int j = 0; j < adjacencyList[i]->list.size(); j++)
        {
            if(adjacencyList[i]->list[j].first!=NULL){
                adjacencyList[i]->list[j].first->in_degree++;
            }
        }
    }
}

void topological_sort_visit(vector<node *> adjacencyList, int source, int destination, int *time, vector<node *> & topology)
{

    *time++;
    adjacencyList[source]->starting_time = *time;
    adjacencyList[source]->visited = true;
    for (int i = 0; i < adjacencyList[source]->list.size(); i++)
    {
        if (adjacencyList[source]->list[i].first->visited == false)
        {
            adjacencyList[source]->list[i].first->parent = adjacencyList[source];
            topological_sort_visit(adjacencyList, adjacencyList[source]->list[i].first->id, destination, time, topology);
        }
    }
    *time++;
    cout<<"topo "<< adjacencyList[source]->id<<endl;
    adjacencyList[source]->finishing_time = *time;
    topology.insert(topology.begin(), adjacencyList[source]);
}

void topological_sort(vector<node *> adjacencyList, int source, int destination, vector<node *> & topology)
{

    calculateInDegree(adjacencyList);
    int *time = new int(0);
    int vertex_order = source;
    for (int i = 0; i < adjacencyList.size(); i++)
    {

        if (adjacencyList[vertex_order]->visited == false && adjacencyList[vertex_order]->in_degree == 0)
        {
            cout<<"dsf "<<vertex_order<<endl;
            topological_sort_visit(adjacencyList, vertex_order, destination, time, topology);
        }
        vertex_order = (vertex_order + 1) % adjacencyList.size();
    }

    displayParentAndDistance(adjacencyList);
}

int main()
{

    int V = 9;
    vector<node *> adjacencyList;
    for (int i = 0; i < V; i++)
    {
        adjacencyList.push_back(new node);
        adjacencyList[i]->id = i;
    }
    cout << "Empty Matrix" << endl;
    display(adjacencyList);
    addEdge(adjacencyList, 0, 1, 1);
    addEdge(adjacencyList, 0, 8, 1);
    addEdge(adjacencyList, 0, 7, 1);
    addEdge(adjacencyList, 1, 8, 1);
    addEdge(adjacencyList, 2, 4, 1);
    addEdge(adjacencyList, 2, 8, 1);
    addEdge(adjacencyList, 3, 2, 1);
    addEdge(adjacencyList, 5, 3, 1);
    addEdge(adjacencyList, 5, 4, 1);
    addEdge(adjacencyList, 5, 8, 1);
    addEdge(adjacencyList, 6, 5, 1);
    addEdge(adjacencyList, 7, 5, 1);
    addEdge(adjacencyList, 7, 6, 1);
    addEdge(adjacencyList, 8, 3, 1);

    cout << "All Edges Updated" << endl;
    display(adjacencyList);
    vector<node *> topology;
    topological_sort(adjacencyList,6, 4, topology);
    displayTopology(topology);
}

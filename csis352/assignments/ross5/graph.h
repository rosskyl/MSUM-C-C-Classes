//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Mar 31, 2016
//Filename:    graph.h
//Description: contains graph specification and implementation




#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <vector>
using std::vector;

#include <map>
using std::map;

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::left;
using std::setw;
using std::setfill;

#include <sstream>
using std::stringstream;

#include <stdexcept>
using std::invalid_argument;

namespace GraphNameSpace {
    
    enum Weighted {WEIGHTED, UNWEIGHTED};
    enum Directed {DIRECTED, UNDIRECTED};
    
    template<class Type>
    class Graph {
	public:
	    //Method:		Graph
	    //Description:	default constructor
	    //Preconditions:	none
	    //Postconditions:	unweighted and undirected graph
	    //Input:		none
	    //Output:		none
	    Graph();
	    
	    //Method:		Graph
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	undirected graph
	    //Input:		tmpIsWeighted(Weighted)
	    //Output:		none
	    Graph(Weighted tmpIsWeighted);
	    
	    //Method:		Graph
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	unweighted graph
	    //Input:		tmpIsDirected(Directed)
	    //Output:		none
	    Graph(Directed tmpIsDirected);
	    
	    //Method:		Graph
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		tmpIsDirected(Directed)
	    //			tmpIsWeighted(Weighted)
	    //Output:		none
	    Graph(Directed tmpIsDirected, Weighted tmpIsWeighted);
	    
	    //Method:		Graph
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		tmpIsWeighted(Weighted)
	    //			tmpIsDirected(Directed)
	    //Output:		none
	    Graph(Weighted tmpIsWeighted, Directed tmpIsDirected);
	    
	    //Method:		Graph
	    //Description:	copy constructor
	    //Preconditions:	none
	    //Postconditions:	all of the otherGraph's vertices and edges are copied to this
	    //			same isDirected and isWeighted also
	    //Input:		otherGraph(Graph<Type>)
	    //Output:		none
	    Graph(Graph<Type>& otherGraph);
	    
	    //Method:		~Graph
	    //Description:	deconstructor
	    //Preconditions:	none
	    //Postconditions:	all vertices and edges are deleted
	    //Input:		none
	    //Output:		none
	    ~Graph();
	    
	    //Method:		operator=
	    //Description:	copy operator
	    //Preconditions:	none
	    //Postconditions:	all of the otherGraph's vertices and edges are copied to this
	    //			same isDirected and isWeighted also
	    //Input:		otherGraph(Graph<Type>)
	    //Output:		Graph<Type>
	    Graph<Type>& operator=(Graph<Type>& otherGraph);
	    
	    //Method:		destroy
	    //Description:	clears the graph
	    //Preconditions:	none
	    //Postconditions:	all vertices and edges are deleted
	    //Input:		none
	    //Output:		none
	    void destroy(); 
	    
	    //Method:		isEmpty
	    //Description:	checks if the graph is empty
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		bool
	    bool isEmpty() const;
	    
	    //Method:		isFull
	    //Description:	checks if the graph is full
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		bool
	    bool isFull() const;
	    
	    //Method:		isAdjacentTo
	    //Description:	checks if fromVertex is adjacent to toVertex
	    //Preconditions:	fromVertex and toVertex are in the graph
	    //Postconditions:	none
	    //Input:		fromVertex(Type)
	    //			toVertex(Type)
	    //Output:		bool
	    //Throw:		invalid_argument if fromVertex or toVertex are not in the graph
	    bool isAdjacentTo(Type& fromVertex, Type& toVertex) const throw (invalid_argument);
	    
	    //Method:		edgeWeight
	    //Description:	gets the weight of the edge between fromVertex and toVertex
	    //Preconditions:	fromVertex and toVertex are in the graph
	    //Postconditions:	none
	    //Input:		fromVertex(Type)
	    //			toVertex(Type)
	    //Output:		int
	    //Throw:		invalid_argument if fromVertex or toVertex are not in the graph
	    int edgeWeight(Type& fromVertex, Type& toVertex) const throw (invalid_argument);
	    
	    //Method:		edgeCount
	    //Description:	gets the number of edges in the graph
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		int
	    int edgeCount() const;
	    
	    //Method:		vertexCount
	    //Description:	gets the number of vertices in the graph
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		int
	    int vertexCount() const;
	    
	    //Method:		insertVertex
	    //Description:	inserts the vertex into the graph
	    //Preconditions:	vertex is not in the graph
	    //Postconditions:	vertex is inserted into the graph
	    //Input:		vertex(Type)
	    //Output:		none
	    //Throw:		invalid_argument if vertex is in the graph
	    void insertVertex(Type& vertex) throw (invalid_argument); 
	    
	    //Method:		insertEdge
	    //Description:	inserts an edge between fromVertex and toVertex
	    //Preconditions:	fromVertex and toVertex are in the graph
	    //			the edge is not in the graph
	    //Postconditions:	edge is inserted
	    //Input:		fromVertex(Type)
	    //			toVertex(Type)
	    //Output:		none
	    //Throw:		invalid_argument if fromVertex or toVertex are not in the graph
	    //			or the edge already exists
	    void insertEdge(Type& fromVertex, Type& toVertex, int weight=1) throw (invalid_argument);
	    
	    //Method:		deleteEdge
	    //Description:	removes the edge between fromVertex and toVertex
	    //Preconditions:	fromVertex and toVertex are in the graph
	    //			the edge is in the graph
	    //Postconditions:	none
	    //Input:		fromVertex(Type)
	    //			toVertex(Type)
	    //Output:		none
	    //Throw:		invalid_argument if fromVertex or toVertex are not in the graph
	    //			or the edge is not in the graph
	    void deleteEdge(Type& fromVertex, Type& toVertex) throw (invalid_argument);
	    
	    //Method:		deleteVertex
	    //Description:	deletes the vertex and all edges associated with it
	    //Preconditions:	vertex is in the graph
	    //Postconditions:	none
	    //Input:		vertex(Type)
	    //Output:		none
	    //Throw:		invalid_argument if vertex is not in the graph
	    void deleteVertex(Type& vertex) throw (invalid_argument);
	    
	    //Method:		findVertex
	    //Description:	returns the index of the vertex or -1 if the vertex is not in the graph
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		vertex(Type)
	    //Output:		int
	    int findVertex(Type& vertex) const;
	    
	    //Method:		dump
	    //Description:	outputs the graph information to the cout
	    //Preconditions:	operator<< is overloaded for the vertex type
	    //Postconditions:	none
	    //Input:		none
	    //Output:		none
	    void dump() const;
	private:
	    Weighted isWeighted;//whether the graph is weighed or not
	    
	    Directed isDirected;//whether the graph is directed or not
	    
	    vector< map<int, int>* > adjacencyList;//the adjacent vertices and weights of edges
	    
	    vector<Type> vertices;//the vertices
    };//end class Graph
    
    
    template<class Type>
    Graph<Type>::Graph() {
	isWeighted = UNWEIGHTED;
	isDirected = UNDIRECTED;
    }//end Graph::Graph()
    
    template<class Type>
    Graph<Type>::Graph(Weighted tmpIsWeighted) {
	isWeighted = tmpIsWeighted;
	isDirected = UNDIRECTED;
    }//end Graph::Graph(Weighted tmpIsWeighted)
    
    template<class Type>
    Graph<Type>::Graph(Directed tmpIsDirected) {
	isWeighted = UNWEIGHTED;
	isDirected = tmpIsDirected;
    }//end Graph::Graph(Directed tmpIsDirected)
    
    template<class Type>
    Graph<Type>::Graph(Directed tmpIsDirected, Weighted tmpIsWeighted) {
	isWeighted = tmpIsWeighted;
	isDirected = tmpIsDirected;
    }//end Graph::Graph(Directed tmpIsDirected, Weighted tmpIsWeighted)
    
    template<class Type>
    Graph<Type>::Graph(Weighted tmpIsWeighted, Directed tmpIsDirected) {
	isWeighted = tmpIsWeighted;
	isDirected = tmpIsDirected;
    }//end Graph::Graph(Weighted tmpIsWeighted, Directed tmpIsDirected)
    
    template<class Type>
    Graph<Type>::Graph(Graph<Type>& otherGraph) {
	isWeighted = otherGraph.isWeighted;
	isDirected = otherGraph.isDirected;
	vertices = otherGraph.vertices;
	
	for (int i = 0; i < otherGraph.adjacencyList.size(); i += 1) {
	    map<int, int>* tmp = new map<int, int>;
	    *tmp = *(otherGraph.adjacencyList[i]);
	    adjacencyList.push_back(tmp);
	}//end for (int i = 0; i < otherGraph.adjacencyList.size(); i += 1)
    }//end Graph<Type>::Graph(Graph<Type>& otherGraph)
    
    template<class Type>
    Graph<Type>::~Graph() {
	destroy();
    }//end Graph<Type>::~Graph()
    
    template<class Type>
    Graph<Type>& Graph<Type>::operator=(Graph<Type>& otherGraph) {
	if (this != &otherGraph) {
	    destroy();
	    isWeighted = otherGraph.isWeighted;
	    isDirected = otherGraph.isDirected;
	    vertices = otherGraph.vertices;
	    
	    for (int i = 0; i < otherGraph.adjacencyList.size(); i += 1) {
		map<int, int>* tmp = new map<int, int>;
		*tmp = *(otherGraph.adjacencyList[i]);
		adjacencyList.push_back(tmp);
	    }//end for (int i = 0; i < otherGraph.adjacencyList.size(); i += 1)
	}//end if (this != &otherGraph)
	return *this;
    }//end Graph<Type>& Graph<Type>::operator=(Graph<Type>& otherGraph)
    
    template<class Type>
    void Graph<Type>::destroy() {
	vertices.clear();
	for (int i = 0; i < adjacencyList.size(); i += 1) {
	    delete adjacencyList[i];
	    adjacencyList[i] = NULL;
	}//end for (int i = 0; i < adjacencyList.size(); i += 1)
	adjacencyList.clear();
    }//end void Graph<Type>::destroy()
    
    template<class Type>
    bool Graph<Type>::isEmpty() const {
	return vertices.size() == 0;
    }//end bool Graph<Type>::isEmpty() const
    
    template<class Type>
    bool Graph<Type>::isFull() const {
	return (vertices.size() == vertices.max_size()) || (adjacencyList.size() == adjacencyList.max_size());
    }//end bool Graph<Type>::isFull() const

    template<class Type>
    bool Graph<Type>::isAdjacentTo(Type& fromVertex, Type& toVertex) const throw (invalid_argument) {
	if (findVertex(fromVertex) == -1)
	    throw invalid_argument("fromVertex is not in the graph");
	if (findVertex(toVertex) == -1)
	    throw invalid_argument("toVertex is not in the graph");
	
	int fromIndex = findVertex(fromVertex);
	int toIndex = findVertex(toVertex);
	return (*(adjacencyList[fromIndex]))[toIndex] != 0;
    }//end bool Graph<Type>::isAdjacentTo(Type& fromVertex, Type& toVertex) const

    template<class Type>
    int Graph<Type>::edgeWeight(Type& fromVertex, Type& toVertex) const throw (invalid_argument) {
	if (findVertex(fromVertex) == -1)
	    throw invalid_argument("fromVertex is not in the graph");
	if (findVertex(toVertex) == -1)
	    throw invalid_argument("toVertex is not in the graph");
	
	int fromIndex = findVertex(fromVertex);
	int toIndex = findVertex(toVertex);
	return (*(adjacencyList[fromIndex]))[toIndex];
    }//end int Graph<Type>::edgeWeight(Type& fromVertex, Type& toVertex) const

    template<class Type>
    int Graph<Type>::edgeCount() const {
	int totEdge = 0;
	for (int i = 0; i < adjacencyList.size(); i += 1)
	    for (int j = 0; j < adjacencyList.size(); j += 1)
		if ( (*(adjacencyList[i]))[j] != 0)
		    totEdge += 1;
	
	//if undirected graph, then edges are added twice
	if (isDirected == UNDIRECTED)
	    totEdge = totEdge / 2;
	return totEdge;
    }//end int Graph<Type>::edgeCount() const
    
    template<class Type>
    int Graph<Type>::vertexCount() const {
	return vertices.size();
    }//end int Graph<Type>::vertexCount() const

    template<class Type>
    void Graph<Type>::insertVertex(Type& vertex) throw (invalid_argument) {
	if (findVertex(vertex) != -1)
	    throw invalid_argument("vertex is already in the graph");
	
	vertices.push_back(vertex);
	adjacencyList.push_back(new map<int, int>);
	if (vertices.size() <= adjacencyList[0]->size())
	    for (int i = 0; i < vertices.size(); i += 1)
		(*(adjacencyList[i]))[vertices.size()-1] = 0;
    }//end void Graph<Type>::insertVertex(Type& vertex)
    
    template<class Type>
    void Graph<Type>::insertEdge(Type& fromVertex, Type& toVertex, int weight) throw (invalid_argument) {
	if (findVertex(fromVertex) == -1)
	    throw invalid_argument("fromVertex is not in the graph");
	if (findVertex(toVertex) == -1)
	    throw invalid_argument("toVertex is not in the graph");
	
	if (isWeighted == UNWEIGHTED)
	    weight = 1;
	
	int fromIndex = findVertex(fromVertex);
	int toIndex = findVertex(toVertex);
	
	if ( (*(adjacencyList[fromIndex]))[toIndex] != 0)
	    throw invalid_argument("Edge is already in the graph");
	(*(adjacencyList[fromIndex]))[toIndex] = weight;
	
	if (isDirected == UNDIRECTED) 
	    (*(adjacencyList[toIndex]))[fromIndex] = weight;
    }//end void Graph<Type>::insertEdge(Type& fromVertex, Type& toVertex, int weight=1)
    
   template<class Type>
   void Graph<Type>::deleteEdge(Type& fromVertex, Type& toVertex) throw (invalid_argument) {
       if (findVertex(fromVertex) == -1)
	   throw invalid_argument("fromVertex is not in the graph");
       if (findVertex(toVertex) == -1)
	   throw invalid_argument("toVertex is not in the graph");
       
	int fromIndex = findVertex(fromVertex);
	int toIndex = findVertex(toVertex);
       
       if ( (*(adjacencyList[fromIndex]))[toIndex] == 0)
	   throw invalid_argument("Edge is not in the graph");
	
	(*(adjacencyList[fromIndex]))[toIndex] = 0;
	
	if (isDirected == UNDIRECTED) 
	    (*(adjacencyList[toIndex]))[fromIndex] = 0;
    }//end void Graph<Type>::deleteEdge(Type& fromVertex, Type& toVertex)
    
    template<class Type>
    void Graph<Type>::deleteVertex(Type& vertex) throw (invalid_argument) {
	if (findVertex(vertex) == -1)
	    throw invalid_argument("vertex is not in the graph");
	
	int index = findVertex(vertex);
	
	//delete edges
	for (int i = 0; i < vertices.size(); i += 1) {
	    (*(adjacencyList[i]))[index] = 0;
	}
	
	vertices.erase(vertices.begin()+index);
	delete adjacencyList[index];
	adjacencyList[index] = NULL;
	adjacencyList.erase(adjacencyList.begin()+index);
	
	for (int i = 0; i < vertices.size(); i += 1) {
	    for (int j = index+1; j < adjacencyList[i]->size(); j += 1)
		(*(adjacencyList[i]))[j-1] = (*(adjacencyList[i]))[j];
	}
    }//end void Graph<Type>::deleteVertex(Type& vertex)
 
    template<class Type>
    int Graph<Type>::findVertex(Type& vertex) const {
	for (int i = 0; i < vertices.size(); i += 1)
	    if (vertex == vertices[i])
		return i;
	return -1;
    }//end int Graph<Type>::findVertex(Type& vertex) const

    template<class Type>
    void Graph<Type>::dump() const {
	stringstream output;
	
	cout << "dumping graph:" << setfill(' ') << setw(12);
	if (isDirected == DIRECTED)
	    cout << "DIRECTED";
	else
	    cout << "UNDIRECTED";
	cout << setw(12);
	if (isWeighted == WEIGHTED)
	    cout << "WEIGHTED";
	else
	    cout << "UNWEIGHTED";
	cout << "   vertices: " << vertices.size() << "   edges: " << edgeCount() << endl;
	
	cout << left << setw(23) << "VERTEX" << "ADJACENT VERTICES" << endl;
	cout << setw(20) << setfill('-') << "" << "   " << setw(25) <<  "" << endl;
	
	for (int i = 0; i < vertices.size(); i += 1) {
	    output.str("");
	    output << "[" << i << "]";
	    cout << setfill(' ') << setw(5) << output.str() << setw(18) << vertices[i];
	    for (int j = 0; j < vertices.size(); j += 1) 
		if ( (*(adjacencyList[i]))[j] != 0) {
		    cout << "[" << j << "]" << vertices[j];
		    if (isWeighted == WEIGHTED)
			cout << "(" << (*(adjacencyList[i]))[j] << ")" << "  ";
		    else
			cout << "  ";
		}//end if ( (*(adjacencyList[i]))[j] != 0)
	    cout << endl;
	}//end for (int i = 0; i < vertices.size(); i += 1)
	cout << endl;
    }//end void Graph<Type>::dump() const

}//end namespace GraphNameSpace



#endif

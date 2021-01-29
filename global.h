#ifndef _GLOBAL_H
#define _GLOBAL_H
#include "bitmap.h"
#include "verifyGraph.h"

extern int max_v_1;
extern int max_e_1;
extern int max_v_2;
extern int max_e_2;
extern int max_d_1;
extern int max_d_2;
extern int MAX_THREADS;
extern int h;

extern vector<vector<int > > adjList1;
extern vector<vector<int > > adjList2;
extern verifyGraphNode gn1[2048];
extern verifyGraphNode gn2[2048];
extern u16 a1[2048][2048]; //
extern u16 a2[2048][2048];
extern vector<int> vs1; //size of vertices - set in undealVertexSet
extern vector<int> vs2; //size of vertices 
extern vector<int> group1; // size of vertices - set in divideGroup
extern vector<int> group2;

extern u16 start_deleted[256];
extern u16 end_deleted[256];
extern u16 tmpDegree1[2048];
extern u16 tmpDegree2[2048];
extern u16 Degree1[2048];
extern u16 Degree2[2048];
extern u16 edgeList1[256];
extern u16 edgeList2[256];
extern u16 edge_set_1[2048];
extern u16 edge_set_2[2048];
extern u16 succ_degree_1[2048]; 
extern u16 succ_degree_2[2048];

extern int ds1[2048];
extern int ds2[2048];
extern bool FLAG;
extern bool VERTEXFLAG1;
extern bool VERTEXFLAG2;
extern bool groupFlag1[2048];
extern bool groupFlag2[2048];
extern int groupNumber;
extern bool unionFlag1[2048];
extern bool unionFlag2[2048];


extern u64 total_1;
extern u64 total_2;
extern u64 totalExpandNode; 
extern u64 total_search_node;
#endif
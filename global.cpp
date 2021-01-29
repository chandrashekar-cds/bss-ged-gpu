#include "global.h"

extern int max_v_1 = 0;
extern int max_e_1 = 0;   //max label of edge
extern int max_v_2 = 0;
extern int max_e_2 = 0;
extern int max_d_1 = 0;
extern int max_d_2 = 0;
extern int MAX_THREADS = 0;
extern int h = 0;

extern vector<vector<int > > adjList1(0, vector<int>());
extern vector<vector<int > > adjList2(0, vector<int>());
extern verifyGraphNode gn1[2048] = { verifyGraphNode() };
extern verifyGraphNode gn2[2048] = { verifyGraphNode() };
extern u16 a1[2048][2048] = {0}; //
extern u16 a2[2048][2048] = {0};
extern vector<int> vs1(0, 0);
extern vector<int> vs2(0, 0);
extern vector<int> group1(0, 0);
extern vector<int> group2(0, 0);

extern u16 start_deleted[256] = {0};    // same as max_e_1
extern u16 end_deleted[256] = {0};      // same as max_e_1
extern u16 tmpDegree1[2048] ={0};      // max length of max degree of any vertex
extern u16 tmpDegree2[2048] = {0};
extern u16 Degree1[2048] = {0};
extern u16 Degree2[2048] = {0};
extern u16 edgeList1[256] = {0};     //max length of max label size - max_e_1
extern u16 edgeList2[256] = {0};
extern u16 edge_set_1[2048] = {0};   //  
extern u16 edge_set_2[2048] = {0};
extern u16 succ_degree_1[2048] = {0};    // max size - no of vertices
extern u16 succ_degree_2[2048] = {0};
extern int ds1[2048] = {0};            // max size - no of vertices
extern int ds2[2048] = {0};

extern bool groupFlag1[2048] = {0};       // max size - no of vertices
extern bool groupFlag2[2048] = {0};
extern int groupNumber = 0;
extern bool unionFlag1[2048] = {0};      // max size - no of vertices
extern bool unionFlag2[2048] = {0};

extern bool FLAG = true;
extern bool VERTEXFLAG1 = false;
extern bool VERTEXFLAG2 = false;


extern u64 total_1 = 0;
extern u64 total_2 = 0;
extern u64 totalExpandNode = 0;
extern u64 total_search_node = 0;
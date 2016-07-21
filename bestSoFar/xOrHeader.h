#define ANN_NODES 8
#define ANN_EDGES 12
#define ANN_INPUTS 4
#define ANN_OUTPUTS 2
#define ANN_LAYERS 3
int nodes[ANN_NODES][2] = {{0,50},{1,50},{2,50},{3,50},{4,3},{5,1},{6,1},{7,4}};
int edges[ANN_EDGES][3] = {{0,6,1},{0,7,1},{1,6,1},{1,7,1},{2,6,1},{2,7,1},{3,6,1},{3,7,1},{6,4,1},{7,4,-1},{6,5,1},{7,5,-1}};

#define ANN_NODES 16
#define ANN_EDGES 50
#define ANN_INPUTS 4
#define ANN_OUTPUTS 2
int nodes[ANN_NODES][2] = {{0, 50},{1, 50},{2, 50},{3, 50},{4, 6},{5, 6},{6, 2},{7, 2},{8, 3},{9, 2},{10, 4},{11, 3},{12, 1},{13, 2},{14, 3},{15, 2}};
int edges[ANN_EDGES][3] = {{0, 6, 1},{0, 7, 1},{0, 8, 1},{0, 9, 1},{0, 10, -1},{0, 11, 1},{0, 13, -1},{0, 14, 1},{0, 15, -1},{1, 6, 1},{1, 8, -1},{1, 9, -1},{1, 10, 1},{1, 11, -1},{1, 13, 1},{1, 14, -1},{1, 15, -1},{2, 6, 1},{2, 7, 1},{2, 8, -1},{2, 10, 1},{2, 11, -1},{2, 12, 1},{2, 13, 1},{2, 14, 1},{2, 15, -1},{3, 7, 1},{3, 10, 1},{3, 11, 1},{3, 12, -1},{3, 13, 1},{3, 14, -1},{6, 4, -1},{7, 4, 1},{8, 4, -1},{9, 4, -1},{10, 4, 1},{11, 4, 1},{12, 4, 1},{13, 4, -1},{14, 4, 1},{15, 4, -1},{6, 5, -1},{7, 5, -1},{9, 5, -1},{10, 5, 1},{11, 5, -1},{12, 5, 1},{13, 5, -1},{14, 5, 1}};

#define ANN_NODES 42
#define ANN_EDGES 208
#define ANN_INPUTS 4
#define ANN_OUTPUTS 2
int nodes[ANN_NODES][2] = {{0, 50},{1, 50},{2, 50},{3, 50},{4, 6},{5, 3},{6, 3},{7, 4},{8, 1},{9, 2},{10, 1},{11, 1},{12, 5},{13, 6},{14, 6},{15, 1},{16, 1},{17, 4},{18, 6},{19, 1},{20, 1},{21, 2},{22, 4},{23, 4},{24, 1},{25, 1},{26, 3},{27, 6},{28, 1},{29, 4},{30, 1},{31, 4},{32, 3},{33, 6},{34, 6},{35, 6},{36, 3},{37, 6},{38, 5},{39, 6},{40, 4},{41, 2}};
int edges[ANN_EDGES][3] = {{0, 6, 1},{0, 7, 1},{0, 8, 1},{0, 9, 1},{0, 10, 1},{0, 11, 1},{1, 6, 1},{1, 7, 1},{1, 8, 1},{1, 9, 1},{1, 11, 1},{2, 6, 1},{2, 7, 1},{2, 8, 1},{2, 9, 1},{2, 10, 1},{2, 11, 1},{3, 6, 1},{3, 7, 1},{3, 9, 1},{3, 10, 1},{3, 11, 1},{6, 12, 1},{6, 13, 1},{6, 14, 1},{6, 15, 1},{6, 17, 1},{7, 12, 1},{7, 13, 1},{7, 14, 1},{7, 15, 1},{7, 16, 1},{7, 17, 1},{8, 12, 1},{8, 13, 1},{8, 14, 1},{8, 15, 1},{8, 16, 1},{8, 17, 1},{9, 12, 1},{9, 13, 1},{9, 14, 1},{9, 15, 1},{9, 16, 1},{9, 17, 1},{10, 12, 1},{10, 13, 1},{10, 14, 1},{10, 15, 1},{10, 16, 1},{10, 17, 1},{11, 12, 1},{11, 13, 1},{11, 14, 1},{11, 15, 1},{11, 16, 1},{11, 17, 1},{12, 18, 1},{12, 19, 1},{12, 20, 1},{12, 21, 1},{12, 22, 1},{12, 23, 1},{13, 18, 1},{13, 19, 1},{13, 20, 1},{13, 21, 1},{13, 22, 1},{13, 23, 1},{14, 18, 1},{14, 19, 1},{14, 20, 1},{14, 21, 1},{14, 22, 1},{14, 23, 1},{15, 18, 1},{15, 19, 1},{15, 20, 1},{15, 21, 1},{15, 22, 1},{15, 23, 1},{16, 18, 1},{16, 19, 1},{16, 20, 1},{16, 21, 1},{16, 22, 1},{16, 23, 1},{17, 18, 1},{17, 19, 1},{17, 20, 1},{17, 21, 1},{17, 22, 1},{17, 23, 1},{18, 24, 1},{18, 25, 1},{18, 26, 1},{18, 27, 1},{18, 28, 1},{18, 29, 1},{19, 24, 1},{19, 25, 1},{19, 26, 1},{19, 27, 1},{19, 28, 1},{19, 29, 1},{20, 24, 1},{20, 26, 1},{20, 27, 1},{20, 29, 1},{21, 24, 1},{21, 25, 1},{21, 26, 1},{21, 27, 1},{21, 28, 1},{21, 29, 1},{22, 24, 1},{22, 25, 1},{22, 26, 1},{22, 27, 1},{22, 28, 1},{22, 29, 1},{23, 24, 1},{23, 25, 1},{23, 26, 1},{23, 27, 1},{23, 28, 1},{23, 29, 1},{24, 30, 1},{24, 31, 1},{24, 32, 1},{24, 33, 1},{24, 34, 1},{24, 35, 1},{25, 30, 1},{25, 31, 1},{25, 32, 1},{25, 33, 1},{25, 34, 1},{25, 35, 1},{26, 30, 1},{26, 31, 1},{26, 32, 1},{26, 33, 1},{26, 34, 1},{26, 35, 1},{27, 30, 1},{27, 31, 1},{27, 32, 1},{27, 33, 1},{27, 34, 1},{27, 35, 1},{28, 30, 1},{28, 31, 1},{28, 32, 1},{28, 33, 1},{28, 34, 1},{28, 35, 1},{29, 31, 1},{29, 32, 1},{29, 33, 1},{29, 34, 1},{29, 35, 1},{30, 36, 1},{30, 37, 1},{30, 38, 1},{30, 39, 1},{30, 40, 1},{30, 41, 1},{31, 36, 1},{31, 37, 1},{31, 38, 1},{31, 39, 1},{31, 41, 1},{32, 36, 1},{32, 37, 1},{32, 38, 1},{32, 39, 1},{32, 40, 1},{32, 41, 1},{33, 36, 1},{33, 37, 1},{33, 38, 1},{33, 39, 1},{33, 40, 1},{34, 36, 1},{34, 37, 1},{34, 38, 1},{34, 39, 1},{34, 40, 1},{34, 41, 1},{35, 36, 1},{35, 37, 1},{35, 38, 1},{35, 39, 1},{35, 40, 1},{35, 41, 1},{36, 4, 1},{36, 5, 1},{37, 4, 1},{37, 5, 1},{38, 4, 1},{38, 5, 1},{39, 4, 1},{39, 5, 1},{40, 4, 1},{40, 5, 1},{41, 4, 1},{41, 5, 1}};
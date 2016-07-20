#define ANN_NODES 54
#define ANN_EDGES 330
#define ANN_INPUTS 4
#define ANN_OUTPUTS 2
int nodes[ANN_NODES][2] = {{0, 50},{1, 50},{2, 50},{3, 50},{4, 2},{5, 5},{6, 1},{7, 1},{8, 3},{9, 1},{10, 4},{11, 1},{12, 2},{13, 3},{14, 5},{15, 5},{16, 6},{17, 3},{18, 4},{19, 5},{20, 6},{21, 3},{22, 1},{23, 5},{24, 3},{25, 3},{26, 2},{27, 5},{28, 5},{29, 7},{30, 3},{31, 2},{32, 5},{33, 2},{34, 3},{35, 4},{36, 8},{37, 1},{38, 4},{39, 3},{40, 1},{41, 1},{42, 7},{43, 6},{44, 3},{45, 3},{46, 4},{47, 1},{48, 5},{49, 5},{50, 4},{51, 6},{52, 4},{53, 5}};
int edges[ANN_EDGES][3] = {{0, 7, 1},{0, 8, 1},{0, 10, -1},{0, 11, -1},{0, 13, -1},{1, 6, -1},{1, 7, 1},{1, 8, -1},{1, 9, 1},{1, 10, -1},{1, 11, 1},{1, 12, -1},{1, 13, -1},{2, 6, -1},{2, 7, 1},{2, 8, -1},{2, 9, -1},{2, 10, 1},{2, 11, 1},{2, 13, -1},{3, 6, 1},{3, 7, -1},{3, 8, 1},{3, 9, -1},{3, 10, -1},{3, 11, -1},{3, 12, -1},{3, 13, -1},{6, 14, -1},{6, 15, -1},{6, 16, -1},{6, 17, 1},{6, 18, -1},{6, 19, 1},{6, 20, -1},{7, 14, 1},{7, 15, 1},{7, 16, -1},{7, 17, -1},{7, 18, -1},{7, 19, 1},{7, 20, 1},{7, 21, 1},{8, 15, 1},{8, 16, 1},{8, 17, -1},{8, 18, -1},{8, 19, -1},{8, 20, 1},{8, 21, 1},{9, 14, 1},{9, 15, -1},{9, 16, 1},{9, 17, -1},{9, 18, 1},{9, 19, 1},{9, 20, 1},{9, 21, 1},{10, 14, -1},{10, 15, 1},{10, 16, 1},{10, 17, -1},{10, 18, 1},{10, 19, 1},{10, 21, -1},{11, 14, 1},{11, 15, 1},{11, 16, -1},{11, 18, -1},{11, 19, -1},{11, 20, 1},{11, 21, 1},{12, 14, -1},{12, 15, 1},{12, 16, -1},{12, 17, -1},{12, 18, -1},{12, 19, 1},{12, 20, 1},{12, 21, -1},{13, 14, -1},{13, 15, -1},{13, 16, -1},{13, 17, 1},{13, 18, 1},{13, 19, 1},{13, 20, -1},{13, 21, -1},{14, 22, -1},{14, 23, -1},{14, 25, 1},{14, 26, 1},{14, 27, -1},{14, 28, 1},{14, 29, 1},{15, 23, 1},{15, 24, 1},{15, 25, 1},{15, 26, -1},{15, 27, -1},{16, 22, -1},{16, 23, -1},{16, 24, 1},{16, 25, -1},{16, 26, 1},{16, 27, 1},{16, 28, 1},{16, 29, 1},{17, 22, -1},{17, 23, -1},{17, 24, -1},{17, 26, -1},{17, 27, -1},{17, 28, -1},{17, 29, 1},{18, 22, 1},{18, 23, -1},{18, 24, -1},{18, 26, 1},{18, 27, 1},{18, 28, 1},{18, 29, -1},{19, 22, 1},{19, 23, -1},{19, 24, -1},{19, 25, 1},{19, 26, 1},{19, 28, -1},{19, 29, -1},{20, 22, -1},{20, 23, -1},{20, 24, 1},{20, 26, -1},{20, 27, 1},{20, 28, -1},{20, 29, -1},{21, 22, -1},{21, 23, -1},{21, 24, -1},{21, 25, 1},{21, 26, 1},{21, 27, -1},{21, 28, 1},{21, 29, 1},{22, 30, 1},{22, 31, -1},{22, 32, -1},{22, 34, 1},{22, 35, 1},{22, 36, 1},{22, 37, -1},{23, 32, -1},{23, 33, -1},{23, 34, -1},{23, 35, 1},{23, 36, -1},{24, 30, 1},{24, 31, 1},{24, 32, 1},{24, 33, 1},{24, 34, 1},{24, 36, 1},{25, 30, 1},{25, 31, 1},{25, 32, -1},{25, 33, -1},{25, 34, -1},{25, 36, 1},{26, 30, 1},{26, 31, 1},{26, 33, 1},{26, 34, 1},{26, 35, -1},{26, 36, 1},{26, 37, -1},{27, 30, -1},{27, 31, -1},{27, 32, 1},{27, 33, -1},{27, 34, -1},{27, 35, 1},{27, 36, 1},{27, 37, -1},{28, 30, -1},{28, 31, 1},{28, 32, -1},{28, 33, -1},{28, 34, -1},{28, 35, -1},{28, 36, -1},{28, 37, 1},{29, 30, -1},{29, 31, -1},{29, 32, 1},{29, 33, -1},{29, 34, 1},{29, 35, -1},{29, 36, -1},{29, 37, 1},{30, 38, 1},{30, 40, -1},{30, 41, -1},{30, 43, 1},{30, 44, 1},{30, 45, -1},{31, 38, 1},{31, 40, -1},{31, 41, 1},{31, 42, 1},{31, 43, -1},{31, 44, 1},{31, 45, 1},{32, 38, 1},{32, 39, 1},{32, 40, 1},{32, 41, 1},{32, 42, 1},{32, 43, -1},{32, 44, 1},{32, 45, 1},{33, 39, -1},{33, 40, -1},{33, 41, -1},{33, 42, 1},{33, 44, -1},{33, 45, -1},{34, 38, -1},{34, 39, -1},{34, 40, -1},{34, 41, -1},{34, 42, -1},{34, 43, -1},{34, 44, 1},{35, 38, -1},{35, 39, -1},{35, 40, 1},{35, 41, 1},{35, 42, 1},{35, 43, -1},{35, 44, 1},{35, 45, -1},{36, 38, 1},{36, 39, -1},{36, 40, 1},{36, 41, -1},{36, 42, 1},{36, 43, -1},{36, 44, -1},{36, 45, -1},{37, 38, 1},{37, 39, 1},{37, 40, 1},{37, 41, -1},{37, 42, 1},{37, 43, -1},{37, 44, -1},{37, 45, 1},{38, 46, -1},{38, 47, -1},{38, 48, 1},{38, 49, 1},{38, 50, -1},{38, 51, 1},{38, 52, -1},{38, 53, -1},{39, 46, -1},{39, 47, 1},{39, 48, -1},{39, 49, 1},{39, 50, -1},{39, 51, -1},{39, 53, 1},{40, 46, -1},{40, 47, -1},{40, 48, 1},{40, 50, 1},{40, 51, -1},{40, 52, 1},{40, 53, -1},{41, 46, -1},{41, 47, 1},{41, 48, -1},{41, 49, -1},{41, 50, 1},{41, 51, -1},{41, 52, 1},{41, 53, -1},{42, 46, 1},{42, 47, -1},{42, 48, 1},{42, 49, 1},{42, 50, -1},{42, 51, 1},{42, 52, -1},{42, 53, 1},{43, 46, -1},{43, 47, -1},{43, 48, -1},{43, 49, 1},{43, 50, 1},{43, 51, -1},{43, 52, -1},{43, 53, -1},{44, 46, -1},{44, 48, -1},{44, 49, 1},{44, 50, 1},{44, 51, 1},{44, 52, 1},{45, 46, -1},{45, 47, 1},{45, 48, -1},{45, 50, -1},{45, 51, -1},{45, 52, 1},{45, 53, 1},{46, 4, 1},{46, 5, 1},{47, 4, -1},{47, 5, 1},{48, 4, 1},{48, 5, 1},{49, 4, 1},{49, 5, 1},{50, 4, 1},{50, 5, 1},{51, 4, -1},{52, 4, -1},{53, 4, -1},{53, 5, -1}};
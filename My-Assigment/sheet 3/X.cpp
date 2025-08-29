#include <iostream>
using namespace std;
                    /*r  l  u  d  ru rd lu ld*/
bool boarders_arr[8] {1, 1, 1, 1, 1, 1, 1, 1};

void check_boarders(unsigned short n,unsigned short m,
                    unsigned short x, unsigned short y) {
    if (y == m - 1) {
        boarders_arr[0] = 0;
        boarders_arr[4] = 0;
        boarders_arr[5] = 0;
    }
    else if (y == 0) {
        boarders_arr[1] = 0;
        boarders_arr[6] = 0;
        boarders_arr[7] = 0;
    }

    if (x == n-1) {
        boarders_arr[3] = 0;
        boarders_arr[5] = 0;
        boarders_arr[7] = 0;
    }
    else if (x == 0) {
        boarders_arr[2] = 0;
        boarders_arr[4] = 0;
        boarders_arr[6] = 0;
    }

}


int main() {
    unsigned short n, m;
    unsigned short x;
    unsigned short y;
    cin >> n >> m;
    char arr[n][m];
                   /*r, l, u, d, ru, rd, lu, ld*/
    short row_dir[] {0, 0, -1, 1, -1, 1, -1, 1};
    short col_dir[] {1, -1, 0, 0, 1, 1, -1, -1};

    unsigned short r; // # rows
    unsigned short c; // # columns

    for ( r= 0; r < n; ++r) { // getting array's values
        for (c = 0; c < m; ++c)
            cin >> arr[r][c];
    }

    cin >> x >> y;
    x--;
    y--;
    
    // check the available areas
    check_boarders(n, m, x, y); 

    unsigned short idx;
    unsigned short new_row_pos;
    unsigned short new_col_pos;
    bool is_true = true;
    for (idx = 0; idx < 8; ++idx ) {
        if (!boarders_arr[idx])
            continue;

        // get the new positions
        new_row_pos = x + row_dir[idx];
        new_col_pos = y + col_dir[idx];


        if (arr[new_row_pos][new_col_pos] == '.') {
            is_true = false;
            break;
        }

    }
    if (!is_true)
        cout << "no\n";
    else
        cout << "yes\n";

    return 0;
}

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int letter = coordinates[0] - 'a' + 1;
        int number = coordinates[1] - '0';
        
        if((letter + number) % 2 == 1) {
            return true;
        }
        return false;
    }
};
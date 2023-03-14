// Your First holeCounter Program for ASCII
// GNU GPL 3 License
// hello im nano comment!

#include <stdio.h>

int HoCo(const char * );

int main() {

    char * YaStroka = "Windowsppppppppp§";

    printf("\n holes in string: %d",HoCo(YaStroka));

    return 0;
}



int HoCo(const char * str) {
    int counter = 0;

    for(int i = 0;str[i];i++) {
        switch (str[i])
        {
            //1 hole
            case '&':
            case '#':
            case '0':
            case '4':
            case '6':
            case '9':
            case '@':
            case 'A':
            case 'a':
            case 'b':
            case 'D':
            case 'd':
            case 'e':
            case 'g':
            case 'o':
            case 'O':
            case 'p':
            case 'P':
            case 'q':
            case 'Q':
            case 'R': counter++;
                break;
        
            //2 holes
            case '$':
            case '%':
            case 'B':
            case '8': counter=+2;
                break;
            default:
                break;
        }
    }
    return counter;
}

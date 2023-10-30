# Fuction getchar in C programming
getchar is a function in C programming language that reads a single character from the standard input stream stdin. It is included in the stdio.h header file.

# END OF FILE (EOF) in C Programming
After we enter the text, if we press CTRL+Z in windows or CTRL+D in Linux, the text terminates i.e. it indicates the file reached end nothing to read.

### Example 1 : 
```c
#include <stdio.h>

int main() {

    char i;
    printf("Please enter any character: ");

    while((i=getchar())!=EOF){
        printf("Your character is %c\n",i);
        printf("Please enter next character: \n");
}

        printf("End");
     return 0;
}

```

**Output**
```
Please enter any character: u
Your character is u
Please enter next character:
Your character is

Please enter next character:
^Z
End

```

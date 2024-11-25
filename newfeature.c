#include <stdio.h>
void main() {
// need to print current working dir.
// please develop this function.
char pwd[1024];
getcwd(pwd, sizeof(pwd));
printf("%s\n",pwd);
}

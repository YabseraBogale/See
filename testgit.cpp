// to run
// g++ -o git testgit.cpp && ./git
#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    system("git status");
    system("git add .");
    system("git commit -m 'ok'");
    system("git push");
    return 0;
}
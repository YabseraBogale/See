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
	int status;
    FILE *fp=popen("git status","r");
    status=pclose(fp);
    if(status==-1){
		cout<<"error"<<endl;
	}
    return 0;
}

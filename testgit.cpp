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
	char buffer[128];
	string result = "";
    FILE *fp=popen("git status","r");
    while (!feof(fp)) {

      // use buffer to read and add to result
      if (fgets(buffer, 128, fp) != NULL)
         result += buffer;
   }
   system("clear");
   cout<<result<<endl;
    
    return 0;
}

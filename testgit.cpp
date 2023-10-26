// to run
// g++ -o git testgit.cpp && ./git
#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	char buffer[128];
	string result = "";
    FILE *fp=popen("git status && git add . && git commit -m 'ok' && git push","r");
    while (!feof(fp)) {

      // use buffer to read and add to result
      if (fgets(buffer, 128, fp) != NULL)
         result += buffer;
   }
   system("clear");
   cout<<result.length()<<endl;
    
    return 0;
}

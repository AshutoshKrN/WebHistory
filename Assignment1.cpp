#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
stack<string> s1;

int addSiteToHistory(string url){
	s1.push(url);
}

bool isBrowsingHistoryEmpty(){

}
string mostRecentlyVisitedSite(){
	return s1.top();
}
void goBackInTime(int n){

}
string printBrowsingHistory(){

		return s1.top();
     
}
int main(){


}

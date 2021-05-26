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

	int ch;
	while(1)
	{
		cout<<"1.Visit url"<<endl;
		cout<<"2.Empty or not"<<endl;
		cout<<"3.Recently Visited"<<endl;
		cout<<"4.Go back in Time"<<endl;
		cout<<"5.Browsing History"<<endl;
		cout<<"6.Exit"<<endl;
		
		cout<<"Enter ur choice:";
		cin>>ch;
	
	switch(ch)
	{
	case 1:{
	    string s;
	       cout<<"Enter website name to visit:"<<endl;
	       cin>>s;
	       addSiteToHistory(s);
	       break;}
		   
	             
	case 2: {
	
	         bool b=isBrowsingHistoryEmpty();
	         cout<<b<<endl;
	         break;
	        }	
  
	case 3: {
	         cout<<mostRecentlyVisitedSite();
	         break;
	     }
	case 4: {
	      int n;
	     cout<<"Enter n to delete most recent history:";
	     cin>>n;
	     goBackInTime(n);
	     cout<<"Deleted";
	     break;
	 }
	
	case 5:{
		     while(!s1.empty())
		     {
		     	cout<<printBrowsingHistory()<<endl;
		     	s1.pop();
			 }
			 break;
           }
	

	case 6:exit(0);
	default:{
		
		cout<<"Invalid Input/n/n";
	}
}
}
	
}

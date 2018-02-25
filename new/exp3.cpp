#include<iostream>
#include<iterator>
#include<fstream>
#include<string>
#include<list>
#include<map>
using namespace std;
int main()
{
map<int,list<string> >dic;
ifstream in("/home/ahmedbahgat/Desktop/text");
string word;

while(!in.eof())
{
int sum=0;
in>>word;
for(int i=0;i<word.length();i++)
{
sum+=int(word[i]);
}
dic[sum].push_back(word);
}
map<int,list<string> >::iterator i;
for(i=dic.begin();i!=dic.end();i++)
{
cout <<"ascii tag:"<<i->first<<" :  words: "/*<<i->second<<endl*/;
for(list<string>::iterator j=(i->second).begin();j!=(i->second).end();j++)
cout<<*j<<" ";
cout<<endl;
}
return 0;
}

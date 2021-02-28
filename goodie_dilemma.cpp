#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b)
{   //compare the price in vector as second value of vactor pare is price and store in ascending order
    return a.second<b.second;
}

int main() {
	int n;
	//take input for employees whom need be considered for distribution
	cout<<"Enter the number of employees : ";
	cin>>n;
	cout<<endl;
	//hardcoded input as input for goodies and prices dont change 
	vector<pair<string,int>> vec;
	vec.push_back(make_pair("Fitbit Plus",7980));
	vec.push_back(make_pair("IPods",22349));
	vec.push_back(make_pair("MI Band",999));
	vec.push_back(make_pair("Cult Pass",2799));
	vec.push_back(make_pair("Macbook Pro",229900));
	vec.push_back(make_pair("Digital Camera",11101));
	vec.push_back(make_pair("Alexa",9999));
	vec.push_back(make_pair("Sandwich Toaster",2195));
	vec.push_back(make_pair("Microwave Oven",9800));
	vec.push_back(make_pair("Scale",4999));
	//sort in ascending order
	sort(vec.begin(),vec.end(),cmp);
	    
	int i=0,j=n-1;
	//mini is diff between the highest and lowest price of goodie.
	int mini = vec[n-1].second-vec[0].second;
	int ind = i;
	//compare the price of ith item and n-1th item as diff needs to be least
	while(j < 10)
	{
	    if(vec[j].second - vec[i].second < mini)
	    {
	        mini = vec[j].second - vec[i].second;
	        ind = i;
	    }
	    i++;
	    j++;
	}
	//print goodies that are selected for distribution
	cout<<"Here the goodies that are selected for distribution are :"<<endl;
	for(int k=ind;k<ind+n;k++)
	{
	    cout<<vec[k].first<<" : "<<vec[k].second<<endl;
	}
	//print least diff amount of highest and lowest price of items
	cout<<"And the difference between the chosen goodies with highest price and the lowest price is "<<mini<<endl;
	return 0;
}
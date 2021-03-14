#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter your budget : ";
	int budget;
	cin>>budget;
	int choice=0,price=0;
	float quan=0;
	string prod,unit;
	pair<float , int>p;
	map<string , pair<float, int>>m;
	
	while(choice != 2)
	{
	    cout<<endl<<"1. Add item\n2. Exit"<<endl;
	    cout<<"Enter your choice : ";
	    cin>>choice;
	    if (choice == 1)
	    {
	        cout<<"Enter Product : ";
	        cin>>prod;
	        cout<<"Enter Quantity : ";
	        cin>>quan>>unit;
	        cout<<"Enter Price :";
	        cin>>price;
	        if (price <= budget)
	        {
	            budget = budget - price;
	            p.first = quan;
	            p.second = price;
	            string key = prod;
	            
	            if (m.find(key) == m.end())
	            m[key] = p;
	            else
	            {
	                for (auto &it:m)
	                {
	                    if (it.first == key){
	                        budget += (it.second.second); 
	                        break;
	                    }
	                }
	                m[key]=p;
	            }
	            cout<<endl<<"Amount left : "<<budget;
	        }
	        else
	        {
	            cout<<endl<<"Can't buy "<<prod<<" because budget left is : "<<budget;	       
	        }
	        
	    }
	    else
	    {
	        if (budget != 0)
	        {
	            cout<<"Amount left can buy you : "<<endl;
	            for (auto it=m.begin(); it != m.end();it++)
	            {
	                if (it->second.second <= budget)
	                {
	                    cout<<it->first<<endl;
	                }
	            }
	        }
	        
	        cout<<"GROCERY LIST"<<endl;
	        cout<<"Product\tQty\tPrice"<<endl;
	        for (auto it=m.begin(); it != m.end();it++)
	        {
	            cout<<it->first<<"\t"<<it->second.first<<"\t"<<it->second.second<<endl;
	        }
	    }
	    
	}
	

    return 0;
}
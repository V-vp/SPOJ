	#include<bits/stdc++.h>
	using namespace std;
	int main() 
{
    // declaring list
    list<int> list1[5];
    //list1 = new list<int>[5];
     
    // using assign() to insert multiple numbers
    // creates 2 occurrences of "2"
    //list1.assign(2,2);
     
    // using push_back to insert elements at the end
    // inserts 5 at end
    list1[1].push_back(5);
    list1[1].push_back(4);
    list1[2].push_back(3);
    list1[3].push_back(1);
     
    // Printing the new list
    cout << "The list after inserting elements using push_back is : ";
    for(int a=1;a<=3;a++)
    {
    for (list<int>::iterator i=list1[a].begin(); i!=list1[a].end(); i++)
       cout << *i << " ";
  
    cout << endl;
  }   
    // using emplace_back to insert elements at the end
    // inserts 7 at end
    //list1.emplace_back(7);
     
    // Printing the new list
   /* cout << "The list after inserting elements using emplace_back is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";*/
     
}
	

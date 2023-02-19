#include<iostream>
#include <string>
using namespace std;
 int main()
 {
 	int complaint_no;
	string line_manager, IT_manager;
	
 	
	cout<<"	*#*#*#*#*#*#*#*#";
 	cout<<"\n	Ticket allocation system";
 	cout<<"\n	*#*#*#*#*#*#*#*#";
 	
 	cout<<"\nEnter Employee complaint number: ";
 	cin>>complaint_no;
 	
 	cout<<"Enter (approved) for complaint status approved and (not approved) for complaint status not approved";
 	
	cout<<"\nEnter approval status by line manager: ";
 	cin>>line_manager;
 	
 	
 	
 	if(line_manager=="approved")
 	{	cout<<"\nEnter approval status by IT manager: ";
 		cin>>IT_manager;
 			if(IT_manager=="approved")
 				{
				cout<<"#######################################";
 				cout<<"\n#                                     #";
 				cout<<"\n# Your complaint has been approved    #";
 				cout<<"\n#                                     #";
 				cout<<"\n#######################################";
 				}
 			else
 				{
				cout<<"###########################################";
 				cout<<"\n#                                         #";
 				cout<<"\n# Your complaint has not been approved    #";
 				cout<<"\n#                                         #";
 				cout<<"\n###########################################";
 				}
	}
	else
		{
		cout<<"###########################################";
 		cout<<"\n#                                         #";
 		cout<<"\n# Your complaint has not been approved    #";
 		cout<<"\n#                                         #";
 		cout<<"\n###########################################";
 		}
}

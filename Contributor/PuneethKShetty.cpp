#include <iostream>
using namespace std;
int main()
{
    bool hacktoberfest,fork,commit,createpullrequest;
    int hacktoberfestaccepted;
    cin>>hacktoberfest>>fork>>commit>>createpullrequest>>hacktoberfestaccepted;
    if(hacktoberfest == true)
    {
        if(fork==true)
        {
            if(commit==true)
            {
                if(createpullrequest==true)
                {
                    if(hacktoberfestaccepted == 1)
                    {
                        printf("Accept my PR");
                    }
                }
                else
                {
                    printf("Visit pull request and click on create pull request");
                   
                }
            }
            else
            {
                printf("Add something in my repo");
            }
        }
        else
        {
            printf("Please do fork the project");
        }
    }
    else
    {
        printf("Please register for hacktoberfest 2021");
    }
      return 0;
}

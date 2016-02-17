#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n;
    cout<<"Enter no of testcases"<<endl;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
            cout<<"Enter the sides";
            cin>>a>>b>>c;
            if(a>0&&b>0&&c>0)
           {


                    if(((a*a)==(b*b)+(c*c))||((b*b)==(c*c)+(a*a))||((c*c)==(a*a)+(b*b)))
                    {
                      cout<<"Pythagorean triplet"<<endl;

                    }
                    else
                    {
                      cout<<"Not Pythagorean triplet"<<endl;
                    }
           }
           else
           {
            cout<<"Error"<<endl;
           }

    }
    return 0;
}

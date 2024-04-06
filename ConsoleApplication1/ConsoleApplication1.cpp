#include <iostream>
#include <string>
using  namespace std;
struct village
{
    int region_number;
};
struct region
{
    string extensions[3]{"garage","barn","bathhouse"};
    int house_foloor;
};

struct house
{
    string floors[3];
};
struct rooms
{
    string room[5]{"kitchen","bedroom","bath","child","guest"}; 
};




int main()
{
    village region_number;
    region extensions;
    region house_floor;
    house floors;
    rooms room;
    int on;
    cin >> on;
    int i = 0;
    while (on)
    {
        int f;
        int r;
        if(i%2==0)
        {
            region_number.region_number = (1000-i);
            if(i%2==0 and i%3!=0)
            {
                f = 3;
                r =0;
            }
            if(i%2==0 and i%3==0)
            {
                f=2;
                r = 2;
            }
        }
        else
        {
            region_number.region_number = (1000+i);
            f = 1;
            r=1;
        }
        house_floor.house_foloor=r+1;
        cout << region_number.region_number << " " << extensions.extensions[f-1] << " " << house_floor.house_foloor <<" " ;
        for(int k = 1; k<=f; k++)
        {
            cout <<"floor=" << k <<" ";
            for(int l=0 ; l<=r; l++)
            {
                for(int h = 0; h<5; h++){}
                cout  << room.room[l] << " " ;
            }
        }
        
        
        i++;
        cin >> on;
            
    }
        
    
}
    

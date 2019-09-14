#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


class Box
{
    private:
        int l,b, h;
    public:
        Box();
        Box(int length, int breadth, int height);
        Box(const Box &B);
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
        friend bool operator < (Box&A, Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l)            && (A.b == B.b)) ){
            return true;
        }
        return false;
        
    }
    
        
        friend std::ostream& operator <<(std::ostream& out, const Box &B){
        
        out << B.l << ' ' << B.b << ' ' << B.h;             
        return out;
        }
        
};



Box::Box()
{
    l = 0;
    b = 0;
    h = 0;
}

Box::Box(int length, int breadth, int height)
{
    l = length;
    b = breadth;
    h = height;
}

Box::Box(const Box &B)
{
    l = B.l;
    b = B.b;
    h = B.h;
}

int Box::getLength()
{
    return l;
}

int Box::getBreadth()
{
    return b;
}

int Box::getHeight()
{
    return h;
}

long long Box::CalculateVolume()
{
    return (long long)l*b*h;
}



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
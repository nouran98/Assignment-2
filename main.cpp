#include <iostream>
#include <vector>

using namespace std;
class Pet
{
public:
    string name ;
    bool neu;
    bool talks;
    virtual void printDescription ()
    {} ;
    Pet()
    {
        name = " " ;
    }


};

class Dog : public Pet
{
public:

    void printDescription ()
    {
        cout << "Dog named " << name << endl;

        cout << this->neu <<  endl ;


    }


};

class Cat : public Pet
{
public:
    int y ;

    void printDescription ()
    {
        cout << "Cat named " << name << endl ;
        cout << this->neu << endl ;

    }


};

class Bird : public Pet
{
public:
    int z ;

    void printDescription ()
    {
        cout << "Bird named " <<  name << endl ;
        cout << this -> talks << endl ;

    }


};

int main()
{
    Dog d1 ;
    Cat c1 ;
    Bird b1 ;
    string n ;
    int x1 , y1 , z1 , counter = 0 ;
    vector < Pet* > vec;

        cout << " Number of Pets do you want to enter=" ;
        cin >> counter;
        for (int j = 0 ; j < counter ; j++)
        {
            int i;
            cout << " Enter 0 for dogs , 1 for cats , 2 for birds " ;
            cin >> i;

            Pet* object;

            if (i==0)
            {
                cout << " enter dog name " ;
                cin >> n ;
                cout << " enter 1 if it's neuter spayed or 0 if it's not " ;
                cin >> x1 ;

                object = new Dog;
                object->name = n;
                object->neu = x1;
                vec.push_back( object );

            }
             if (i==1)
            {
                cout << " enter cat name " ;
                cin >> n ;
                cout << " enter 1 if it's neuter spayed or 0 if it's not " ;
                cin >> y1 ;
                object = new Cat;
                object->name = n;
                object->neu = y1;
                vec.push_back( object );


            }
             if (i==2)
            {
                cout << " enter Bird name " ;
                cin >> n ;
                cout << " enter 1 if it talks or 0 if it doesn't " ;
                cin >> z1 ;
                object = new Bird;
                object->name = n;
                object->talks = z1;
                vec.push_back( object );


            }
        }
        counter = 0 ;

    for ( int i = 0; i < vec.size(); i++ )
    {
        vec[i]->printDescription();
        cout << endl;
    }


    return 0;
}

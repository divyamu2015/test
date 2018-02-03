using namespace std;
#ifndef T_test
#define T_test
template <class T>
class Linearlist
{
 private:
        int length;
        int max;
        T*elemant;
public:
       LinearList(int size=10);
       ~LinearList(){delete[]element;}
       int isEmpty()const{return length=0;}
       int Length()const{return length;}
       int Find(int K,T&X)const;
       int Search(const T&X)const;
       void Delete(int K,T&X);
       void Insert(intK,const T&X);
       void output()const;
};

 template<class T>
 linearlist<T>::linearlist(int LinearSize)
  {
   max size =Linear size;
   element=new t[maxsize];
   length=0;
  }
 template<class T>
 int linearlist<T>::find(int k,T&x)const
 {
  if(k<1||k>length)
  return 0;
  else
    x=element[k-1];
    return 1;
 }
 template<class T>
 int Linearlist<T>::Search(const T&X)const
  {
   for[int i=0;i<length;i++)
    if[element[i]==x)
      return ++i;
     else
        return0;
   }
  template<class T>
  void Linearlist<T>::delete(intk,t&x)
   {  
     if(find(k,x))
     {
     for(int i=k;i<length;i++)
     elemant[i-1]=element[i];
     length--i;
   }
   else
    cout<<"\n elemant not present";
    }
     template<class T>
     void Linear list<T>::insert(int K,const T&x)
    {
      if(k<0||k>length)
     cout<<"\n out of bounds";
     if (length==maxsize)
     cout<<"\n no memory")
     else
     {
     for (int i=length-1;i<=k;i--)
     elemant[i+1]=elemant[i];
     elemant[k]=x;
     length++;
     cout<<"imserted"<<endl;
     }
    }
     template<class T>
     void linearlist<T>::output()const
     {
      if(isempty())
      const<<"\n list is empty";
      else
         for (int i=0;i<length;i++)
         cout<<elemant[i]<<"\t";
       }
#endif

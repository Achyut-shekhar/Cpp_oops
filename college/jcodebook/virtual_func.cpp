#include <bits/stdc++.h>
using namespace std;

class cwh
{
protected:
  string title;
  float rating;

public:
  cwh(string s, float r)
  {
    title = s;
    rating = r;
  }
//if you remove virtual the pointer of cwh will always come to this display
  virtual void display() 
  {
    cout<<"base"<<endl;
  }
};

class cwhVideo : public cwh
{

  int videoLeng;

public:
  cwhVideo(string s, float r, int vl) : cwh(s, r)
  {
    videoLeng = vl;
  }
  void display() override
  {
    cout << "amazing video" << endl;
    cout << "rating: " << rating << endl;
    cout << "length of the video: " << videoLeng << endl;
  }
};

class cwhtext : public cwh
{
  int words;

public:
  cwhtext(string s, float r, int wc) : cwh(s, r)
  {
    words = wc;
  }

  void display() override
  {
    cout << "amazing text" << endl;
    cout << "rating: " << rating << endl;
    cout << "words of the text: " << words << endl;
  }
};
int main()
{
  string title;
  float rating, vlen;
  int words;

  title = "django";
  rating = 5;
  vlen = 4.56;

  cwhVideo objVid(title, rating, vlen);
  objVid.display();

  title = "text";
  words = 100;
  rating = 4.5;

  cwhtext objtext(title, rating, words);
  objtext.display();

  // now by pointer;
  cout << "\n\n"
       << "BY POINTERS" << endl;
  cwh *arr[2];
  arr[0] = &objVid;
  arr[1] = &objtext;

  arr[0]->display();
  arr[1]->display();
}
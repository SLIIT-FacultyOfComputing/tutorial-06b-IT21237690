class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setlength(double l);
      void setwidth(double w);
      void setheight(double h);

  int getlength();
  int getwidth();
  int getheight();

       int calcVolume();
};

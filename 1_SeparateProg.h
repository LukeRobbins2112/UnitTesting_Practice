
class TestProg{

 public:
  TestProg(){
    this->val = 0;
  }

  void increment(){
    this->val++;
  }

  bool isEven(){
    return (this->val % 2 == 0);
  }

private:
  int val;

};

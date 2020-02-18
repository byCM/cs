// Pass by Value/Reference

void ChangeValues( int x );

int main()
{
  int x = 5;
  ChangeValues(x);
  cout << "Back in main: " << x << endl;
  return 0;
}

void ChangeValues( int x ) {
  cout << "In ChangeValues: " << x << endl;
  x = 10;
  cout << "In ChangeValues: " << x << endl;
  return;
}

OUTPUT: 
In ChangeValues: 5
In ChangeValues: 10
Bakc in Main: 5


//0 is false and non-0 is True

if (5)
{
cout << " Non-zero is True" <<
endl;
}

Output: Non-zero is True



// Divide

double x = (2 / 3) * 6;
cout << x << endl;

Output: 0

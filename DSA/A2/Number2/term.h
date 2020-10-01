#pragma once
#include <string>
using std::string;

// I have put implementation of the Term class all in the header
// file since it is super simple, just a wrapper around a string and int.
//
// The variables are public to simplify code a bit but could easily be
// changed to private with accessors/mutators.
class Term
{
 public:
  Term() : count(0) {};
  Term(string term) : term(term), count(0) {};
  Term(string term, int count) : term(term), count(count) {};

  // Overload << operator for outputting a term
  friend ostream& operator<<(ostream &os, const Term &t) { 
      os << t.term << " " << t.count;
      return os;
  }
  
  // Overload == operator; two terms the same if their
  // string term is the same, ignoring the count
  friend bool operator==(const Term &t1, const Term &t2) {
    return (t1.term == t2.term);
  }

  // Instance variables
  string term;
  int count;
};

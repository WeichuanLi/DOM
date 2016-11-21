#include "gauss16.h"

double const gauss16::x16[]={
  -0.989400934991649932596,
  -0.944575023073232576078,
  -0.865631202387831743880,
  -0.755404408355003033895,
  -0.617876244402643748447,
  -0.458016777657227386342,
  -0.281603550779258913230,
  -0.095012509837637440185,
   0.095012509837637440185,
   0.281603550779258913230,
   0.458016777657227386342,
   0.617876244402643748447,
   0.755404408355003033895,
   0.865631202387831743880,
   0.944575023073232576078,
   0.989400934991649932596
}; 

double const gauss16::w16[]={
  0.027152459411754094852,
  0.062253523938647892863,
  0.095158511682492784810,
  0.124628971255533872052,
  0.149595988816576732081,
  0.169156519395002538189,
  0.182603415044923588867,
  0.189450610455068496285,
  0.189450610455068496285,
  0.182603415044923588867,
  0.169156519395002538189,
  0.149595988816576732081,
  0.124628971255533872052,
  0.095158511682492784810,
  0.062253523938647892863,
  0.027152459411754094852,
};

//***********************************
//constructor
gauss16::gauss16():gaussInteg(16,x16,w16)
{}

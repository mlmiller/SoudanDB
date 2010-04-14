 /***************************************************************************** 
  * Project: RooFit                                                           * 
  *                                                                           * 
  * This code was autogenerated by RooClassFactory                            * 
  *****************************************************************************/ 

 // Your description goes here... 

 #include "MGMErfcFunction.hh" 
 #include <math.h> 

 ClassImp(MGMErfcFunction) 

 MGMErfcFunction::MGMErfcFunction(const char *name, const char *title, 
                        RooAbsReal& _energy,
                        RooAbsReal& _mean,
                        RooAbsReal& _sigma) :
   RooAbsReal(name,title), 
   fEnergy("fEnergy","Energy",this,_energy),
   fMean("fMean","Mean",this,_mean),
   fSigma("fSigma","sigma",this,_sigma)
 { 
 } 


 MGMErfcFunction::MGMErfcFunction(const MGMErfcFunction& other, const char* name) :  
   RooAbsReal(other,name), 
   fEnergy("fEnergy",this,other.fEnergy),
   fMean("fMean",this,other.fMean),
   fSigma("fSigma",this,other.fSigma)
 { 
 } 



 Double_t MGMErfcFunction::evaluate() const 
 { 
   Double_t func = 0.5 * ( erfc( (fEnergy - fMean)/(sqrt(2)*fSigma) ) );
   return ( func > 1e-7 ? func : 1e-1 );
 } 




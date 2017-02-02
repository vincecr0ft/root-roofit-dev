/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

#ifndef RooStats_Heaviside
#define RooStats_Heaviside

#ifndef ROO_ABS_REAL
#include "RooAbsReal.h"
#endif
#ifndef ROO_REAL_PROXY
#include "RooRealProxy.h"
#endif
#ifndef ROO_CATEGORY_PROXY
#include "RooCategoryProxy.h"
#endif
#ifndef ROO_ABS_REAL
#include "RooAbsReal.h"
#endif
#ifndef ROO_ABS_CATEGORY
#include "RooAbsCategory.h"
#endif

namespace RooStats {

   class Heaviside : public RooAbsReal {
   public:
      Heaviside() {} ;
      Heaviside(const char *name, const char *title,
            RooAbsReal& _x,
            RooAbsReal& _c);
      Heaviside(const Heaviside& other, const char* name=0) ;
      virtual TObject* clone(const char* newname) const { return new Heaviside(*this,newname); }
      inline virtual ~Heaviside() { }

   protected:

      RooRealProxy x ;
      RooRealProxy c ;

      Double_t evaluate() const ;

   private:

      ClassDef(Heaviside,1) // Your description goes here...
   };
}

#endif

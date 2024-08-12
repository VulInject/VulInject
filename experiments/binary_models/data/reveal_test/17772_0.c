void vp9_set_high_precision_mv ( VP9_COMP * cpi , int allow_high_precision_mv ) {
 MACROBLOCK * const mb = & cpi -> mb ;
 cpi -> common . allow_high_precision_mv = allow_high_precision_mv ;
 if ( cpi -> common . allow_high_precision_mv ) {
 mb -> mvcost = mb -> nmvcost_hp ;
 mb -> mvsadcost = mb -> nmvsadcost_hp ;
 }
 else {
 mb -> mvcost = mb -> nmvcost ;
 mb -> mvsadcost = mb -> nmvsadcost ;
 }
 }
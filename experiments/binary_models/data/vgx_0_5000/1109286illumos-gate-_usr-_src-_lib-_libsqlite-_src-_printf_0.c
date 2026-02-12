static char *base_vprintf(
void *(*xRealloc)(void*,int),   
int useInternal,                
char *zInitBuf,                 
int nInitBuf,                   
const char *zFormat,            
va_list ap                      
){
struct sgMprintf sM;
sM.zBase = sM.zText = zInitBuf;
sM.nChar = sM.nTotal = 0;
sM.nAlloc = nInitBuf;
sM.xRealloc = xRealloc;
vxprintf(mout, &sM, useInternal, zFormat, ap);
if( xRealloc ){
if( sM.zText==sM.zBase ){
sM.zText = xRealloc(0, sM.nChar+1);
memcpy(sM.zText, sM.zBase, sM.nChar+1);
}else if( sM.nAlloc>sM.nChar+10 ){
sM.zText = xRealloc(sM.zText, sM.nChar+1);
}
}
return sM.zText;
}
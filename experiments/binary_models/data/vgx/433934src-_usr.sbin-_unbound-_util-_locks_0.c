void FUN1(VAR1* VAR2, void* (*VAR3)(void*), void* VAR4)
{
*VAR2 = FUN2(NULL, 
0, 
(VAR5)VAR3, VAR4,
0, 
NULL); 

*VAR2=(VAR1)FUN3(NULL, 0, (void*)VAR3, VAR4, 0, NULL);
if(*VAR2 == NULL) {
FUN4("", FUN5());
FUN6("");
}
}
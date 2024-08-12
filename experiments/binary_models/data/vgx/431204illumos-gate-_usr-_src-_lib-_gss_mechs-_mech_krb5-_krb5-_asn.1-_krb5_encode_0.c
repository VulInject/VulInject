asn1_error_code VAR1;\
unsigned int VAR2, VAR3 = 0;\
VAR4 *VAR5=NULL;\
VAR6 *VAR7;\
\
*VAR8 = NULL;\
\
if (VAR9 == NULL) return VAR10;\
\
VAR1 = FUN1(&VAR5);\
if (VAR1) return VAR1


VAR1 = FUN2(VAR5,&VAR7);\
VAR11:\
FUN3(&VAR5);\
if (VAR1)\
return VAR1;\
*VAR8 = VAR7;\
return 0

VAR12 FUN4(const VAR13 *VAR9, VAR6 **VAR8)
{
FUN5();
VAR1 = FUN6(VAR5,VAR9,&VAR2);
if (VAR1) goto VAR11;
VAR3 += VAR2;
FUN7();
}
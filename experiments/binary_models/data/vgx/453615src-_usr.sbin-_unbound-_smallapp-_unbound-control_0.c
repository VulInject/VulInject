static VAR1*
FUN1(struct VAR2* VAR3)
{
char* VAR4=NULL, *VAR5=NULL, *VAR6=NULL;
VAR1* VAR7;

if(!(FUN2(VAR3) && VAR3->VAR8))
return NULL;
VAR4 = FUN3(VAR3->VAR9, VAR3, 1);
VAR5 = FUN3(VAR3->VAR10, VAR3, 1);
VAR6 = FUN3(VAR3->VAR11, VAR3, 1);
if(!VAR4 || !VAR5 || !VAR6)
FUN4("");
VAR7 = FUN5(FUN6());
if(!VAR7)
FUN7("");
if((FUN8(VAR7, VAR12) & VAR12)
!= VAR12)
FUN7("");
if((FUN8(VAR7, VAR13) & VAR13)
!= VAR13)
FUN7("");

if((FUN8(VAR7, VAR14) &
VAR14) != VAR14)
FUN7("");
if(!FUN9(VAR7,VAR6))
FUN10("", VAR6);
if(!FUN11(VAR7,VAR5,VAR15))
FUN10("", VAR5);
if(!FUN12(VAR7))
FUN7("");
if(FUN13(VAR7, VAR4, NULL) != 1)
FUN10("",
VAR4);
FUN14(VAR7, VAR16, NULL);

free(VAR4);
free(VAR5);
free(VAR6);
return VAR7;
}
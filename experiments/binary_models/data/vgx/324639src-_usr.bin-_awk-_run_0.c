VAR1 *FUN1(VAR2 *VAR3)	
{
VAR1 *(*VAR4)(VAR2 **, int);
VAR1 *VAR5;
VAR2 *VAR6;

if (VAR3 == NULL)
return(VAR7);
for (VAR6 = VAR3; ; VAR6 = VAR6->VAR8) {
VAR9 = VAR6;
if (FUN2(VAR6)) {
VAR5 = (VAR1 *) (VAR6->VAR10[0]);
if (FUN3(VAR5) && !VAR11)
FUN4();
else if (FUN5(VAR5) && !VAR12)
FUN6();
return(VAR5);
}
if (FUN7(VAR6->VAR13))	
FUN8("");
VAR4 = VAR14[VAR6->VAR13-VAR15];
VAR5 = (*VAR4)(VAR6->VAR10, VAR6->VAR13);
if (FUN3(VAR5) && !VAR11)
FUN4();
else if (FUN5(VAR5) && !VAR12)
FUN6();
if (FUN9(VAR6))
return(VAR5);
if (FUN10(VAR5))
return(VAR5);
if (VAR6->VAR8 == NULL)
return(VAR5);
FUN11(VAR5);
}
}
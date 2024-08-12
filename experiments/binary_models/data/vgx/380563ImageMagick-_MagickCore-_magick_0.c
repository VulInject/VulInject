static VAR1 *FUN1(int VAR2)
{
VAR1
*VAR3;

VAR3=FUN2(VAR2,VAR4);
if (VAR3 == VAR5)
return(VAR3);
if (VAR3 != VAR6)
VAR3=FUN2(VAR2,VAR3);
else
(void) FUN3(VAR7,FUN4(),
"",VAR2);
return(VAR3);
}
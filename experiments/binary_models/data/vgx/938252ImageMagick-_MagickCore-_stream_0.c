static inline VAR1 FUN1(VAR2 *VAR3,
VAR4 *VAR5)
{
if (VAR3->VAR6 != (VAR7) ((VAR8) VAR3->VAR6))
return(VAR9);
VAR3->VAR10=(VAR11 *) FUN2(FUN3(1,
(VAR8) VAR3->VAR6));
if (VAR3->VAR10 != (VAR11 *) NULL)
(void) memset(VAR3->VAR10,0,(VAR8) VAR3->VAR6);
else
{
(void) FUN4(VAR5,FUN5(),
VAR12,"","",
VAR3->VAR13);
return(VAR9);
}
return(VAR14);
}
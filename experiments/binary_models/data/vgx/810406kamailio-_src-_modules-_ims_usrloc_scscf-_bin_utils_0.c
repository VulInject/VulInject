static int FUN1(VAR1 *VAR2,VAR3 *VAR4)
{
str VAR5;
if (!FUN2(VAR2,	&(VAR4->VAR6))) goto VAR7;
if (!FUN3(VAR2,&VAR5)||!FUN4(&(VAR4->VAR8),&VAR5))	goto VAR7;

return 1;
VAR7:
FUN5("",VAR2->VAR9,VAR2->VAR9);
if (VAR4) {
if (VAR4->VAR8.VAR5) FUN6(VAR4->VAR8.VAR5);
}
return 0;
}
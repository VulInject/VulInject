int
FUN1(struct VAR1 *VAR2, uint16_t VAR3)
{
int VAR4;


VAR5:
if ((VAR2->VAR6 + 8) > VAR2->VAR7) {

if (VAR2->VAR8 & VAR9)
return (VAR10);
VAR2->VAR11 = VAR3;
VAR4 = FUN2(VAR2);
if (VAR4)
return (VAR4);
VAR2->VAR12++;
}


VAR4 = FUN3(VAR2);
if (VAR4)
return (VAR4);
FUN4("", VAR2->VAR13);


if (VAR2->VAR14 >= 6) {
char *VAR15 = VAR2->VAR13 + VAR2->VAR14 - 6;
if (FUN5(VAR15, "", 6) == 0) {
*VAR15 = ''; 
VAR2->VAR14 -= 6;
}
}


if (VAR2->VAR14 == 0)
goto VAR5;


if (VAR2->VAR8 & VAR16) {
if (VAR2->VAR17 != VAR2->VAR14)
goto VAR5;
if (FUN6(VAR2->VAR18, VAR2->VAR13,
VAR2->VAR14, VAR19,
VAR20, &VAR4) || VAR4)
goto VAR5;
}

return (0);
}
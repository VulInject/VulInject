FUN1 (VAR1 *             VAR2,
struct VAR3 * VAR4,
char *            VAR5,
char *            VAR6)
{
char* VAR7 = VAR5;
char* VAR8 = VAR7;

memset (VAR4, 0, sizeof (* VAR4));


VAR4->VAR9 = FUN2 (VAR2, (VAR10 *) VAR8);
VAR8 += 4;
if (VAR4->VAR9 == 0
|| (VAR7 + VAR4->VAR9) >= VAR6)
return VAR11;
if (VAR4->VAR9 < 6)
{

VAR4->VAR12 = VAR13;
return VAR14;
}


VAR4->VAR12 = FUN3 (VAR2, (VAR10 *) VAR8);
VAR8 += 2;


while (VAR8 < (VAR7 + VAR4->VAR9))
{
unsigned short VAR15;


VAR15 = FUN3 (VAR2, (VAR10 *) VAR8);
VAR8 += 2;

switch (FUN4 (VAR15))
{
case VAR16:
VAR8 += 2;
break;
case VAR17:
case VAR18:
if (VAR15 == VAR19)
VAR4->VAR20 = FUN2 (VAR2, (VAR10 *) VAR8);
else if (VAR15 == VAR21)
{
VAR4->VAR22 = FUN2 (VAR2, (VAR10 *) VAR8);
VAR4->VAR23 = 1;
}
VAR8 += 4;
break;
case VAR24:
VAR8 += 8;
break;
case VAR25:
if (VAR15 == VAR26)
VAR4->VAR27 = FUN2 (VAR2, (VAR10 *) VAR8);
else if (VAR15 == VAR28)
VAR4->VAR29 = FUN2 (VAR2, (VAR10 *) VAR8);
VAR8 += 4;
break;
case VAR30:
VAR8 += 2 + FUN3 (VAR2, (VAR10 *) VAR8);
break;
case VAR31:
VAR8 += 4 + FUN2 (VAR2, (VAR10 *) VAR8);
break;
case VAR32:
if (VAR15 == VAR33)
VAR4->VAR34 = VAR8;
VAR8 += strlen (VAR8) + 1;
break;
}
}

return VAR14;
}
FUN1 (
VAR1      *VAR2,
VAR3     **VAR4)
{
VAR3     *VAR5 = *VAR4;
VAR3     *VAR6;
char                    *VAR7;
char                    *VAR8;


FUN2 (VAR9);




if (VAR5->VAR10.VAR11 != VAR12)
{
FUN3 (VAR13);
}

if (VAR5->VAR14.VAR15 == 0)
{
FUN4 ((VAR16,
VAR2->VAR17, VAR2->VAR18,
""));



VAR2->VAR19 |= VAR20;
FUN3 (VAR13);
}



VAR6 = FUN5 (VAR5->VAR14.VAR15);
if (!VAR6)
{
FUN3 (VAR21);
}


VAR7 = VAR5->VAR14.VAR22;
if (*VAR7 == '')
{
VAR7++;
VAR6->VAR14.VAR15--;

FUN6 ((VAR23,
"", VAR2->VAR17));
}


for (VAR8 = VAR6->VAR14.VAR22; *VAR7; VAR8++, VAR7++)
{
*VAR8 = (char) FUN7 ((int) *VAR7);
}

FUN8 (VAR5);
*VAR4 = VAR6;
FUN3 (VAR13);
}
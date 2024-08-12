FUN1 (struct VAR1 *VAR2, struct VAR1 *VAR3)
{
struct VAR1 *VAR4;
struct VAR1 *VAR5;
struct VAR1 *VAR6 = NULL;
int VAR7, VAR8;
int VAR9, VAR10;
char *VAR11;
char VAR12;
struct VAR13 *VAR14 = FUN2 (FUN3 (VAR2));
struct VAR13 *VAR15 = FUN2 (FUN3 (VAR3));

FUN4 (VAR2, VAR14);
FUN4 (VAR3, VAR15);



if (FUN5 (VAR15) == VAR16)
{
struct VAR13 *VAR17 = VAR14;
VAR14 = VAR17;
VAR17 = VAR15;
VAR4 = VAR3;
VAR5 = VAR2;
}
else
{
VAR4 = VAR2;
VAR5 = VAR3;
}



if (FUN5 (VAR14) == VAR16)
{

if (FUN5 (VAR15) == VAR18
|| FUN5 (VAR15) == VAR19)
{
VAR9 = FUN6 (FUN7 (VAR4));
VAR8 = FUN8 (VAR15);
VAR11 = (char *) alloca (VAR9 * VAR8);
if (FUN5 (VAR15) == VAR19)
{
VAR12 = (char) FUN9 (VAR15,
FUN10 (VAR5));
for (VAR10 = 0; VAR10 < VAR9; VAR10++)
{
*(VAR11 + VAR10) = VAR12;
}
}
else
{
for (VAR10 = 0; VAR10 < VAR9; VAR10++)
{
memcpy (VAR11 + (VAR10 * VAR8), FUN10 (VAR5),
VAR8);
}
}
VAR6 = FUN11 (VAR11, VAR9 * VAR8);
}
else if (FUN5 (VAR15) == VAR20
|| FUN5 (VAR15) == VAR21)
{
FUN12 ("");
}
else
{
FUN12 ("");
}
}
else if (FUN5 (VAR14) == VAR18
|| FUN5 (VAR14) == VAR19)
{

if (FUN5 (VAR15) != VAR18
&& FUN5 (VAR15) != VAR19)
{
FUN12 ("");
}
VAR7 = FUN8 (VAR14);
VAR8 = FUN8 (VAR15);
VAR11 = (char *) alloca (VAR7 + VAR8);
if (FUN5 (VAR14) == VAR19)
{
*VAR11 = (char) FUN9 (VAR14, FUN10 (VAR4));
}
else
{
memcpy (VAR11, FUN10 (VAR4), VAR7);
}
if (FUN5 (VAR15) == VAR19)
{
*(VAR11 + VAR7) =
(char) FUN9 (VAR15, FUN10 (VAR5));
}
else
{
memcpy (VAR11 + VAR7, FUN10 (VAR5), VAR8);
}
VAR6 = FUN11 (VAR11, VAR7 + VAR8);
}
else if (FUN5 (VAR14) == VAR20
|| FUN5 (VAR14) == VAR21)
{

if (FUN5 (VAR15) != VAR20
&& FUN5 (VAR15) != VAR21)
{
FUN12 ("");
}
FUN12 ("");
}
else
{

FUN12 ("");
}
return (VAR6);
}
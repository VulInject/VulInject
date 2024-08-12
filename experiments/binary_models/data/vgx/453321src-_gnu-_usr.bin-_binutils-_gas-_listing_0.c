FUN1 (VAR1 *VAR2)
{

if ((VAR3 || (VAR4 >= (unsigned int) VAR5))
&& VAR5 != 0)
{
unsigned int VAR6 = 10;
int VAR7 = 0;
int VAR8 = 0;

VAR9++;

while (VAR6 != 0 && VAR2)
{
if (VAR2->VAR10 == VAR11 && !VAR8)
{
VAR8 = 1;
VAR12 = VAR2->VAR13;
}
if (VAR2->VAR10 == VAR14 && !VAR7)
{
VAR7 = 1;
VAR15 = VAR2->VAR13;
}
VAR2 = VAR2->VAR16;
VAR6--;
}

if (VAR9 > 1)
{
fprintf (VAR17, "");
}

fprintf (VAR17, "", VAR18, VAR19, VAR9);
fprintf (VAR17, "", VAR15);
fprintf (VAR17, "", VAR12);
VAR4 = 3;
VAR3 = 0;
}
}
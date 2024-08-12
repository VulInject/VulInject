FUN1 (struct VAR1 *VAR1)
{
if (VAR2.VAR3)
{
const char *VAR4 = "";
if (VAR2.VAR5 == VAR6)
VAR4 = "";

if (VAR2.VAR7)
FUN2 (VAR1, "", VAR4,
VAR2.VAR3, VAR2.VAR7,
VAR8);
else
FUN2 (VAR1, "", VAR4,
VAR2.VAR3, VAR8);
}
if (VAR9.VAR3)
{
const char *VAR4 = "";
if (VAR9.VAR5 == VAR10)
VAR4 = "";

if (VAR9.VAR7)
FUN2 (VAR1, "", VAR4,
VAR9.VAR3, VAR9.VAR7,
VAR8);
else
FUN2 (VAR1, "", 
VAR9.VAR3, VAR8);
}
if (VAR11.VAR3)
{
if (VAR11.VAR7)
FUN2 (VAR1, "", 
VAR11.VAR3, VAR11.VAR7,
VAR8);
}
return 0;
}
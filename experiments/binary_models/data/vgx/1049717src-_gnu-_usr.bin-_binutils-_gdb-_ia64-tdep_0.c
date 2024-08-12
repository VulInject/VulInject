FUN1 (CORE_ADDR VAR1, CORE_ADDR VAR2, int *VAR3)
{
struct symtab_and_line VAR4;
CORE_ADDR VAR5 = VAR1;


*VAR3 = 0;

VAR4 = FUN2 (VAR1, 0);
if (VAR4.VAR6 != 0)
{
int VAR7;
CORE_ADDR VAR8 = VAR4.VAR9;


for (VAR7 = 2 * VAR10; 
VAR7 > 0 && (VAR2 == 0 || VAR8 < VAR2);
VAR7--)
{
struct symtab_and_line VAR11;

VAR11 = FUN2 (VAR8, 0);
if (VAR11.VAR6 == 0)
break;
if (VAR11.VAR6 <= VAR4.VAR6 
&& VAR11.VAR12 == VAR4.VAR12)
{
VAR4 = VAR11;
}
VAR8 = VAR11.VAR9;
}

if (VAR2 == 0 || VAR4.VAR9 < VAR2)
{
VAR2 = VAR4.VAR9;
if (VAR5 == FUN3 (VAR2))
*VAR3 = 1;
}
}
return VAR2;
}
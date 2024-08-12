int
FUN1(Dwarf_Debug VAR1,
Dwarf_Off VAR2,
VAR3 * VAR4,
UNUSEDARG VAR5 * VAR6)
{
Dwarf_Off VAR7 = 0;
int VAR8 = 0;

VAR8 = FUN2(VAR1, VAR2,true,
&VAR7,VAR6);
if (VAR8 != VAR9) {
return VAR8;
}
*VAR4 = VAR2 + VAR7;
return VAR9;
}
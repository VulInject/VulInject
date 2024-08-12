void
FUN1(VAR1 *VAR2)
{
pci_regspec_t VAR3;
int VAR4, VAR5, VAR6;

VAR3.VAR7 = 0;
VAR3.VAR8 = 0;
VAR3.VAR9 = 0;
VAR3.VAR10 = VAR11; 
for (VAR4 = 0; VAR4 < VAR12; VAR4++) {
for (VAR5 = 0; VAR5 < VAR13; VAR5++) {
for (VAR6 = 0; VAR6 < VAR14; VAR6++) {
VAR3.VAR15 = ((FUN2(VAR4))
<< VAR16) +
(VAR5 << VAR17) +
(VAR6 << VAR18);
if (FUN3(
VAR19, VAR2, "",
(int *)&VAR3, sizeof (VAR3)/sizeof (int)) !=
VAR20)
FUN4(VAR21, ""
"");

if (FUN5(VAR2,
&VAR22[VAR4][VAR5][VAR6]) != VAR23)
FUN4(VAR21, ""
"");
}
}
}
FUN6(VAR2);
}
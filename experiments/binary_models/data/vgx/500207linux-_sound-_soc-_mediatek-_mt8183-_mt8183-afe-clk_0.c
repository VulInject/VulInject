static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
int VAR7;

if (VAR3) {
VAR7 = FUN2(VAR5->VAR8[VAR9]);
if (VAR7) {
FUN3(VAR2->VAR10, "",
VAR11, VAR12[VAR9], VAR7);
goto VAR13;
}
VAR7 = FUN4(VAR5->VAR8[VAR9],
VAR5->VAR8[VAR14]);
if (VAR7) {
FUN3(VAR2->VAR10, "",
VAR11, VAR12[VAR9],
VAR12[VAR14], VAR7);
goto VAR15;
}


VAR7 = FUN2(VAR5->VAR8[VAR16]);
if (VAR7) {
FUN3(VAR2->VAR10, "",
VAR11, VAR12[VAR16], VAR7);
goto VAR17;
}
VAR7 = FUN4(VAR5->VAR8[VAR16],
VAR5->VAR8[VAR18]);
if (VAR7) {
FUN3(VAR2->VAR10, "",
VAR11, VAR12[VAR16],
VAR12[VAR18], VAR7);
goto VAR19;
}
} else {
VAR7 = FUN4(VAR5->VAR8[VAR16],
VAR5->VAR8[VAR20]);
if (VAR7) {
FUN3(VAR2->VAR10, "",
VAR11, VAR12[VAR16],
VAR12[VAR20], VAR7);
goto VAR21;
}
FUN5(VAR5->VAR8[VAR16]);

VAR7 = FUN4(VAR5->VAR8[VAR9],
VAR5->VAR8[VAR20]);
if (VAR7) {
FUN3(VAR2->VAR10, "",
VAR11, VAR12[VAR9],
VAR12[VAR20], VAR7);
goto VAR21;
}
FUN5(VAR5->VAR8[VAR9]);
}

return 0;

VAR19:
FUN4(VAR5->VAR8[VAR16],
VAR5->VAR8[VAR20]);
FUN5(VAR5->VAR8[VAR16]);
VAR17:
VAR15:
FUN4(VAR5->VAR8[VAR9],
VAR5->VAR8[VAR20]);
FUN5(VAR5->VAR8[VAR9]);
VAR13:
VAR21:
return VAR7;
}
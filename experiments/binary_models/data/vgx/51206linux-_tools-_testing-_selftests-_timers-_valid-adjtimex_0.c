int FUN1(void)
{
struct timex VAR1;
int VAR2, VAR3 = 0;
int VAR4;

FUN2();

memset(&VAR1, 0, sizeof(struct VAR5));


FUN3("");
FUN4(VAR6);
for (VAR4 = 0; VAR4 < VAR7; VAR4++) {
VAR1.VAR8 = VAR9;
VAR1.VAR10 = VAR11[VAR4];

VAR2 = FUN5(&VAR1);
if (VAR2 < 0) {
FUN3("");
FUN3("",
VAR11[VAR4], VAR11[VAR4]>>16);
VAR3 = -1;
goto VAR12;
}
VAR1.VAR8 = 0;
VAR2 = FUN5(&VAR1);
if (VAR1.VAR10 != VAR11[VAR4]) {
FUN3("",
VAR1.VAR10, VAR11[VAR4]);
}
}
for (VAR4 = 0; VAR4 < VAR13; VAR4++) {
VAR1.VAR8 = VAR9;
VAR1.VAR10 = VAR14[VAR4];

VAR2 = FUN5(&VAR1);
if (VAR2 < 0) {
FUN3("");
FUN3("",
VAR14[VAR4], VAR14[VAR4]>>16);
VAR3 = -1;
goto VAR12;
}
VAR1.VAR8 = 0;
VAR2 = FUN5(&VAR1);
if (VAR1.VAR10 == VAR14[VAR4]) {
FUN3("");
FUN3("",
VAR1.VAR10);
VAR3 = -1;
goto VAR12;
}
}


if (sizeof(long) == 8) { 
for (VAR4 = 0; VAR4 < VAR15; VAR4++) {
VAR1.VAR8 = VAR9;
VAR1.VAR10 = VAR16[VAR4];
VAR2 = FUN5(&VAR1);
if (VAR2 >= 0) {
FUN3("");
FUN3("",
VAR16[VAR4]);
VAR3 = -1;
goto VAR12;
}
}
}

FUN3("");
VAR12:

VAR1.VAR8 = VAR9;
VAR1.VAR10 = 0;
VAR2 = FUN5(&VAR1);

return VAR3;
}
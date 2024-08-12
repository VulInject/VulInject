int FUN1(int VAR1)
{
int VAR2;
cvmx_helper_interface_mode_t VAR3;
int VAR4 = FUN2(VAR1);

for (VAR2 = 0; VAR2 < VAR4; VAR2++) {
int VAR5;
int VAR6 = FUN3(VAR1, VAR2);
int VAR7;
struct cvmx_xiface VAR8 =
FUN4(VAR1);
static int VAR9
[VAR10][VAR11]
[VAR12] = {
[0 ... VAR10 -
1][0 ... VAR11 -
1] = { [0 ... VAR12 -
1] = 0 }
};

VAR3 = FUN5(VAR1, VAR2);


if (VAR3 == VAR13 &&
(FUN6(VAR1, VAR2)))
VAR7 = 1;
else
VAR7 = 0;
FUN7(VAR6, VAR7);

VAR14:
VAR5 = FUN8(VAR2, VAR1);

if (VAR5 == -1 && VAR9[VAR8.VAR15][VAR8.VAR16][VAR2] < 5) {
VAR9[VAR8.VAR15][VAR8.VAR16][VAR2]++;
FUN9("",
VAR8.VAR15, VAR8.VAR16, VAR2);
goto VAR14;
}

if (VAR5 == -1) {
FUN9("", VAR8.VAR15,
VAR8.VAR16, VAR2);
continue;
}
}
return 0;
}
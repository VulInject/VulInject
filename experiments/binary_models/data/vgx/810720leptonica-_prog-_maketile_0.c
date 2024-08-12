int main(int    argc,
char **argv)
{
char      *VAR1, *VAR2, *VAR3, *VAR4;
l_int32    VAR5, VAR6, VAR7, VAR8, VAR9;
l_float32  VAR10;
VAR11    *VAR12;
VAR13       *VAR14, *VAR15, *VAR16;
VAR17      *VAR18;

if (argc != 7)
return FUN1(
"",
VAR19, 1);
VAR1 = argv[1];
VAR5 = FUN2(argv[2]);
VAR10 = FUN3(argv[3]);
VAR6 = FUN2(argv[4]);
VAR7 = FUN2(argv[5]);
VAR2 = argv[6];
FUN4(1);


if ((VAR12 = FUN5(VAR1)) == NULL)
return FUN1("", VAR19, 1);


VAR9 = FUN6(VAR12);
VAR18 = FUN7(VAR9);
for (VAR8 = 0; VAR8 < VAR9; VAR8++) {
VAR3 = FUN8(VAR12, VAR8, VAR20);
VAR4 = FUN9(VAR1, VAR3);
VAR14 = FUN10(VAR4);
FUN11(VAR4);
if (!VAR14)
continue;
if (FUN12(VAR14) != VAR5) {
FUN13(&VAR14);
continue;
}
if (FUN14(VAR14) > 5000) {
FUN15("", VAR3);
continue;
}
VAR15 = FUN16(VAR14, VAR10, VAR10);
FUN17(VAR18, VAR15, VAR21);
FUN13(&VAR14);

}
FUN15("");


VAR16 = FUN18(VAR18, VAR6, VAR7, 15);

if (VAR5 < 8)
FUN19(VAR2, VAR16, VAR22);
else
FUN19(VAR2, VAR16, VAR23);

FUN20(&VAR18);
FUN13(&VAR16);
FUN21(&VAR12);
return 0;
}
int main(int    argc,
char **argv)
{
l_int32    VAR1, VAR2, VAR3, VAR4, VAR5, VAR6, VAR7;
l_float32  VAR8, VAR9, VAR10;
char      *VAR11, *VAR12, *VAR13;
VAR14     *VAR15;
VAR16      *VAR17, *VAR18;
VAR19       *VAR20, *VAR21, *VAR22;

if (argc != 5)
return FUN1("",
VAR23, 1);
VAR11 = argv[1];
VAR12 = argv[2];
VAR1 = FUN2(argv[3]);
VAR22 = NULL;
VAR13 = argv[4];
FUN3(1);


FUN4(0);

if ((VAR20 = FUN5(VAR11)) == NULL)
return FUN1("", VAR23, 1);
if ((VAR21 = FUN5(VAR12)) == NULL)
return FUN1("", VAR23, 1);
VAR3 = FUN6(VAR20);
VAR4 = FUN6(VAR21);

if (VAR3 == 1 && VAR4 == 1) {
FUN7(VAR20, VAR21, &VAR5);
if (VAR5) {
FUN8("");
VAR22 = FUN9(VAR20);  
} else {
if (VAR1 == 0)
VAR2 = VAR24;
else
VAR2 = VAR25;
FUN10(VAR20, VAR21, VAR2, &VAR8, &VAR22);
FUN8("", VAR8);
}
FUN11(VAR13, VAR22, VAR26);
} else {
if (VAR1 == 0)
VAR2 = VAR27;
else
VAR2 = VAR25;
FUN12(VAR20, VAR21, VAR2, VAR28, &VAR5, &VAR9,
&VAR10, &VAR22);
if (VAR1 == 0) {
if (VAR5) {
FUN8("");
} else {
FUN8("", VAR9);
FUN8("", VAR10);
}
}
else {  
if (VAR5) {
FUN8("");
} else {
FUN8("", VAR9);
FUN8("", VAR10);
}
}
if (VAR3 != 16)
FUN11(VAR13, VAR22, VAR29);
else
FUN11(VAR13, VAR22, VAR26);

if (VAR3 != 16 && !VAR5) {
VAR17 = FUN13(VAR20, VAR21, 1);
if (VAR17) {
FUN14(VAR17, 0.00005, &VAR6, &VAR7);
FUN8("",
VAR6, VAR7);
VAR18 = FUN15(VAR17, VAR6, VAR7);
VAR15 = FUN16("", VAR28,
"",
"", "");
FUN17(VAR15, NULL, VAR18, VAR30, "");
FUN18(VAR15);
FUN19(&VAR15);
FUN20("", 100, 100, 1.0);
FUN21(&VAR17);
FUN21(&VAR18);
}
}
}

FUN22(&VAR20);
FUN22(&VAR21);
FUN22(&VAR22);
return 0;
}
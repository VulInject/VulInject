static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
VAR7 *VAR8 = FUN3(VAR6->VAR9);
const char *VAR10;
int VAR11;
int VAR12;
int VAR13;
char *VAR14;

VAR10 = FUN4(VAR4);
if (VAR10 == NULL) {
VAR10 = "";
}


VAR12 = FUN5(VAR4);
VAR14 = FUN6(VAR6->VAR15, VAR12);

if (VAR8->VAR16->VAR17 == VAR18
|| VAR8->VAR16->VAR17 == VAR19) {

for (;;) {
if (VAR8->VAR16->VAR17 == VAR19) {
VAR11 = FUN7(VAR14, VAR12, "", VAR20);
}
else { 
VAR11 = FUN8(VAR14, VAR12, "", VAR20);
}
if (VAR11 != 0) {
FUN9(VAR14, VAR12);
return 0;
}
VAR13 = strlen(VAR14);
if (VAR13 < 1){
FUN10(VAR21, ""
"");
FUN11(VAR10, VAR21);
}
else {
break;
}
}
}

else if (VAR8->VAR16->VAR17 == VAR22) {
const char *VAR23 = VAR8->VAR16->VAR24;
const char **argv = FUN12(VAR6->VAR15, sizeof(char *) * 3);
char *VAR25;

FUN13(VAR26, VAR27, 0, VAR6->VAR9, FUN14(10148)
""
"", VAR23);

argv[0] = VAR23;
argv[1] = VAR6->VAR28;
argv[2] = NULL;

VAR25 = FUN15(VAR6->VAR9, VAR6->VAR15, VAR23, argv);
FUN16(VAR14, VAR25, VAR12);
}


VAR6->VAR29 = FUN17(VAR6->VAR15, VAR14);
FUN18(VAR2, VAR4, VAR14);


FUN9(VAR14, VAR12);
return 1;
}
static void FUN1(VAR1 *VAR2, int VAR3)
{
VAR1 *VAR4;
VAR5 *VAR6;


QOSEdgeType VAR7 = VAR8;


char **VAR9 = FUN2(char *, (VAR10 * 2));
int VAR11 = 0;

char *VAR12, *VAR13, *VAR14;
VAR15 *VAR16 = FUN3("");
char *VAR17 = VAR2->VAR18, *VAR19;

VAR15 *VAR20 = FUN3("");
VAR15 *VAR21 = FUN3("");

VAR4 = FUN4(VAR17); 
VAR17 = FUN5(VAR4->VAR22); 

VAR9[VAR11++] = VAR17;
VAR9[VAR11++] = FUN6(VAR17);

for (;;) {
VAR4 = FUN4(VAR17);
if (!VAR4->VAR22) {
break;
}

VAR17 = FUN5(VAR4->VAR22);


if (VAR4->VAR23 && VAR7 == VAR8) {
FUN7(VAR20, VAR4->VAR23);
FUN7(VAR20, VAR16->VAR24);
FUN8(VAR16, 0);
}

VAR9[VAR11++] = FUN9(VAR4->VAR22);

VAR12 = FUN10(VAR4->VAR22);
VAR14 = FUN11(VAR4->VAR22);
VAR13 = FUN12(VAR4->VAR22);
VAR6 = FUN13(VAR4->VAR18, VAR17);
VAR7 = FUN14(VAR6);

if (VAR13) {
FUN7(VAR20, VAR13);
}
if (VAR12) {
FUN7(VAR21, VAR12);
}
if (VAR14) {
FUN7(VAR16, VAR14);
}
}

VAR9[VAR11++] = NULL;
FUN7(VAR20, VAR16->VAR24);
FUN15(VAR16, true);

FUN7(VAR20, VAR21->VAR24);
FUN15(VAR21, true);


VAR19 = FUN16("", VAR9 + 1);


VAR9[1] = VAR9[0];
VAR9[0] = FUN15(VAR20, false);

if (VAR4->VAR25.VAR26.VAR27) {
VAR28 *VAR29 = FUN17("",
FUN18(), VAR19);
FUN19(VAR19, VAR29, VAR30);
FUN20(VAR29, VAR9, VAR31);
} else {
FUN19(VAR19, VAR9, VAR31);
}

FUN21(VAR19);
}
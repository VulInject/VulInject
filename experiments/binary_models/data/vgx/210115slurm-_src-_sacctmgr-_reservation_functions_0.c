int FUN1(int argc, char **argv)
{
List VAR1;
ListIterator VAR2;
ListIterator VAR3;
List VAR4;
List VAR5;
VAR6 *VAR7 =
xmalloc(sizeof(VAR6));
VAR8 *VAR9;
int VAR10, VAR11;
VAR12 *VAR13;
char *VAR14;


if (argc == 0) {
struct tm VAR15;
VAR7->VAR16 = FUN2(NULL);

if (!FUN3(&VAR7->VAR16, &VAR15)) {
fprintf(VAR17,
"",
(long)VAR7->VAR16);
FUN4(VAR7);
VAR18 = 1;
return 0;
}
VAR15.VAR19 = 0;
VAR15.VAR20 = 0;
VAR15.VAR21 = 0;
VAR15.VAR22--;
VAR7->VAR16 = FUN5(&VAR15);
}

VAR4 = FUN6(VAR23);
for (VAR11=0; VAR11<argc; VAR11++) {
int VAR24 = strlen(argv[VAR11]);
if (!FUN7(argv[VAR11], "", FUN8(VAR24, 5))
|| !FUN7(argv[VAR11], "", FUN8(VAR24, 3)))
VAR11++;
FUN9(&VAR11, argc, argv, VAR7, VAR4);
}

if (VAR7->VAR25 && !VAR7->VAR26) {
char *VAR27 = FUN10(
"",
VAR28.VAR29);

if (!FUN11(VAR27)) {
VAR18 = 1;
} else {
VAR7->VAR26 = FUN6(VAR23);
FUN12(VAR7->VAR26,
xstrdup(VAR28.VAR29));
}
FUN13(VAR27);
}

if (VAR18) {
FUN4(VAR7);
FUN14(VAR4);
return VAR30;
}

if (!FUN15(VAR4)) {

FUN16(VAR4,
""
"");
}

VAR1 = FUN17(
VAR31, VAR7);
FUN4(VAR7);

if (!VAR1) {
VAR18=1;
fprintf(VAR17, "");
FUN14(VAR4);
return VAR30;
}



VAR5 = FUN18(VAR4);
FUN14(VAR4);

VAR2 = FUN19(VAR1);
VAR3 = FUN19(VAR5);
FUN20(VAR5);
VAR10 = FUN15(VAR5);


while ((VAR9 = FUN21(VAR2))) {
int VAR32 = 1;
while ((VAR13 = FUN21(VAR3))) {
switch (VAR13->VAR33) {
case VAR34:
VAR13->FUN22(
VAR13,
VAR9->VAR35,
(VAR32 == VAR10));
break;
case VAR36:
VAR13->FUN22(
VAR13,
VAR9->VAR37,
(VAR32 == VAR10));
break;
case VAR38:
{
reserve_info_t VAR39 = {
.VAR40 = VAR9->VAR40,
};

VAR14 = FUN23(
&VAR39);
VAR13->FUN22(
VAR13,
VAR14,
(VAR32 == VAR10));
FUN13(VAR14);
break;
}
case VAR41:
VAR13->FUN22(VAR13,
&VAR9->VAR42,
(VAR32 == VAR10));
break;
case VAR43:
VAR13->FUN22(VAR13,
VAR9->VAR44,
(VAR32 == VAR10));
break;
case VAR45:
VAR13->FUN22(
VAR13,
VAR9->VAR25,
(VAR32 == VAR10));
break;
case VAR46:
VAR13->FUN22(
VAR13,
VAR9->VAR47,
(VAR32 == VAR10));
break;
case VAR48:
VAR13->FUN22(
VAR13,
&VAR9->VAR49,
(VAR32 == VAR10));
break;
case VAR50:
VAR13->FUN22(
VAR13,
&VAR9->VAR16,
(VAR32 == VAR10));
break;
case VAR51:
FUN24();

VAR14 = FUN25(
VAR9->VAR52, VAR53,
VAR54, VAR55,
0, NULL);
VAR13->FUN22(VAR13,
VAR14,
(VAR32 == VAR10));
FUN13(VAR14);
break;
case VAR56:
VAR13->FUN22(
VAR13,
VAR9->VAR57,
(VAR32 == VAR10));
break;
case VAR58:
VAR13->FUN22(
VAR13,
&VAR9->VAR59,
(VAR32 == VAR10));
break;
}
VAR32++;
}
FUN26(VAR3);
FUN27("");
}
FUN28(VAR2);
FUN28(VAR3);
FUN14(VAR1);
FUN14(VAR5);

return 0;
}
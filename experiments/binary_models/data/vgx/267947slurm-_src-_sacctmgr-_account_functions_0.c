extern int FUN1(int argc, char **argv)
{
int VAR1 = VAR2;
VAR3 *VAR4 =
xmalloc(sizeof(VAR3));
List VAR5;
int VAR6=0, VAR7=0, VAR8=0;
ListIterator VAR9 = NULL;
ListIterator VAR10 = NULL;
VAR11 *VAR12 = NULL;
VAR13 *VAR14 = NULL;
char *VAR15 = NULL;
uint32_t VAR16;

int VAR17 = 0;

VAR18 *VAR19 = NULL;

List VAR20 = FUN2(VAR21);
List VAR22; 

VAR4->VAR23 = VAR24;

for (VAR6=0; VAR6<argc; VAR6++) {
int VAR25 = strlen(argv[VAR6]);
if (!FUN3(argv[VAR6], "", FUN4(VAR25, 5))
|| !FUN3(argv[VAR6], "", FUN4(VAR25, 3)))
VAR6++;
VAR8 = FUN5(&VAR6, argc, argv, VAR4, VAR20);
VAR7 |=  VAR8;
}

if (VAR26) {
FUN6(VAR4);
FUN7(VAR20);
return VAR27;
} else if (!FUN8(VAR20)) {
FUN9(VAR20, "");
if (VAR4->VAR23)
FUN9(VAR20,
""
""
""
""
"");

if (VAR4->VAR28)
FUN9(VAR20, "");

}

if (!VAR4->VAR23 && (VAR7 & VAR29)) {
if (!FUN10(""
""
"")) {
FUN11("");
FUN7(VAR20);
FUN6(VAR4);
return VAR2;
}
}

VAR22 = FUN12(VAR20);
FUN7(VAR20);

if (VAR26) {
FUN6(VAR4);
FUN7(VAR22);
return VAR27;
}

VAR5 = FUN13(VAR30, VAR4);
FUN6(VAR4);

if (VAR31) {
VAR1 = FUN14(VAR32, VAR5, "", argc,
argv, VAR30, VAR31);
FUN7(VAR22);
FUN7(VAR5);
return VAR1;
}

if (!VAR5) {
VAR26=1;
fprintf(VAR33, "");
FUN7(VAR22);
return VAR27;
}

VAR9 = FUN15(VAR5);
VAR10 = FUN15(VAR22);
FUN16(VAR22);

VAR17 = FUN8(VAR22);

while((VAR12 = FUN17(VAR9))) {
if (VAR12->VAR34) {
ListIterator VAR35 =
FUN15(VAR12->VAR34);
while((VAR14 = FUN17(VAR35))) {
int VAR36 = 1;
while((VAR19 = FUN17(VAR10))) {
switch(VAR19->VAR37) {
case VAR38:
VAR19->FUN18(
VAR19, VAR12->VAR39,
(VAR36 ==
VAR17));
break;
case VAR40:
VAR19->FUN18(
VAR19,
VAR12->VAR41,
(VAR36 ==
VAR17));
break;
case VAR42:
VAR19->FUN18(
VAR19,
VAR12->VAR43,
(VAR36 ==
VAR17));
break;
case VAR44:
VAR19->FUN18(
VAR19,
VAR12->VAR45,
(VAR36 ==
VAR17));
break;
default:
FUN19(
VAR14, VAR19, NULL,
(VAR36 ==
VAR17));
break;
}
VAR36++;
}
FUN20(VAR10);
FUN11("");
}
FUN21(VAR35);
} else {
int VAR36 = 1;
while((VAR19 = FUN17(VAR10))) {
switch(VAR19->VAR37) {
case VAR46:
VAR15 = FUN22(NULL,
NULL);
VAR19->FUN18(
VAR19,
VAR15,
(VAR36 == VAR17));
FUN23(VAR15);
break;
case VAR38:
VAR19->FUN18(
VAR19, VAR12->VAR39,
(VAR36 ==
VAR17));
break;
case VAR40:
VAR19->FUN18(
VAR19,
VAR12->VAR41,
(VAR36 ==
VAR17));
break;
case VAR42:
VAR19->FUN18(
VAR19, VAR12->VAR43,
(VAR36 ==
VAR17));
break;
case VAR44:
VAR19->FUN18(
VAR19, VAR12->VAR45,
(VAR36 ==
VAR17));
break;
case VAR47:
VAR16 = VAR48;
VAR19->FUN18(
VAR19,
&VAR16,
(VAR36 == VAR17));
break;
default:
VAR19->FUN18(
VAR19, NULL,
(VAR36 == VAR17));
break;
}
VAR36++;
}
FUN20(VAR10);
FUN11("");
}
}

FUN21(VAR10);
FUN21(VAR9);
FUN7(VAR5);
FUN7(VAR22);

return VAR1;
}
static int
FUN1(struct VAR1 *VAR1, int VAR2,
struct VAR3 *VAR4, struct VAR5 *VAR6)
{
struct sockaddr_un VAR7;
const char *VAR8;
VAR9 *VAR10;
int VAR11, VAR12;
mode_t VAR13;

switch (VAR2) {
case VAR14:
if (VAR4->VAR15 != NULL) {
if (strlen(VAR4->VAR15) > sizeof(VAR7.VAR16)) {
FUN2("",
VAR4->VAR15);
return 0;
}
VAR8 = VAR4->VAR15;
VAR11 = VAR17;
} else {
if (VAR4->VAR18 == NULL) {
FUN2("");
return 0;
}
if (strlen(VAR4->VAR18) >= VAR19) {
FUN2("");
return 0;
}
VAR8 = VAR4->VAR18;
VAR11 = VAR4->VAR20;
}
break;
case VAR21:
VAR8 = VAR4->VAR22;
VAR11 = VAR17;
break;
default:
FUN3("", VAR2);
return 0;
}

if (VAR4->VAR22 == NULL) {
FUN2("");
return 0;
}
if (strlen(VAR4->VAR22) > sizeof(VAR7.VAR16)) {
FUN2("", VAR4->VAR22);
return 0;
}

FUN4("", VAR2, VAR4->VAR22);


VAR13 = FUN5(VAR6->VAR23);
VAR12 = FUN6(VAR4->VAR22, VAR24,
VAR6->VAR25);
FUN5(VAR13);
if (VAR12 < 0)
return 0;

FUN7("", VAR4->VAR22);


VAR10 = FUN8(VAR1, "", VAR2, VAR12, VAR12, -1,
VAR26, VAR27,
0, "", 1);
VAR10->VAR8 = xstrdup(VAR8);
VAR10->VAR28 = VAR11;
VAR10->VAR29 = VAR17;
VAR10->VAR30 = xstrdup(VAR4->VAR22);
return 1;
}
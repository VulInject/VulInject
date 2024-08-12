static void
FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = &VAR2->VAR5.VAR4;
const char *VAR6 = VAR4->VAR6;

FUN2(""VAR7, VAR2->VAR5.VAR8);
if (VAR6[0] == '') {
FUN2("");

if (FUN3(VAR2, 256)) {

VAR2->VAR6 = VAR9;
VAR2->VAR10 = VAR11;
VAR2->VAR12 = 0;
FUN2("",
VAR2->VAR13 + 1, VAR2->VAR10);
} else {

FUN2("");
VAR2->VAR6 = VAR14;
}
} else if (!strcmp(VAR6, "")) {
FUN2("");

if (FUN3(VAR2, 0)) {
VAR2->VAR6 = VAR9;
VAR2->VAR10 = VAR4->VAR15 >> 32;
if (VAR2->VAR10 >= VAR16) {
FUN2(""
"", VAR2->VAR10);
VAR2->VAR10 = VAR17;
}
VAR2->VAR12 = (VAR18) VAR4->VAR15;
FUN2("",
VAR2->VAR13 + 1, VAR2->VAR10);
} else {

FUN2("");
VAR2->VAR6 = VAR14;
}
} else if (!strcmp(VAR6, "")) {
FUN2("");
if (VAR4->VAR19.VAR20 > 0) {

struct ds VAR21 = VAR22;
FUN4(&VAR21, &VAR4->VAR19);
FUN2("", FUN5(&VAR21));
FUN6(&VAR21);
VAR2->VAR6 = VAR23;
} else {

FUN2("");
VAR2->VAR6 = VAR14;
}
} else {

FUN7();
}
}
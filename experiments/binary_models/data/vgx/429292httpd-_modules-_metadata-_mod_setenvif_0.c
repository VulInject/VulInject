static const char *FUN1(VAR1 *VAR2, void *VAR3,
char *VAR4, const char *VAR5)
{
char *VAR6;
const char *VAR7;
VAR8 *VAR9;
VAR10 *new;
VAR10 *VAR11;
int VAR12;
int VAR13;


VAR9 = (VAR2->VAR14 != NULL)
? (VAR8 *) VAR3
: (VAR8 *) FUN2(VAR2->VAR15->VAR16,
&VAR17);
VAR11 = (VAR10 *) VAR9->VAR18->VAR19;

VAR6 = FUN3(VAR2->VAR20, &VAR5);
if (!*VAR6) {
return FUN4(VAR2->VAR20, "",
VAR2->VAR2->VAR21, NULL);
}


for (VAR12 = 0; VAR12 < VAR9->VAR18->VAR22; ++VAR12) {
new = &VAR11[VAR12];
if (new->VAR21 && !FUN5(new->VAR21, VAR4)) {
VAR4 = new->VAR21;
break;
}
}


VAR12 = VAR9->VAR18->VAR22 - 1;
VAR13 = VAR2->VAR23 == VAR24;
if (VAR12 < 0
|| VAR11[VAR12].VAR21 != VAR4
|| VAR11[VAR12].VAR13 != VAR13
|| strcmp(VAR11[VAR12].VAR6, VAR6)) {


new = FUN6(VAR9->VAR18);
new->VAR25 = 0;
new->VAR21 = VAR4;
new->VAR6 = VAR6;
new->VAR13 = VAR13;
if ((VAR7 = FUN7(VAR2->VAR20, VAR6))) {
new->VAR26 = FUN8(VAR2->VAR20,
VAR7, !VAR13);
if (new->VAR26 == NULL) {
return FUN4(VAR2->VAR20, VAR2->VAR2->VAR21,
"", NULL);
}
new->VAR27 = NULL;
}
else {
new->VAR27 = FUN9(VAR2->VAR20, VAR6,
(VAR28 | (VAR13 ? VAR29 : 0)));
if (new->VAR27 == NULL) {
return FUN4(VAR2->VAR20, VAR2->VAR2->VAR21,
"", NULL);
}
new->VAR26 = NULL;
}
new->VAR30 = FUN10(VAR2->VAR20, 2);

if (!FUN5(VAR4, "")) {
new->VAR31 = VAR32;
}
else if (!FUN5(VAR4, "")) {
new->VAR31 = VAR33;
}
else if (!FUN5(VAR4, "")) {
new->VAR31 = VAR34;
}
else if (!FUN5(VAR4, "")) {
new->VAR31 = VAR35;
}
else if (!FUN5(VAR4, "")) {
new->VAR31 = VAR36;
}
else if (!FUN5(VAR4, "")) {
new->VAR31 = VAR37;
}
else {
new->VAR31 = VAR38;

if (FUN11(VAR2->VAR39, VAR4)) {
new->VAR40 = FUN9(VAR2->VAR20, VAR4,
(VAR28 | VAR41
| (VAR13 ? VAR29 : 0)));
if (new->VAR40 == NULL)
return FUN4(VAR2->VAR20, VAR2->VAR2->VAR21,
""
"", NULL);
}
else {
new->VAR40 = NULL;
}
}
}
else {
new = &VAR11[VAR12];
}

return FUN12(VAR2, VAR5, new);
}
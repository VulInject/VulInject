void
FUN1(void)
{
struct VAR1 *VAR2;
const struct VAR3 *VAR4;
const char *VAR5, *VAR6, *VAR7, *VAR8;
size_t VAR9;

FUN2(""
"");
FUN3(VAR2, &VAR10, VAR11) {
VAR4 = VAR2->VAR12;
if (!strcmp("", VAR4->VAR13))
continue;
FUN2("", VAR4->VAR13);
FUN2("", VAR4->VAR13);
for (VAR9 = 0; VAR9 < strlen(VAR4->VAR13); VAR9++)
FUN2("");
FUN2("");

if (VAR4->VAR14 && VAR4->VAR14 & VAR15)
FUN2("", VAR16);

if (VAR4->VAR14 && VAR4->VAR14 & VAR17)
FUN2("", VAR18);

if (VAR4->VAR19 != NULL && *VAR4->VAR19 != '')
FUN2("", VAR4->VAR19);
if (VAR4->VAR20 ## VAR21 ## VAR22 != NULL)		\
FUN2("" #VAR23 "",		\
VAR4->VAR20 ## VAR21 ## VAR22);		\
else if (VAR4->VAR21 != NULL)			\
FUN2("" #VAR23 "", VAR4->VAR21);
FUN4(VAR24, VAR25);
FUN4(VAR26, VAR27);
FUN4(VAR28, VAR29);

if (VAR4->VAR14 & ~VAR30) {
FUN2("");
VAR6 = "";

if (VAR4->VAR14 & VAR31) {
FUN2("", VAR6);
VAR6 = "";
}
if (VAR4->VAR14 & VAR32) {
FUN2("", VAR6);
VAR6 = "";
}
if (VAR4->VAR14 & VAR33) {
FUN2("", VAR6);
VAR6 = "";
}
if (VAR4->VAR14 & VAR34) {
FUN2("", VAR6);
VAR6 = "";
}
if (VAR4->VAR14 & VAR35) {
FUN2("", VAR6);
VAR6 = "";
}
if (VAR4->VAR14 & VAR36) {
FUN2("", VAR6);
VAR6 = "";
}
if (VAR4->VAR14 & VAR37) {
FUN2("", VAR6);
VAR6 = "";
}
FUN2("");
}
FUN2("");
VAR5 = VAR4->VAR38;
while (*VAR5 != '') {
VAR6 = strchr(VAR5, '');
if (VAR6 == NULL)
VAR6 = strchr(VAR5, '');
VAR7 = strchr(VAR5, '');
if (VAR7 != NULL && VAR7 < VAR6) {
VAR8 = strchr(VAR7 + 1, '');
FUN5(VAR8);
FUN2("");
(void)fwrite(VAR7 + 1, (VAR8 - 1) - VAR7, 1, VAR39);
FUN2("");
VAR5 = VAR8 + 1;
}
(void)fwrite(VAR5, VAR6 - VAR5, 1, VAR39);
VAR5 = VAR6;
if (*VAR5 == '') {
FUN2("");
VAR5++;
}
continue;
}
FUN2("");
}
}
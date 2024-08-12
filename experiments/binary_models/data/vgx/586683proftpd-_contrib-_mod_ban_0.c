static int FUN1(VAR1 *VAR2, unsigned int VAR3, const char *VAR4,
struct VAR5 *VAR6) {
int VAR7;
void *VAR8 = NULL, *VAR9 = NULL;
size_t VAR10 = 0, VAR11 = 0;
const char *VAR12 = NULL;

VAR7 = FUN2(VAR2, VAR3, VAR4, &VAR8, &VAR10);
if (VAR7 < 0) {
return -1;
}

if (VAR13 != NULL) {
VAR12 = "";

VAR9 = FUN3(VAR2, VAR13, &VAR14, (const char *) VAR8, VAR10,
&VAR11);

} else {
uint32_t VAR15 = 0;

VAR12 = "";
VAR9 = FUN4(VAR16, &VAR14, (const char *) VAR8, VAR10,
&VAR11, &VAR15);
}

if (VAR9 == NULL) {
int VAR17 = VAR18;

FUN5(VAR19, 8,
"", VAR12, VAR4, VAR3);

VAR18 = VAR17;
return -1;
}


if (VAR20 & VAR21) {
VAR7 = FUN6(VAR2, VAR9, VAR11, VAR6);

} else {
VAR7 = FUN7(VAR2, VAR9, VAR11, VAR6);
}

if (VAR7 == 0) {
FUN5(VAR19, 9, "",
VAR20 & VAR21 ? "" : "");
}

return VAR7;
}
static void FUN1()
{
GF_Event VAR1;
if (VAR2) return;
VAR1.VAR3 = VAR4;
VAR1.VAR5.VAR5 = NULL;

if (VAR6) {
char VAR7[1024];
GF_TermURLInfo VAR8;


if (!VAR9 && FUN2(VAR10, FUN3(VAR10), &VAR8) == VAR11) {
strcpy(VAR7, "");
if (VAR8.VAR12) {
char VAR13[10];
sprintf(VAR13, "", (VAR14) VAR8.VAR12 );
strcat(VAR7, VAR13);
}
if (VAR8.VAR15) {
strcat(VAR7, VAR8.VAR15);
strcat(VAR7, "");
}
if (VAR8.VAR16) {
strcat(VAR7, VAR8.VAR16);
strcat(VAR7, "");
}
if (VAR8.VAR17) {
strcat(VAR7, "");
strcat(VAR7, VAR8.VAR17);
strcat(VAR7, "");
}
if (VAR8.VAR18) {
strcat(VAR7, "");
strcat(VAR7, VAR8.VAR18);
strcat(VAR7, "");
}
if (strlen(VAR7)) VAR1.VAR5.VAR5 = VAR7;
}
if (!VAR1.VAR5.VAR5) {
char *VAR19 = strrchr(VAR20, '');
if (!VAR19) VAR19 = strrchr(VAR20, '');
VAR1.VAR5.VAR5 = VAR19 ? VAR19+1 : VAR20;
}
} else {
VAR1.VAR5.VAR5 = VAR21;
}
FUN4(VAR10, &VAR1);
}
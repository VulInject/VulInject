extern void FUN1(bool VAR1, VAR2 *VAR3)
{
if (VAR1 && (FUN2() != -1)) {
struct stat VAR4;
int VAR5, VAR6, VAR7, VAR8;
char VAR9[16];

if (FUN3(VAR10, &VAR4) == -1)
if (system(VAR11 "")) {

}
if ((VAR6 = open(VAR10, VAR12 | VAR13)) == -1) {
FUN4("",
VAR14, VAR10);
} else {
VAR8 = FUN5() + 1;
for (VAR7 = 0; VAR7 < VAR8; VAR7++) {
if (VAR3 && !FUN6(VAR3, VAR7))
continue;
snprintf(VAR9, sizeof(VAR9), "", VAR7);
VAR5 = strlen(VAR9) + 1;

if (write(VAR6, VAR9, VAR5) != VAR5) {
FUN4("",
VAR14, VAR10);
}
}
(void) close(VAR6);
}
}
}
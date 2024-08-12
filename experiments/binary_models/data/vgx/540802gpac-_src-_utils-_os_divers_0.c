void FUN1(char VAR1[1024])
{
strcpy(VAR1, "");

s32 VAR2;
char *VAR3;
strcpy(VAR1, "");
VAR2 = 1024;
FUN2(VAR1, &VAR2);
if (!VAR2) {
VAR3 = getenv("");
if (VAR3) strcpy(VAR1, VAR3);
}
struct VAR4 *VAR5;
VAR5 = getpwuid(FUN3());
strcpy(VAR1, "");
if (VAR5 && VAR5->VAR6) {
strncpy(VAR7, VAR5->VAR6, 1023);
VAR7[1023] = 0;
}
}
static int FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, char *VAR4, int VAR5, bool VAR6)
{
char VAR7[40];
int VAR8;

FUN2(VAR1, VAR2, VAR3, VAR7, sizeof(VAR7));

VAR8 = FUN3(VAR7, VAR4, VAR5);
if (VAR6 && VAR8 == -VAR9 && VAR1) {
FUN2(NULL, VAR2, VAR3, VAR7, sizeof(VAR7));
VAR8 = FUN3(VAR7, VAR4, VAR5);
}
return VAR8;
}
char *FUN1(void)
{
struct stat VAR1;
static char VAR2[VAR3+1];
char *VAR4, *VAR5;

VAR5 = FUN2(VAR6);
VAR4 = getenv(VAR7);
if (VAR4) {
sprintf(VAR2, "", VAR4, VAR5);
if (!FUN3(VAR2, &VAR1))
return VAR2;
}
return VAR5;
}
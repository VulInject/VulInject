static void FUN1(char *VAR1, char *VAR2, char *VAR3)
{
char VAR4[256];

sprintf(VAR4, VAR1, VAR2, VAR3);
syslog(VAR5, VAR4);
}
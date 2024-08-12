static int FUN1(const char *VAR1, struct VAR2 **VAR3,
char *VAR4, char *VAR5);

int
FUN2(const char *VAR1, struct VAR2 **VAR3)
{
return (int) FUN1 (VAR1, VAR3, NULL, NULL);
}
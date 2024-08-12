static int
FUN1(const char *VAR1)
{
VAR2 *VAR3 = fopen(VAR1, "");
if (VAR3 == NULL)
return (0);
fclose(VAR3);
return (1);
}
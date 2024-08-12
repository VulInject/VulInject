int
readlink(const char* VAR1, char* VAR2, int VAR3)
{
int	VAR4;
int	VAR5;

if (VAR3 > sizeof(VAR6))
{
if ((VAR4 = open(VAR1, VAR7|VAR8)) < 0)
return -1;
if (read(VAR4, VAR2, sizeof(VAR6)) == sizeof(VAR6) && !strcmp(VAR2, VAR6) && (VAR5 = read(VAR4, VAR2, VAR3)) > 0 && !VAR2[VAR5 - 1])
{
close(VAR4);
return VAR5;
}
close(VAR4);
}
VAR9 = VAR10;
return -1;
}
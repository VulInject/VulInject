static VAR1
FUN1(int VAR2, VAR3 *VAR4, uint32_t VAR5)
{
struct stat VAR6;
uint32_t VAR7;
char *VAR8;

if (FUN2(VAR2, &VAR6) != 0)
return (VAR9);

if ((VAR8 = malloc(VAR6.VAR10)) == NULL)
return (VAR11);

if (read(VAR2, VAR8, VAR6.VAR10) == VAR6.VAR10)
VAR7 = FUN3(VAR4, VAR8, VAR6.VAR10, VAR5);
else
VAR7 = VAR9;

free(VAR8);
return (VAR7);
}
int
FUN1(const char *VAR1, unsigned char *VAR2)
{
unsigned char VAR3[VAR4];

FUN2((void *)VAR3, VAR4);
(void) strncpy((char *)VAR3, VAR1, VAR4);
FUN3(VAR3);

return (FUN4(VAR2, VAR5, VAR3,
VAR4, (unsigned char *)VAR6,
sizeof (VAR6)));
}
static int
FUN1(void *VAR1, int VAR2, int VAR3, VAR4 *VAR5)
{
struct VAR6 *VAR7 = VAR1;
void *VAR8;

VAR8 = (VAR9 *)&VAR7->VAR10 + VAR2;
memcpy(VAR5, VAR8, VAR3);
return (0);
}
static int
FUN1(VAR1 *VAR2, unsigned char **VAR3)
{
const VAR4 *VAR5;

if ((VAR5 = FUN2()) == NULL)
return -1;

return FUN3((VAR6 *)VAR2, VAR3, VAR5);
}

struct VAR7 {
unsigned char			VAR8[4];
size_t				VAR9;
size_t				VAR10;
};
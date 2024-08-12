int
FUN1(struct VAR1 *VAR2, char *VAR3, int VAR4)
{
struct VAR5 *VAR6;
struct print_args VAR7;


VAR6 = (struct VAR5 *)VAR2->VAR8.VAR9;
VAR7.VAR2 = VAR2;
VAR7.VAR3 = VAR3;
VAR7.VAR4 = VAR4;
return (FUN2(VAR6->VAR10, &VAR7, VAR11));
}
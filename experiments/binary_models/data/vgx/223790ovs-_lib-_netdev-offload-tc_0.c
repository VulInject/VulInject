static int
FUN1(int VAR1, uint16_t VAR2, struct VAR3 *VAR4)
{
int VAR5 = VAR6 + 1;
struct tc_flower VAR7;

memset(&VAR7, 0, sizeof VAR7);
VAR7.VAR8.VAR2 = VAR2;
VAR7.VAR9.VAR2 = VAR2;
VAR7.VAR10 = VAR11;
VAR7.VAR8.VAR12 = FUN2(VAR13);
VAR7.VAR9.VAR12 = VAR14;

*VAR4 = FUN3(VAR1, 0, VAR5, VAR15);
return FUN4(VAR4, &VAR7);
}
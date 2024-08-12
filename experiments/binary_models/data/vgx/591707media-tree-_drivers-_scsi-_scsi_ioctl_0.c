}
FUN1(VAR1);


static int FUN2(struct VAR2 *VAR3, void VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN3(VAR3->VAR8);
const char *VAR9;

if (!VAR7)
return -VAR10;

VAR9 = FUN4(VAR7);


return FUN5(VAR5, VAR9, FUN6(strlen(VAR9), (VAR11)20))
? -VAR12: 0;
}
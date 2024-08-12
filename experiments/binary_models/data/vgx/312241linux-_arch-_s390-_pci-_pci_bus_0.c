static FUN1(VAR1);
static int VAR2;


static int FUN2(struct VAR3 *VAR4)
{
struct VAR5 *VAR6, *VAR7;
struct VAR8 *VAR9;
int VAR10;

if (!FUN3(VAR4)) {
VAR10 = FUN4(VAR4);
if (VAR10)
return VAR10;
VAR10 = FUN5(VAR4);
if (VAR10) {
FUN6(VAR4);
return VAR10;
}
}

if (!VAR4->VAR11) {
FUN7(VAR4, &VAR4->VAR12->VAR13);
FUN8(VAR6, VAR7, &VAR4->VAR12->VAR13) {
VAR9 = VAR6->VAR9;
FUN9(VAR4->VAR12->VAR14, VAR9, 0);
}
}

return 0;
}
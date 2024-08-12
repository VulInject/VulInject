static int FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5, bool VAR6)
{
struct VAR7 *VAR8;
int VAR9;

VAR8 = FUN2(VAR10,
sizeof(*VAR8), VAR11);
if (!VAR8)
return -VAR12;

if (VAR6)
VAR9 = FUN3(VAR2, VAR3, VAR5);
else
VAR9 = FUN4(VAR2, VAR3, VAR5);
if (!VAR9) {
VAR8->VAR5 = VAR5;
VAR8->VAR3 = VAR3;
FUN5(VAR2, VAR8);
} else {
FUN6(VAR8);
}

return VAR9;
}
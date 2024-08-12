static int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
int VAR9;

if (!FUN3(VAR8)) {
FUN4(VAR6,
"");
return -VAR10;
}

FUN5(VAR2, "", NULL, 0, 0);
VAR9 = FUN6(VAR8->VAR11, VAR4->VAR12, 0, VAR6);
if (!VAR9)
FUN5(VAR2, "", NULL, 0, 0);
else
FUN5(VAR2, "", NULL, 0, 0);
return VAR9;
}
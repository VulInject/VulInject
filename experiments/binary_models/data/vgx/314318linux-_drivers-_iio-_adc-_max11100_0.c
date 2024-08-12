static int FUN1(struct VAR1 *VAR2, int *VAR3)
{
int VAR4;
struct VAR5 *VAR6 = FUN2(VAR2);

VAR4 = FUN3(VAR6->VAR7, VAR6->VAR8, sizeof(VAR6->VAR8));
if (VAR4) {
FUN4(&VAR2->VAR9, "");
return VAR4;
}


if (VAR6->VAR8[0]) {
FUN4(&VAR2->VAR9, "");
return -VAR10;
}

*VAR3 = FUN5(&VAR6->VAR8[1]);

return 0;
}
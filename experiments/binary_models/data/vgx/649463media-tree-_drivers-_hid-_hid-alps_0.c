static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = NULL;
int VAR7;

VAR6 = FUN2(&VAR2->VAR8, sizeof(struct VAR5), VAR9);
if (!VAR6)
return -VAR10;

VAR6->VAR2 = VAR2;
FUN3(VAR2, VAR6);

VAR2->VAR11 |= VAR12;

VAR7 = FUN4(VAR2);
if (VAR7) {
FUN5(VAR2, "");
return VAR7;
}

VAR7 = FUN6(VAR2, VAR13);
if (VAR7) {
FUN5(VAR2, "");
return VAR7;
}

return 0;
}
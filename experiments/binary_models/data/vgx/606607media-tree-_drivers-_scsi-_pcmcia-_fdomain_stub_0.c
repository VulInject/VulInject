static void FUN1(struct VAR1 *VAR2);
static int FUN2(struct VAR1 *VAR3);

static int FUN3(struct VAR1 *VAR3)
{
VAR4 *VAR5;

FUN4(&VAR3->VAR6, "");


VAR5 = FUN5(sizeof(*VAR5), VAR7);
if (!VAR5)
return -VAR8;

VAR5->VAR2 = VAR3;
VAR3->VAR9 = VAR5;
VAR3->VAR10 |= VAR11 | VAR12;
VAR3->VAR13 = VAR14;

return FUN2(VAR3);
}
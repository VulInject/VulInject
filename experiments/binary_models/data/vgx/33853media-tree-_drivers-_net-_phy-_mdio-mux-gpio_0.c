static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

VAR4 = FUN2(&VAR2->VAR6, sizeof(*VAR4), VAR7);
if (!VAR4)
return -VAR8;

VAR4->VAR9 = FUN3(&VAR2->VAR6, NULL, VAR10);
if (FUN4(VAR4->VAR9))
return FUN5(VAR4->VAR9);

VAR5 = FUN6(&VAR2->VAR6,
VAR11, &VAR4->VAR12, VAR4, NULL);

if (VAR5 != 0) {
FUN7(VAR4->VAR9);
return VAR5;
}

VAR2->VAR6.VAR13 = VAR4;
return 0;
}
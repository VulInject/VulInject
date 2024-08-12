static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;


if (!FUN2(VAR2->VAR5, VAR6))
return -VAR7;

FUN3(VAR2, "",
VAR2->VAR8 << 1, VAR2->VAR5->VAR9);
VAR4 = FUN4(&VAR2->VAR10, sizeof(*VAR4), VAR11);
if (VAR4 == NULL)
return -VAR12;
FUN5(VAR4, VAR2, &VAR13);
return 0;
}
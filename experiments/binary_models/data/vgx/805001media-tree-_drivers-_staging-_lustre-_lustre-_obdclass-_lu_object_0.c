int FUN1(struct VAR1 *VAR2, __u32 VAR3)
{
int	VAR4;

memset(VAR2, 0, sizeof(*VAR2));
VAR2->VAR5 = VAR6;
VAR2->VAR7 = VAR3;
if (VAR3 & VAR8) {
FUN2(&VAR9);
FUN3(&VAR2->VAR10, &VAR11);
FUN4(&VAR9);
} else {
FUN5(&VAR2->VAR10);
}

VAR4 = FUN6(VAR2);
if (VAR4 != 0)
FUN7(VAR2);

return VAR4;
}
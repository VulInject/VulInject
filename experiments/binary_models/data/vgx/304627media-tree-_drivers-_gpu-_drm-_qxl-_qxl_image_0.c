int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 **VAR6,
int VAR7, int VAR8)
{
struct VAR5 *VAR9;
int VAR10;

VAR9 = FUN2(sizeof(struct VAR5), VAR11);
if (!VAR9)
return -VAR12;

FUN3(&VAR9->VAR13);

VAR10 = FUN4(VAR2, VAR4, sizeof(struct VAR14), &VAR9->VAR15);
if (VAR10) {
FUN5(VAR9);
return VAR10;
}

VAR10 = FUN6(VAR2, VAR4, VAR9, sizeof(struct VAR16) + VAR8 * VAR7);
if (VAR10) {
FUN7(&VAR9->VAR15);
FUN5(VAR9);
return VAR10;
}
*VAR6 = VAR9;
return 0;
}
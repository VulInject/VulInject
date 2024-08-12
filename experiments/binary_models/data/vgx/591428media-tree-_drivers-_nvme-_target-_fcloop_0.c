static int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR6->private;
struct VAR9 *VAR10 = VAR4->private;
int VAR11 = 0;

VAR8->VAR6 = VAR6;
FUN2(&VAR8->VAR12, VAR13);

if (!VAR10->VAR14) {
VAR8->VAR15 = -VAR16;
FUN3(&VAR8->VAR12);
return VAR11;
}

VAR8->VAR15 = 0;
VAR8->VAR17 = VAR10->VAR14->private;
VAR11 = FUN4(VAR10->VAR14, &VAR8->VAR18,
VAR6->VAR19, VAR6->VAR20);

return VAR11;
}
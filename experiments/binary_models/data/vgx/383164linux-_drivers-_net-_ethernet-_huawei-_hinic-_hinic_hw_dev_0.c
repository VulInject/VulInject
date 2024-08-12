static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6 = VAR4->VAR6;
struct VAR7 *VAR8 = VAR6->VAR8;
struct hinic_dev_cap VAR9;
u16 VAR10;
int VAR11;

VAR10 = sizeof(VAR9);

VAR11 = FUN2(&VAR2->VAR12, VAR13,
VAR14, &VAR9, sizeof(VAR9),
&VAR9, &VAR10, VAR15);
if (VAR11) {
FUN3(&VAR8->VAR16, "");
return VAR11;
}

return FUN4(VAR4, &VAR9);
}
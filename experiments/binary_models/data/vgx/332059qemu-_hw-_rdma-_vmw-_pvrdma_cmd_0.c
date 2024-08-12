static int FUN1(VAR1 *VAR2, union VAR3 *VAR4,
union VAR5 *VAR6)
{
struct VAR7 *VAR8 = &VAR4->VAR9;
struct VAR10 *VAR11 = &VAR6->VAR12;
int VAR13;

memset(VAR11, 0, sizeof(*VAR11));
VAR13 = FUN2(&VAR2->VAR14, &VAR2->VAR15,
&VAR11->VAR16, VAR8->VAR17);

return VAR13;
}
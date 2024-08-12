static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR4->VAR6;
int VAR7;

memcpy(&VAR4->VAR8, VAR6->VAR9,
sizeof(VAR4->VAR8));
memcpy(&VAR4->VAR10, VAR6->VAR11,
sizeof(VAR4->VAR10));
memcpy(&VAR4->VAR12, VAR6->VAR13, sizeof(VAR4->VAR12));

VAR4->VAR14 = 1;
VAR7 = FUN3(VAR2, VAR6->VAR15,
FUN4(VAR6->VAR15) / 2, &VAR4->VAR16);
if (VAR7)
return VAR7;

return 0;
return -VAR17;
}
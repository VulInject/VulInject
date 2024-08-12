static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u32 VAR5 = 0;
int VAR6 = 0;

if (VAR4->VAR7) {
VAR5 = FUN3(VAR4->VAR5);

VAR6 = FUN4(VAR2,
VAR4->VAR8 +
FUN5(VAR9, VAR10),
(VAR11 *)&VAR5,
sizeof(VAR12), VAR4->VAR13);
}
return VAR6;
}
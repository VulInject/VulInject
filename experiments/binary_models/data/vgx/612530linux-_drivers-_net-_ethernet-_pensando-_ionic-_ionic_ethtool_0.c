static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
u32 VAR9;

if (FUN3(VAR10, VAR8->VAR11))
return;

memset(VAR6, 0, VAR4->VAR12 * sizeof(*VAR6));
for (VAR9 = 0; VAR9 < VAR13; VAR9++)
VAR14[VAR9].FUN4(VAR8, &VAR6);
}
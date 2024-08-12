static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
struct membuf VAR5)
{
const struct VAR6 *VAR7 = VAR2->VAR8.VAR9;
u32 VAR10[16];

if (VAR2 == VAR11)
FUN2();

FUN3(&VAR5, VAR7->VAR12, 16 * sizeof(VAR13));
if (!VAR5.VAR14)
return 0;
if (FUN4(VAR2, VAR7, VAR10))
return -VAR15;
FUN3(&VAR5, VAR10, 16 * sizeof(VAR13));
FUN5(&VAR5, VAR7->VAR16);
FUN5(&VAR5, VAR7->VAR17);
FUN5(&VAR5, VAR7->VAR18);
FUN5(&VAR5, VAR7->VAR19);
return FUN6(&VAR5, 2 * sizeof(VAR13));
}
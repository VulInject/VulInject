static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
const struct VAR6 *VAR7;

if (!VAR5->VAR8)
return -VAR9;

VAR7 = (const struct VAR6 *)&VAR5->VAR10->VAR11[VAR3];

if (VAR7->VAR8.VAR12 == VAR13)
return -VAR9;

return FUN3(VAR5->VAR8, VAR7->VAR8.VAR12);
}
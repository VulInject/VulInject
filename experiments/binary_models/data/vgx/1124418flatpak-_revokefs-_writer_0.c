FUN1 (VAR1 *VAR2,
gsize VAR3,
VAR4 *VAR5)
{
g_autofree char *VAR6 = FUN2 (VAR2->VAR7, VAR3);
uid_t VAR8 = VAR2->VAR9;
gid_t VAR10 = VAR2->VAR11;

if (FUN3 (VAR12, VAR6, VAR8, VAR10, VAR13) != 0)
VAR5->VAR14 = -VAR15;
else
VAR5->VAR14 = 0;

return 0;
}
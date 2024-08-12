static int FUN1(void *VAR1, const char *VAR2,
char VAR3, u64 VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR7 = VAR1;
struct VAR8 *VAR9 = &VAR7->VAR10;

if (!FUN2(VAR3))
return 0;


if (VAR2[0] == '')
return 0;


VAR6 = FUN3(VAR4, 0, FUN4(VAR3), FUN5(VAR3), VAR2);
if (VAR6 == NULL)
return -VAR11;

FUN6(VAR9, VAR6, !strchr(VAR2, ''));

return 0;
}
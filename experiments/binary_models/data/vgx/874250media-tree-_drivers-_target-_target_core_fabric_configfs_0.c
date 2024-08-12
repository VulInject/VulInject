static VAR1 FUN1(
struct VAR2 *VAR3, const char *VAR4, size_t VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3);

if (!VAR7 || !VAR7->VAR8)
return -VAR9;

return FUN3(VAR7, VAR4, VAR5);
}
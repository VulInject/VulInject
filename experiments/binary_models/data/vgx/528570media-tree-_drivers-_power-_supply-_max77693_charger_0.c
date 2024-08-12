static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, const char *VAR6, size_t VAR7,
int (*VAR8)(struct VAR9 *, unsigned long))
{
struct VAR9 *VAR10 = FUN2(VAR3);
unsigned long VAR11;
int VAR12;

VAR12 = FUN3(VAR6, 10, &VAR11);
if (VAR12)
return VAR12;

VAR12 = FUN4(VAR10, VAR11);
if (VAR12)
return VAR12;

return VAR7;
}
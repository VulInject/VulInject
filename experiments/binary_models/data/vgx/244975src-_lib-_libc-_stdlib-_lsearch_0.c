void *
FUN1(const void *VAR1, const void *VAR2, VAR3 *VAR4, size_t VAR5,
cmp_fn_t VAR6)
{
const char *VAR7, *VAR8;

VAR8 = (const char *)VAR2 + *VAR4 * VAR5;
for (VAR7 = VAR2; VAR7 < VAR8; VAR7 += VAR5)
if (!FUN2(VAR1, VAR7))		
return((void *)VAR7);
return NULL;
}
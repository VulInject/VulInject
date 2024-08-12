static long
FUN1(void *VAR1, const char **VAR2,
const char *VAR3, const char *VAR4)
{
assert(VAR1 == &VAR5);
assert(VAR2 == VAR6);
assert(VAR3 == VAR7 || VAR3 == NULL);
assert(VAR4 == NULL);
return 0;
}
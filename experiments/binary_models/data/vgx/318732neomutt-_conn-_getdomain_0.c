static struct VAR1 *FUN1(const char *VAR2, const struct VAR1 *VAR3)
{
assert(VAR2);
assert(VAR3);
struct VAR1 *VAR4 = NULL;
FUN2(VAR5, "");
int VAR6 = getaddrinfo(VAR2, NULL, VAR3, &VAR4);
FUN2(VAR5, "");

if (VAR6 != 0)
VAR4 = NULL;

return VAR4;
}
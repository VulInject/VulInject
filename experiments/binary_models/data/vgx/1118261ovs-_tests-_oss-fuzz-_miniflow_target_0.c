static struct VAR1 *
FUN1(const struct VAR1 *VAR2)
{
struct VAR1 *VAR3;
size_t VAR4;

VAR4 = FUN2(&VAR3, 1, VAR2);
FUN3(VAR3, VAR2, VAR4 / sizeof(VAR5));
return VAR3;
}
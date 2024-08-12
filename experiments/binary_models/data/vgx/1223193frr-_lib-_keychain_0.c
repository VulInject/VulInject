static struct VAR1 *FUN1(const struct VAR2 *VAR2, uint32_t VAR3)
{
struct VAR4 *VAR5;
struct VAR1 *VAR1;

for (FUN2(VAR2->VAR1, VAR5, VAR1)) {
if (VAR1->VAR3 == VAR3)
return VAR1;
}
return NULL;
}
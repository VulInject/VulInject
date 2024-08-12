static const char *
FUN1(int VAR1, int VAR2,
const struct VAR3 *VAR4)
{
for (; VAR4->VAR5; VAR4++) {
if (VAR1 == VAR4->VAR1 - VAR2)
return VAR4->VAR5;
}

return NULL;
}
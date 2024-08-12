const struct VAR1 *FUN1(const struct VAR2 *VAR3, int VAR4)
{
size_t VAR5;

assert(VAR3);
assert(VAR4 > 0);

for (VAR5 = 0; VAR5 < VAR3->VAR6; VAR5++) {
if (VAR3->VAR7[VAR5].VAR4 == VAR4)
return &VAR3->VAR7[VAR5];
}

return NULL;
}
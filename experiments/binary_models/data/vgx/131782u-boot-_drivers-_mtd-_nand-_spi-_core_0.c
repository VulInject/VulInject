const struct VAR1 *
FUN1(struct VAR2 *VAR3,
const struct VAR1 *VAR4,
unsigned int VAR5)
{
unsigned int VAR6;

for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
if (FUN2(VAR3->VAR7, &VAR4[VAR6]))
return &VAR4[VAR6];
}

return NULL;
}
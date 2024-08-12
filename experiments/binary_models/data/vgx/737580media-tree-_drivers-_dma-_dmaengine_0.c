}
FUN1(VAR1);

static const struct VAR2 *FUN2(struct VAR3 *VAR4,
const char *VAR5,
struct VAR4 *VAR6)
{
int VAR7;

if (!VAR4->VAR8.VAR9)
return NULL;

for (VAR7 = 0; VAR7 < VAR4->VAR8.VAR9; VAR7++) {
const struct VAR2 *VAR10 = &VAR4->VAR8.VAR10[VAR7];

if (!strcmp(VAR10->VAR11, FUN3(VAR6)) &&
!strcmp(VAR10->VAR12, VAR5))
return VAR10;
}

return NULL;
}
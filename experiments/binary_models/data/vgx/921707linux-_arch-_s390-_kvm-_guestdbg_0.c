static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
int VAR4;
struct VAR1 *VAR5 = NULL;
void *VAR6 = NULL;

if (VAR3->VAR7.VAR8.VAR9 == 0)
return NULL;

for (VAR4 = 0; VAR4 < VAR3->VAR7.VAR8.VAR9; VAR4++) {
VAR5 = &VAR3->VAR7.VAR8.VAR10[VAR4];
if (!VAR5 || !VAR5->VAR11 || VAR5->VAR12 <= 0)
continue;

VAR6 = FUN2(VAR5->VAR12, VAR13);
if (!VAR6)
continue;


if (!FUN3(VAR3, VAR5->VAR14, VAR6,
VAR5->VAR12)) {
if (memcmp(VAR6, VAR5->VAR11, VAR5->VAR12)) {
FUN4(VAR6);
return VAR5;
}
}
FUN4(VAR6);
VAR6 = NULL;
}

return NULL;
}
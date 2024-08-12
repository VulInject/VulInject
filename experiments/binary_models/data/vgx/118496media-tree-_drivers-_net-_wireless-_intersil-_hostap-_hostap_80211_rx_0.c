static struct VAR1 *
FUN1(VAR2 *VAR3, unsigned int VAR4,
unsigned int VAR5, VAR6 *VAR7, VAR6 *VAR8)
{
struct VAR1 *VAR9;
int VAR10;

for (VAR10 = 0; VAR10 < VAR11; VAR10++) {
VAR9 = &VAR3->VAR12[VAR10];
if (VAR9->VAR13 != NULL &&
FUN2(VAR14, VAR9->VAR15 + 2 * VAR16)) {
FUN3(VAR17 ""
"",
VAR3->VAR18->VAR19, VAR9->VAR4, VAR9->VAR20);
FUN4(VAR9->VAR13);
VAR9->VAR13 = NULL;
}

if (VAR9->VAR13 != NULL && VAR9->VAR4 == VAR4 &&
(VAR9->VAR20 + 1 == VAR5 || VAR5 == -1) &&
memcmp(VAR9->VAR21, VAR7, VAR22) == 0 &&
memcmp(VAR9->VAR23, VAR8, VAR22) == 0)
return VAR9;
}

return NULL;
}
static inline int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;


for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++) {
struct VAR7 *VAR8 = VAR4->VAR9[VAR5];
int VAR10;

if (VAR8 == NULL)
continue;

for (VAR10 = VAR5 + 1; VAR10 < VAR4->VAR6; VAR10++)
if (VAR4->VAR9[VAR10] && VAR4->VAR9[VAR10]->VAR11 == VAR8->VAR11)
return 1;
}

return 0;
}
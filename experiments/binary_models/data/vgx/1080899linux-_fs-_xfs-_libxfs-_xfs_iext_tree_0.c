static struct VAR1 *
FUN1(
struct VAR1	*VAR2,
int			*VAR3,
struct VAR1	*VAR4,
int			VAR5)
{

if (VAR5 == 0)
return VAR4;

if (*VAR3 > 0) {
struct VAR1 *VAR6 = VAR2->VAR7[*VAR3 - 1];
int VAR8 = FUN2(VAR6, 0), VAR9;

if (VAR8 + VAR5 <= VAR10) {
for (VAR9 = 0; VAR9 < VAR5; VAR9++) {
VAR6->VAR11[VAR8 + VAR9] = VAR4->VAR11[VAR9];
VAR6->VAR7[VAR8 + VAR9] = VAR4->VAR7[VAR9];
}
return VAR4;
}
}

if (*VAR3 + 1 < FUN2(VAR2, *VAR3)) {
struct VAR1 *VAR12 = VAR2->VAR7[*VAR3 + 1];
int VAR13 = FUN2(VAR12, 0), VAR9;

if (VAR5 + VAR13 <= VAR10) {

for (VAR9 = 0; VAR9 < VAR13; VAR9++) {
VAR4->VAR11[VAR5 + VAR9] = VAR12->VAR11[VAR9];
VAR4->VAR7[VAR5 + VAR9] = VAR12->VAR7[VAR9];
}

++*VAR3;
return VAR12;
}
}

return NULL;
}
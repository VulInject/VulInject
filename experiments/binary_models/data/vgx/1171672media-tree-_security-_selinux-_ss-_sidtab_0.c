static inline VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4)
{
int VAR5;
struct VAR6 *VAR7;

for (VAR5 = 0; VAR5 < VAR8; VAR5++) {
VAR7 = VAR3->VAR9[VAR5];
if (FUN2(!VAR7))
return 0;
if (FUN3(&VAR7->VAR4, VAR4)) {
FUN4(VAR3, VAR7, VAR5);
return VAR7->VAR10;
}
}
return 0;
}
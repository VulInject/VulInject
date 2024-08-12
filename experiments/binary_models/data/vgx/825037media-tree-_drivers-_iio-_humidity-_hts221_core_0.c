static VAR1
FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6)
{
const struct VAR7 *VAR8 = &VAR9[VAR10];
ssize_t VAR11 = 0;
int VAR12;

for (VAR12 = 0; VAR12 < FUN2(VAR8->VAR13); VAR12++)
VAR11 += FUN3(VAR6 + VAR11, VAR14 - VAR11, "",
VAR8->VAR13[VAR12].VAR8);
VAR6[VAR11 - 1] = '';

return VAR11;
}
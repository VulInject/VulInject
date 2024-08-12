static int FUN1(VAR1 *VAR2, ptrdiff_t VAR3, const VAR1 *VAR4)
{
int VAR5, VAR6;

FUN2(VAR2, VAR3, VAR4);


for (VAR6 = 0; VAR6 < 4; VAR6++)
for (VAR5 = 0; VAR5 < 4; VAR5++)
FUN3(VAR2 + VAR5 * 4 + VAR6 * VAR3);

return 16;
}
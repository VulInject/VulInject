int FUN1(VAR1 *VAR2)
{
unsigned int VAR3;

if (!VAR2)
return VAR4;

for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++) {
VAR6 *VAR7, *VAR8;
for (VAR7 = VAR2->VAR9[VAR3]; VAR7; VAR7 = VAR8) {
VAR8 = VAR7->VAR8;
free(VAR7);
}
}
free(VAR2->VAR9);
free(VAR2);
return VAR10;
}
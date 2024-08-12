static unsigned int FUN1(VAR1 *VAR2)
{
char *VAR3;
unsigned int VAR4, VAR5, VAR6;

VAR4 = 0;
VAR3 = VAR2->VAR7;
VAR5 = VAR2->VAR5;

for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
VAR4 = ( VAR4 << 5 ) - VAR4 + *(VAR3 + VAR6);
}

return VAR4 % VAR8;
}
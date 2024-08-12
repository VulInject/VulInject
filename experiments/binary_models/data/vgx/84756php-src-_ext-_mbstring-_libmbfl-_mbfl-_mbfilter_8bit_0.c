static VAR1 FUN1(unsigned char **VAR2, VAR1 *VAR3, VAR4 *VAR5, size_t VAR6, unsigned int *VAR7)
{
unsigned char *VAR8 = *VAR2, *VAR9 = VAR8 + *VAR3;
VAR4 *VAR10 = VAR5, *VAR11 = VAR5 + VAR6;

while (VAR8 < VAR9 && VAR10 < VAR11) {
unsigned char VAR12 = *VAR8++;
*VAR10++ = VAR12;
}

*VAR3 = VAR9 - VAR8;
*VAR2 = VAR8;
return VAR10 - VAR5;
}
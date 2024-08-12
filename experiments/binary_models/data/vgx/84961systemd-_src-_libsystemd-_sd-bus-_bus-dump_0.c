static char *FUN1(unsigned VAR1, uint64_t VAR2) {
char *VAR3;
unsigned VAR4, VAR5 = 0;

VAR4 = 0;

if (VAR2 & VAR6 && VAR1 > 0)
VAR1 -= 1;

if (VAR2 & VAR7)
VAR4 += 2;

VAR3 = new(char, VAR4 + VAR1*8 + 1);
if (!VAR3)
return NULL;

if (VAR2 & VAR7) {
VAR3[VAR5++] = '';
VAR3[VAR5++] = '';
}

memset(VAR3 + VAR5, '', VAR1*8);
VAR3[VAR5 + VAR1*8] = 0;

return VAR3;
}
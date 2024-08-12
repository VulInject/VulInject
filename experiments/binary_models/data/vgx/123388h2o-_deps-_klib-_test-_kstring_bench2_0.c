char *FUN1( unsigned char *VAR1, unsigned int VAR2, unsigned char *VAR3, unsigned int VAR4 )
{
unsigned int VAR5[256], VAR6;
unsigned char *VAR7;
register unsigned char VAR8;

if (VAR4 == 0)
return NULL;

for (VAR6 = 0; VAR6 < 256; VAR6++)
VAR5[VAR6] = VAR4;
VAR7 = VAR3;
VAR6 = --VAR4;
do {
VAR5[*VAR7++] = VAR6;
} while (VAR6--);
VAR8 = *--VAR7;
VAR7 = VAR1 + VAR4;
VAR2 -= VAR4+(VAR4-1);
while ((int)VAR2 > 0 ) {
unsigned int VAR9;
VAR9 = VAR5[*VAR7];
VAR7 += VAR9;
VAR2 -= VAR9;
VAR9 = VAR5[*VAR7];
VAR7 += VAR9;
VAR2 -= VAR9;
VAR9 = VAR5[*VAR7];
if (*VAR7 != VAR8) {
VAR7 += VAR9;
VAR2 -= VAR9;
continue;
}
VAR6 = VAR4;
do {
if (VAR6-- == 0) return VAR7;
} while (*--VAR7 == VAR3[VAR6]);
VAR7 += (VAR4 - VAR6 + 1);
VAR2--;
}
return NULL;
}
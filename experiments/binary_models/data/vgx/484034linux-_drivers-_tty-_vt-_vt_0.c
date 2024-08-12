static void FUN1(VAR1 **VAR2, unsigned int VAR3, unsigned int VAR4)
{
unsigned int VAR5;

for (VAR5 = 0; VAR5 < FUN2(VAR4, VAR3); VAR5++) {
VAR1 *VAR6 = VAR2[VAR5];
unsigned int VAR7 = VAR5;

while (1) {
unsigned int VAR8 = (VAR7 + VAR4) % VAR3;
if (VAR8 == VAR5)
break;

VAR2[VAR7] = VAR2[VAR8];
VAR7 = VAR8;
}

VAR2[VAR7] = VAR6;
}
}
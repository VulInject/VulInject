FUN1 (j_decompress_ptr VAR1, VAR2 * VAR3,
JSAMPARRAY VAR4, VAR5 * VAR6)
{
my_upsample_ptr VAR7 = (VAR8) VAR1->VAR7;
JSAMPARRAY VAR9 = *VAR6;
register JSAMPROW VAR10, VAR11;
register JSAMPLE VAR12;
register int VAR13;
JSAMPROW VAR14;
int VAR15, VAR16;
int VAR17, VAR18;

VAR15 = VAR7->VAR15[VAR3->VAR19];
VAR16 = VAR7->VAR16[VAR3->VAR19];

VAR17 = VAR18 = 0;
while (VAR18 < VAR1->VAR20) {

VAR10 = VAR4[VAR17];
VAR11 = VAR9[VAR18];
VAR14 = VAR11 + VAR1->VAR21;
while (VAR11 < VAR14) {
VAR12 = *VAR10++;	
for (VAR13 = VAR15; VAR13 > 0; VAR13--) {
*VAR11++ = VAR12;
}
}

if (VAR16 > 1) {
FUN2(VAR9, VAR18, VAR9, VAR18+1,
VAR16-1, VAR1->VAR21);
}
VAR17++;
VAR18 += VAR16;
}
}
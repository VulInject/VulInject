void FUN1(u8 VAR1[VAR2], u8 VAR3)
{
int VAR4, VAR5;
u8 VAR6 = 1;

VAR1[0] = 0;

for (VAR4 = (VAR2 >> 1); VAR4; VAR4 >>= 1) {
VAR6 = (VAR6 >> 1) ^ (VAR6 & 1 ? VAR3 : 0);
for (VAR5 = 0; VAR5 < VAR2; VAR5 += 2*VAR4)
VAR1[VAR4+VAR5] = VAR1[VAR5] ^ VAR6;
}
}
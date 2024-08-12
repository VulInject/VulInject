static int FUN1(int VAR1, byte VAR2, VAR3* VAR4)
{
word32 VAR5 = 0;

if (VAR4)
VAR4[VAR5] = VAR6;
VAR5++;
if (VAR2 & 0x80)
VAR1++;
VAR5 += FUN2(VAR1, VAR4 ? VAR4 + VAR5 : NULL);
if (VAR2 & 0x80) {
if (VAR4)
VAR4[VAR5] = 0x00;
VAR5++;
}

return VAR5;
}
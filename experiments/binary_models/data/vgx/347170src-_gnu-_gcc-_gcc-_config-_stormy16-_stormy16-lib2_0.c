FUN1 (SItype VAR1, SItype VAR2)
{
word_type VAR3;

if (VAR2 & 16)
VAR1 <<= 16;
if (VAR2 & 8)
VAR1 <<= 8;
for (VAR3 = (VAR2 & 0x7); VAR3 > 0; --VAR3)
VAR1 <<= 1;
return VAR1;
}
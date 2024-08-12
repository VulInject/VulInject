static int FUN1(unsigned int VAR1, const unsigned char *VAR2,
size_t VAR3, struct VAR4 *VAR5)
{
unsigned int VAR6 = 1, VAR7;
uint64_t VAR8 = VAR1 >> 3;

VAR1 >>= 2;
VAR3 -= 1;
for (VAR7 = 5; VAR1 & 1; VAR7 += 7) {
if (VAR6 > 9)
return VAR9;
if (VAR3 < VAR6)
return VAR10;
VAR1 = VAR2[VAR6++];
VAR8 |= (VAR1 >> 1) << VAR7;
}

VAR5->VAR11 = VAR12;
VAR5->VAR8 = VAR8;
return VAR6;
}
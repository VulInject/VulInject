int FUN1(void *VAR1,
unsigned char *VAR2,
size_t VAR3)
{
VAR4 *VAR5 =
(VAR4 *) VAR1;
uint32_t VAR6, *VAR7, VAR8, VAR9 = 0x9E3779B9;
unsigned char VAR10[4], *VAR11 = VAR2;

if (VAR1 == NULL) {
return FUN2(NULL, VAR2, VAR3);
}

VAR7 = VAR5->VAR12;

while (VAR3 > 0) {
size_t VAR13 = (VAR3 > 4) ? 4 : VAR3;
VAR8 = 0;

for (VAR6 = 0; VAR6 < 32; VAR6++) {
VAR5->VAR14 += (((VAR5->VAR15 << 4) ^ (VAR5->VAR15 >> 5))
+ VAR5->VAR15) ^ (VAR8 + VAR7[VAR8 & 3]);
VAR8 += VAR9;
VAR5->VAR15 += (((VAR5->VAR14 << 4) ^ (VAR5->VAR14 >> 5))
+ VAR5->VAR14) ^ (VAR8 + VAR7[(VAR8>>11) & 3]);
}

FUN3(VAR5->VAR14, VAR10, 0);
memcpy(VAR11, VAR10, VAR13);
VAR3 -= VAR13;
VAR11 += 4;
}

return 0;
}
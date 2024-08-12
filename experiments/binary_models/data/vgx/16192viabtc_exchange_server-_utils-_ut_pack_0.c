int FUN1(void **VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
if (*VAR3 < 1)
return -1;
uint8_t VAR6 = *(VAR7 *)(*VAR1);
if (VAR6 == 0x00) {
*VAR5 = 0;
return FUN2(VAR1, VAR3, &VAR6);
} else if (VAR6 == 0x4f) {
*VAR5 = -1;
return FUN2(VAR1, VAR3, &VAR6);
} else if (VAR6 > 0x50 && VAR6 <= 0x60) {
*VAR5 = VAR6 - 0x50;
return FUN2(VAR1, VAR3, &VAR6);
} else if (VAR6 > sizeof(VAR4)) {
return -1;
}

uint8_t VAR8[8] = { 0 };
size_t VAR9 = sizeof(VAR8);
int VAR10 = FUN3(VAR1, VAR3, (char *)VAR8, &VAR9);
if (VAR10 < 0)
return VAR10;

bool VAR11 = VAR8[VAR9 - 1] & 0x80;
VAR8[VAR9 - 1] &= ~0x80;
int64_t VAR12 = 0;
for (int VAR13 = VAR9 - 1; VAR13 >= 0; --VAR13) {
VAR12 <<= 8;
VAR12 += VAR8[VAR13];
}
*VAR5 = VAR11 ? -VAR12 : VAR12;

return VAR10;
}
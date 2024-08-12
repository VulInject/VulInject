static int FUN1(VAR1 *VAR2)
{
int VAR3;
u16 VAR4 = 0xffff;

for (VAR3 = 0; VAR3 < 8; VAR3++) {
VAR4  = (VAR4 << 8) | ((VAR4 >> 8) ^ VAR2[VAR3]);
VAR4 ^= (VAR4 >> 4) & 0x0f;
VAR4 ^= (VAR4 << 12) ^ ((VAR4 & 0xff) << 5);
}
VAR4 ^= 0xffff;
return (((VAR4 >> 8) ^ VAR2[8]) | ((VAR4 & 0xff) ^ VAR2[9]));
}
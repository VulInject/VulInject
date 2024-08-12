int FUN1(const VAR1 *VAR2)
{
u32 VAR3 = ((VAR4)VAR2[0] << 16) | ((VAR4)VAR2[1] << 8) | VAR2[2];
u32 VAR5 = ((VAR4)VAR2[3] << 16) | ((VAR4)VAR2[4] << 8) | VAR2[5];

VAR3 ^= VAR5;
VAR3 ^= (VAR3 >> 12);
VAR3 ^= (VAR3 >> 6);
return VAR3 & 0x3f;
}
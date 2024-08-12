static VAR1 FUN1(int VAR2)
{
int16_t VAR3 = 0;
int16_t VAR4 = 0x4000;
int VAR5;

for (VAR5 = 0; VAR5 < 14; VAR5 ++) {
int VAR6 = VAR3 + VAR4;
if (VAR2 >= VAR6 * VAR6 << 1)
VAR3 += VAR4;
VAR4 >>= 1;
}
return VAR3;
}
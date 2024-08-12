static int FUN1(struct VAR1 *VAR2, time64_t VAR3)
{
u8 VAR4[] = {VAR5, VAR6, VAR7,
VAR8, VAR9, VAR10};
unsigned char VAR11[6];
u64 VAR12 = VAR3 * VAR13 * 2;
int VAR14 = 0;
int VAR15;

VAR11[0] = (VAR12) & 0xFF;
VAR11[1] = (VAR12 >> 8) & 0xFF;
VAR11[2] = (VAR12 >> 16) & 0xFF;
VAR11[3] = (VAR12 >> 24) & 0xFF;
VAR11[4] = (VAR12 >> 32) & 0xFF;
VAR11[5] = (VAR12 >> 40) & 0xFF;

for (VAR15 = 0; VAR15 < 6; VAR15++) {
VAR14 = FUN2(VAR2, 0,
VAR4[VAR15], VAR11[VAR15]);
if (VAR14)
return VAR14;
}


return FUN3(VAR2, 0,
VAR16,
0x01, 0x01);

}
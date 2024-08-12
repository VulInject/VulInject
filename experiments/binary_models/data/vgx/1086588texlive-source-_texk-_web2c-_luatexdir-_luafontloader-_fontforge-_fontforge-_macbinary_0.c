static VAR1 *FUN1(VAR2 * VAR3, char *VAR4, int VAR5,
enum openflags VAR6,
VAR1 * VAR7, VAR8 * VAR9)
{
unsigned char VAR10[128];
unsigned long VAR11, VAR12, VAR13;

if (fread(VAR10, 1, 128, VAR3) != 128)
return (NULL);
if (VAR10[0] != 0 || VAR10[74] != 0 || VAR10[82] != 0 || VAR10[1] <= 0
|| VAR10[1] > 33 || VAR10[63] != 0 || VAR10[2 + VAR10[1]] != 0)
return (NULL);
VAR12 =
((VAR10[0x53] << 24) | (VAR10[0x54] << 16) | (VAR10[0x55] << 8) |
VAR10[0x56]);
VAR13 =
((VAR10[0x57] << 24) | (VAR10[0x58] << 16) | (VAR10[0x59] << 8) |
VAR10[0x5a]);

VAR11 = 128 + ((VAR12 + 127) & ~127);

if (VAR12 != 0 && VAR13 <= VAR12) {
int VAR14 = FUN2(VAR3);
if (fread(VAR10, 1, 4, VAR3) != ((VAR15)4)) {
FUN3(FUN4(""));
}
VAR10[5] = '';
if (strcmp((char *) VAR10, "") == 0
|| strcmp((char *) VAR10, "") == 0
|| strcmp((char *) VAR10, "") == 0 || (VAR10[0] == 0
&& VAR10[1] == 1
&& VAR10[2] == 0
&& VAR10[3] == 0))
return (FUN5(VAR3, VAR14, VAR12, VAR5, VAR6));
}
return (FUN6(VAR3, VAR11, VAR4, VAR5, VAR6, VAR7, VAR9));
}
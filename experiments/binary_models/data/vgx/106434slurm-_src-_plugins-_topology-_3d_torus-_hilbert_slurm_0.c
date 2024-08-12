extern void FUN1(void)
{
static bool VAR1 = true;
int VAR2, VAR3, VAR4, VAR5, VAR6 = 0;
int *VAR7;
VAR8 *VAR9;
coord_t VAR10[3];
int VAR11 = 3;
FUN2("");


if (!VAR1)
return;


VAR7 = xmalloc(sizeof(int) * VAR12 * VAR11);
for (VAR3 = 0, VAR2 = 0; (VAR9 = FUN3(&VAR3)); VAR3++) {
VAR4 = strlen(VAR9->VAR13);
if (VAR4 < VAR11) {
FUN2("",
VAR9->VAR13, VAR11);
}
for (VAR5=VAR11; VAR5; VAR5--) {
VAR7[VAR2] = FUN4(
VAR9->VAR13[VAR4-VAR5]);
if (VAR7[VAR2] < 0) {
FUN2("",
VAR9->VAR13);
}
VAR6 = FUN5(VAR6, VAR7[VAR2]);
VAR2++;	
}
}
if (VAR6 > 31) {
FUN2("",
VAR6);
}


for (VAR3 = 0, VAR2 = 0; (VAR9 = FUN3(&VAR3)); VAR3++) {
for (VAR4=0; VAR4<VAR11; VAR4++)
VAR10[VAR4] = VAR7[VAR2++];
FUN6(VAR10, 5, VAR11);


VAR9->VAR14 =
((VAR10[0]>>4 & 1) << 14) +
((VAR10[1]>>4 & 1) << 13) +
((VAR10[2]>>4 & 1) << 12) +
((VAR10[0]>>3 & 1) << 11) +
((VAR10[1]>>3 & 1) << 10) +
((VAR10[2]>>3 & 1) <<  9) +
((VAR10[0]>>2 & 1) <<  8) +
((VAR10[1]>>2 & 1) <<  7) +
((VAR10[2]>>2 & 1) <<  6) +
((VAR10[0]>>1 & 1) <<  5) +
((VAR10[1]>>1 & 1) <<  4) +
((VAR10[2]>>1 & 1) <<  3) +
((VAR10[0]>>0 & 1) <<  2) +
((VAR10[1]>>0 & 1) <<  1) +
((VAR10[2]>>0 & 1) <<  0);
}
}
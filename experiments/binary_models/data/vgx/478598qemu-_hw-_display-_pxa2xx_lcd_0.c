static void FUN1(void *VAR1, VAR2 *VAR3, const VAR2 *VAR4,
int VAR5, int VAR6)
{
uint32_t VAR7;
unsigned int VAR8, VAR9, VAR10;
while (VAR5 > 0) {
VAR7 = *(VAR11 *) VAR4;
VAR7 = FUN2(VAR7);
VAR10 = (VAR7 & 0x3f) << 2;
VAR7 >>= 6;
VAR9 = (VAR7 & 0x3f) << 2;
VAR7 >>= 6;
VAR8 = (VAR7 & 0x3f) << 2;
FUN3(VAR3, FUN4(VAR8, VAR9, VAR10));
VAR5 -= 1;
VAR4 += 4;
}
}
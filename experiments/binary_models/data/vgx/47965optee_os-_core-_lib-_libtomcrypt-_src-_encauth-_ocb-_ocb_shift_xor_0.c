void FUN1(VAR1 *VAR2, unsigned char *VAR3)
{
int VAR4, VAR5;
VAR5 = FUN2(VAR2->VAR6++);
for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++) {
VAR2->VAR8[VAR4] ^= VAR2->VAR9[VAR5][VAR4];
VAR3[VAR4]        = VAR2->VAR8[VAR4] ^ VAR2->VAR10[VAR4];
}
}
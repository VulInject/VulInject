static void FUN1(struct VAR1 *VAR2, void VAR3 *VAR4, unsigned VAR5)
{
int VAR6, VAR7, VAR8;
unsigned char VAR9[38];

for (VAR6 = 0; VAR6 < VAR5; ) {
for (VAR7 = 0, VAR8 = 0; VAR6 < VAR5 && VAR7 < 4; VAR7++) {
VAR8 += snprintf(VAR9 + VAR8, sizeof(VAR9) - VAR8,
"", FUN2(VAR4 + VAR6));
VAR6 += sizeof(VAR10);
}
FUN3(VAR2, "",
VAR11, VAR4 + VAR6, VAR9);
}
}
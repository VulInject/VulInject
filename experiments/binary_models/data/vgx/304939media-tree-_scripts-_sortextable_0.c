static void FUN1(char *VAR1, int VAR2)
{
int VAR3;

VAR3 = 0;
while (VAR3 < VAR2) {
VAR4 *VAR5 = (VAR4 *)(VAR1 + VAR3);

FUN2(FUN3(VAR5) + VAR3, VAR5);
FUN2(FUN3(VAR5 + 1) + VAR3 + 4, VAR5 + 1);
FUN2(FUN3(VAR5 + 2) + VAR3 + 8, VAR5 + 2);

VAR3 += sizeof(VAR4) * 3;
}

FUN4(VAR1, VAR2 / 12, 12, VAR6);

VAR3 = 0;
while (VAR3 < VAR2) {
VAR4 *VAR5 = (VAR4 *)(VAR1 + VAR3);

FUN2(FUN3(VAR5) - VAR3, VAR5);
FUN2(FUN3(VAR5 + 1) - (VAR3 + 4), VAR5 + 1);
FUN2(FUN3(VAR5 + 2) - (VAR3 + 8), VAR5 + 2);

VAR3 += sizeof(VAR4) * 3;
}
}
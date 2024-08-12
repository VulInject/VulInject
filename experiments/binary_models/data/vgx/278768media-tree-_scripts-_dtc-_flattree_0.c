static void FUN1(void *VAR1, struct data VAR2)
{
VAR3 *VAR4 = VAR1;
int VAR5 = 0;
struct VAR6 *VAR7 = VAR2.VAR8;

FUN2(VAR7, VAR9)
FUN3(VAR4, VAR7->VAR10, VAR7->VAR11);

while ((VAR2.VAR12 - VAR5) >= sizeof(VAR13)) {
FUN4(VAR1, FUN5(*((VAR14 *)(VAR2.VAR15+VAR5))));
VAR5 += sizeof(VAR13);
}

while ((VAR2.VAR12 - VAR5) >= 1) {
fprintf(VAR4, "", VAR2.VAR15[VAR5]);
VAR5 += 1;
}

assert(VAR5 == VAR2.VAR12);
}
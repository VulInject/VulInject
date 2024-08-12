static void FUN1(const struct VAR1 *VAR2,
void (*VAR3)(void VAR4 *))
{
void VAR4 *VAR5, *VAR6;
int VAR7, VAR8;

for (VAR7 = 0; VAR7 < VAR2->VAR9; VAR7++) {
VAR5 = FUN2(VAR2->VAR7[VAR7].VAR10, VAR11);
VAR6 = VAR5 + VAR12;

for (VAR8 = 0; VAR8 < VAR2->VAR7[VAR7].VAR13; VAR8++) {
FUN3("", VAR7, VAR8);
(*VAR3)(VAR6);
VAR6 += VAR14;
FUN3("");
}

FUN4(VAR5);
}
}
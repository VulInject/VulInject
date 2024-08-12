static void FUN1(struct VAR1 *VAR2)
{
u64 VAR3;
int VAR4;
int VAR5;

for (VAR4 = 1; VAR4 <= VAR2->VAR6->VAR7.VAR8; VAR4++) {
if (VAR2->VAR6->VAR7.VAR9[VAR4] == VAR10)
continue;
VAR5 = FUN2(&VAR2->VAR11, VAR4, &VAR3);
if (VAR5) {
FUN3("",
VAR4, VAR5);
VAR3 = 0;
}
FUN4(&VAR2->VAR3[VAR4 - 1], VAR3);
}
}
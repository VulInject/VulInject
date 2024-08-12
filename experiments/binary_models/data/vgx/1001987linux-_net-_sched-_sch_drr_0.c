static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8;
unsigned int VAR9;

if (VAR4->VAR10)
return;

for (VAR9 = 0; VAR9 < VAR6->VAR11.VAR12; VAR9++) {
FUN3(VAR8, &VAR6->VAR11.VAR13[VAR9], VAR14.VAR15) {
if (!FUN4(VAR2, (unsigned long)VAR8, VAR4))
return;
}
}
}
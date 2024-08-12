static void FUN1(struct VAR1 *VAR2)
{
size_t VAR3;
int VAR4 = 0;

for (VAR4 = 0; VAR4 < VAR5; ++VAR4) {
if (!VAR2->VAR6[VAR4].VAR7 || VAR2->VAR6[VAR4].VAR8 == 0xff)
continue;

VAR3 = FUN2(VAR2->VAR6[VAR4].VAR8);
FUN3(VAR2->VAR9[VAR10], VAR3,
VAR2->VAR6[VAR4].VAR11);
}
}
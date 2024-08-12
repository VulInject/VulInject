static void FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;
struct VAR5 *VAR6 = FUN2(VAR2);

if (!VAR6)
return;

VAR3 = FUN3(VAR2, VAR6[0].VAR7.VAR8.VAR9);
if (VAR3 <= 0 || VAR3 > 4) {
FUN4(&VAR2->VAR10, "");
return;
}

for (VAR4 = 0; VAR4 < VAR3; VAR4++)
FUN5(VAR6[VAR4].VAR11);
}
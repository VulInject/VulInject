static void FUN1(VAR1 *VAR2)
{
int VAR3;

for (VAR3 = 0; VAR3 < 2; VAR3++)
if (VAR2->VAR4[VAR3].VAR2) {
struct VAR5 *VAR6 = FUN2(&VAR2->VAR4[VAR3]);
FUN3(VAR6);
}

if (VAR2->VAR7)
FUN4(VAR2->VAR7, VAR2);

if (VAR2->VAR8) {
FUN5(VAR2->VAR8);
FUN6(VAR2->VAR9, VAR10);
}

if (VAR2->VAR11)
FUN7(VAR2->VAR11, VAR12);
if (VAR2->VAR4[0].VAR6)
FUN8(VAR2->VAR4[0].VAR6);
if (VAR2->VAR4[1].VAR6)
FUN8(VAR2->VAR4[1].VAR6);
FUN9(VAR2);
}
static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR5.VAR6);
int VAR7 = 0, VAR8 = 0, VAR9 = 0;
bool VAR10 = false, VAR11 = false;
int VAR12, VAR13;

FUN3(VAR4);
do {
VAR12 = FUN4(VAR4, 32);
VAR7 += VAR12;
if (VAR12)
VAR11 = false;
VAR13 = FUN5(VAR4, 32, &VAR8);
VAR9 += VAR13;
if (VAR13)
VAR11 = true;
} while (VAR13 || VAR12);
VAR9 -= VAR8;

if (VAR11)
FUN6(VAR4);
if (!VAR4->VAR5.VAR14 && !FUN7(VAR2)) {
FUN8(VAR4);
VAR10 = true;
}
FUN9(VAR9, VAR7, VAR8, VAR4->VAR5.VAR14, VAR10);
}
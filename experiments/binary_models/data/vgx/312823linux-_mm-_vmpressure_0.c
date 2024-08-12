static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
unsigned long VAR5;
unsigned long VAR6;
enum vmpressure_levels VAR7;
bool VAR8 = false;
bool VAR9 = false;

FUN3(&VAR4->VAR10);

VAR5 = VAR4->VAR11;
if (!VAR5) {
FUN4(&VAR4->VAR10);
return;
}

VAR6 = VAR4->VAR12;
VAR4->VAR11 = 0;
VAR4->VAR12 = 0;
FUN4(&VAR4->VAR10);

VAR7 = FUN5(VAR5, VAR6);

do {
if (FUN6(VAR4, VAR7, VAR8, VAR9))
VAR9 = true;
VAR8 = true;
} while ((VAR4 = FUN7(VAR4)));
}
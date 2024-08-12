unsigned long FUN1(struct VAR1 *VAR2)
{
if (!VAR2->VAR3->VAR4) {
unsigned long VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;

FUN2(VAR2);
VAR5 = 0;
for (VAR7 = FUN3(VAR2); VAR7; VAR7 = VAR7->VAR10)
VAR5 += VAR7->VAR11;
for (VAR9 = VAR2->VAR3->VAR8; VAR9; VAR9 = VAR9->VAR10) {
if (FUN4(VAR9))
continue;
VAR5 += VAR9->VAR11;
}
VAR2->VAR3->VAR12 = VAR5;
VAR2->VAR3->VAR4 = 1;
}
return VAR2->VAR3->VAR12;
}
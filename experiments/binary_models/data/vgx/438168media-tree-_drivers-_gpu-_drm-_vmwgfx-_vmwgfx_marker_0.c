int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, uint32_t VAR5)
{
struct VAR6 *VAR7;
uint32_t VAR8;
int VAR9;

while (!FUN2(VAR4, VAR5)) {
FUN3(&VAR4->VAR10);
if (FUN4(&VAR4->VAR11))
VAR8 = FUN5(&VAR2->VAR12);
else {
VAR7 = FUN6(&VAR4->VAR11,
struct VAR6, VAR11);
VAR8 = VAR7->VAR8;
}
FUN7(&VAR4->VAR10);

VAR9 = FUN8(VAR2, false, VAR8, true,
3*VAR13);

if (FUN9(VAR9 != 0))
return VAR9;

(void) FUN10(VAR4, VAR8);
}
return 0;
}
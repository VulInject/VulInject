static void FUN1(struct VAR1 *VAR2)
{
bool VAR3 = false;

FUN2(&VAR2->VAR4.VAR5);
if (FUN3(&VAR2->VAR4.VAR6))
VAR3 = true;
FUN4(&VAR2->VAR4.VAR5);

if (VAR3) {
FUN5(&VAR7);
FUN6(&VAR2->VAR6);
FUN7(&VAR7);

FUN8(VAR2);
} else {
FUN9(VAR2);
}
}
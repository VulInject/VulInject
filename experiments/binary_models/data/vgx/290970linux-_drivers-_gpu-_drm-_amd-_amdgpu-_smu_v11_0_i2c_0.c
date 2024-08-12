static void FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR5->VAR7;

FUN3(&VAR5->mutex);
if (!FUN4(VAR2))
FUN5("");
else
VAR7->VAR8.VAR9 = true;
}
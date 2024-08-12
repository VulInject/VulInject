static FUN1(VAR1);
static int FUN2(struct VAR2 *VAR3, struct VAR4 *VAR5,
struct VAR4 *VAR6, bool VAR7);

void FUN3(struct VAR2 *VAR3)
{
struct VAR4 *VAR6;

if (!FUN4(VAR3->VAR8))
return;

FUN5(&VAR9);
VAR6 = FUN6(VAR3->VAR8,
FUN7(&VAR9));
if (FUN8(VAR6))
VAR6->VAR10 = 1;
FUN9(&VAR9);
}
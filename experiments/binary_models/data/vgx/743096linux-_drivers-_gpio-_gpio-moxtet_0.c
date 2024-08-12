static void FUN1(struct VAR1 *VAR2, unsigned int VAR3,
int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;

VAR7 = FUN3(VAR6->VAR8);
if (VAR7 < 0)
return;

VAR3 -= VAR9;

if (VAR4)
VAR7 |= FUN4(VAR3);
else
VAR7 &= ~FUN4(VAR3);

FUN5(VAR6->VAR8, VAR7);
}
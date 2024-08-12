static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
u32 VAR7;
int VAR8;

FUN3(VAR8);

if (VAR3 < 6) {
VAR7 = FUN4(VAR6, VAR9);
if (VAR4)
VAR7 |= FUN5(VAR3);
else
VAR7 &= ~FUN5(VAR3);
FUN6(VAR6, VAR9, VAR7);
}

VAR7 = FUN4(VAR6, VAR10);
VAR7 &= ~FUN5(VAR3);
FUN6(VAR6, VAR10, VAR7);
FUN7(VAR8);

return 0;
}
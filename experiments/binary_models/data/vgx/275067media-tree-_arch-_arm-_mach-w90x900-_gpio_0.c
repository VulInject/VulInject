static void FUN1(struct VAR1 *VAR2, unsigned VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
void VAR7 *VAR8 = VAR6->VAR9 + VAR10;
unsigned int VAR11;
unsigned long VAR12;

FUN3(&VAR6->VAR13, VAR12);

VAR11 = FUN4(VAR8);

if (VAR4)
VAR11 |= FUN5(VAR3);
else
VAR11 &= ~FUN5(VAR3);

FUN6(VAR11, VAR8);

FUN7(&VAR6->VAR13, VAR12);
}
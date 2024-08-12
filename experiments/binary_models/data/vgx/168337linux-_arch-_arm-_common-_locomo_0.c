void FUN1(struct VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;
unsigned int VAR8;

if (!VAR6)
return;

FUN3(&VAR6->VAR9, VAR7);

VAR8 = FUN4(VAR6->VAR10 + VAR11);
if (VAR4)
VAR8 |= VAR3;
else
VAR8 &= ~VAR3;
FUN5(VAR8, VAR6->VAR10 + VAR11);

VAR8 = FUN4(VAR6->VAR10 + VAR12);
if (VAR4)
VAR8 |= VAR3;
else
VAR8 &= ~VAR3;
FUN5(VAR8, VAR6->VAR10 + VAR12);

FUN6(&VAR6->VAR9, VAR7);
}
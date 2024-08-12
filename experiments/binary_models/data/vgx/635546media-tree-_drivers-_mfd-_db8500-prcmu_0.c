void FUN1(struct VAR1 *sleep,
struct VAR1 *VAR2)
{
u32 VAR3;
u32 VAR4;
unsigned long VAR5;

FUN2((sleep == NULL) || (VAR2 == NULL));

VAR3 = (sleep->VAR6 & 0xF);
VAR3 = ((VAR3 << 4) | (sleep->VAR7 & 0xF));
VAR3 = ((VAR3 << 8) | (sleep->VAR8 & 0xFF));
VAR3 = ((VAR3 << 8) | (sleep->VAR9 & 0xFF));
VAR3 = ((VAR3 << 4) | (sleep->VAR10 & 0xF));
VAR3 = ((VAR3 << 4) | (sleep->VAR11 & 0xF));

VAR4 = (VAR2->VAR6 & 0xF);
VAR4 = ((VAR4 << 4) | (VAR2->VAR7 & 0xF));
VAR4 = ((VAR4 << 8) | (VAR2->VAR8 & 0xFF));
VAR4 = ((VAR4 << 8) | (VAR2->VAR9 & 0xFF));
VAR4 = ((VAR4 << 4) | (VAR2->VAR10 & 0xF));
VAR4 = ((VAR4 << 4) | (VAR2->VAR11 & 0xF));

FUN3(&VAR12.VAR13, VAR5);


FUN4(VAR3, (VAR14 + VAR15));
FUN4(VAR4, (VAR14 + VAR16));

VAR12.VAR17 =
((sleep->VAR6 == VAR18) ||
(sleep->VAR7 == VAR18) ||
(VAR2->VAR6 == VAR18) ||
(VAR2->VAR7 == VAR18));

FUN5(&VAR12.VAR13, VAR5);
}
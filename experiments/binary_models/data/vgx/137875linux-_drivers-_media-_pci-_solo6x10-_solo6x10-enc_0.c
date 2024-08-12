void FUN1(struct VAR1 *VAR1, unsigned int VAR2,
unsigned int VAR3)
{
unsigned long VAR4;
unsigned int VAR5, VAR6;

if ((VAR2 > 31) || (VAR3 > 3))
return;

if (VAR1->VAR7 == VAR8)
return;

if (VAR2 < 16) {
VAR5 = 0;
VAR6 = VAR9;
} else {
VAR2 -= 16;
VAR5 = 1;
VAR6 = VAR10;
}
VAR2 *= 2;

FUN2(&VAR1->VAR11, VAR4);

VAR1->VAR12[VAR5] &= ~(3 << VAR2);
VAR1->VAR12[VAR5] |= (VAR3 & 3) << VAR2;

FUN3(VAR1, VAR6, VAR1->VAR12[VAR5]);

FUN4(&VAR1->VAR11, VAR4);
}
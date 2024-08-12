void FUN1(struct VAR1 *VAR2,
bool VAR3)
{
u32 VAR4 = FUN2(VAR2->VAR5 + 3);

if (VAR3)
VAR4 |= VAR6;
else
VAR4 &= ~VAR6;

FUN3(VAR2->VAR5 + 3, VAR4);
}
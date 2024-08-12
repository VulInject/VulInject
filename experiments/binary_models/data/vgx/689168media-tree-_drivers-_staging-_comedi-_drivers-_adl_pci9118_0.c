static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->private;
struct VAR7 *VAR8 = &VAR4->VAR9->VAR8;
unsigned short VAR10;

VAR10 = FUN2(VAR2->VAR11 + VAR12);

FUN3(VAR4, &VAR10, 1);

if (!VAR6->VAR13) {
if (VAR4->VAR9->VAR14 >= VAR8->VAR15)
VAR4->VAR9->VAR16 |= VAR17;
}
}
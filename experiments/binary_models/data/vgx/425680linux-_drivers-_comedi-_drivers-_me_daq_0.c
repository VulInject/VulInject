static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
unsigned int *VAR7)
{
struct VAR8 *VAR9 = VAR2->private;
unsigned int VAR10 = FUN2(VAR6->VAR11);
unsigned int VAR12;
int VAR13;

if (VAR10 < 16)
VAR12 = 0x0000ffff;
else
VAR12 = 0xffff0000;

VAR13 = FUN3(VAR2, VAR4, VAR6, VAR7, VAR12);
if (VAR13)
return VAR13;

if (VAR4->VAR14 & 0x0000ffff)
VAR9->VAR15 |= VAR16;
else
VAR9->VAR15 &= ~VAR16;
if (VAR4->VAR14 & 0xffff0000)
VAR9->VAR15 |= VAR17;
else
VAR9->VAR15 &= ~VAR17;

FUN4(VAR9->VAR15, VAR2->VAR18 + VAR19);

return VAR6->VAR20;
}
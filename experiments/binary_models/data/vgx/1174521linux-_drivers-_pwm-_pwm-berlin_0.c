static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
enum pwm_polarity VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
u32 VAR8;

VAR8 = FUN3(VAR7, VAR4->VAR9, VAR10);

if (VAR5 == VAR11)
VAR8 &= ~VAR12;
else
VAR8 |= VAR12;

FUN4(VAR7, VAR4->VAR9, VAR8, VAR10);

return 0;
}
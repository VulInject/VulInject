static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2, struct VAR5, VAR2);
int VAR7 = FUN3(VAR2, VAR3, &VAR4, false);
u32 VAR8 = 0;


if (VAR7 == 1) {

VAR8 |= VAR9;
} else {
VAR7 -= 2;
VAR8 |= VAR7 & VAR10;
}
VAR6->VAR11 = VAR8;

return 0;
}
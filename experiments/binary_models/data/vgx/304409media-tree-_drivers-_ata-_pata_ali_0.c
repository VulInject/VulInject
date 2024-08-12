static void FUN1(struct VAR1 *VAR2, unsigned int *VAR3)
{
u8 VAR4;
int VAR5 = 4 << VAR2->VAR6->VAR7;


if (VAR8) {

FUN2(VAR8, 0x58, &VAR4);
VAR4 &= ~VAR5;
FUN3(VAR8, 0x58, VAR4);
VAR4 |= VAR5;
FUN3(VAR8, 0x58, VAR4);
}
FUN4(VAR2, VAR3);
}
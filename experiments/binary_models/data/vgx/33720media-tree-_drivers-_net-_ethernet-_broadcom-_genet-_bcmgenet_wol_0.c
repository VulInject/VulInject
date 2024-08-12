void FUN1(struct VAR1 *VAR2,
enum bcmgenet_power_mode VAR3)
{
u32 VAR4;

if (VAR3 != VAR5) {
FUN2(VAR2, VAR6, VAR2->VAR7, "", VAR3);
return;
}

VAR4 = FUN3(VAR2, VAR8);
VAR4 &= ~VAR9;
FUN4(VAR2, VAR4, VAR8);


VAR4 = FUN3(VAR2, VAR10);
VAR4 &= ~VAR11;
FUN4(VAR2, VAR4, VAR10);
VAR2->VAR12 = 0;
}
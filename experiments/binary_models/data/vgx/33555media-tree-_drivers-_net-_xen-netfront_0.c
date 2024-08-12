static VAR1 FUN1(struct VAR2 *VAR3,
netdev_features_t VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR3);

if (VAR4 & VAR7 &&
!FUN3(VAR6->VAR8->VAR9, "", 0))
VAR4 &= ~VAR7;

if (VAR4 & VAR10 &&
!FUN3(VAR6->VAR8->VAR9,
"", 0))
VAR4 &= ~VAR10;

if (VAR4 & VAR11 &&
!FUN3(VAR6->VAR8->VAR9, "", 0))
VAR4 &= ~VAR11;

if (VAR4 & VAR12 &&
!FUN3(VAR6->VAR8->VAR9, "", 0))
VAR4 &= ~VAR12;

return VAR4;
}
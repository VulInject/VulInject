static inline void FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, target_ulong VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    if (FUN4(VAR2, VAR4))
    {
        VAR3 = (VAR9)VAR3;
        VAR4 &= (VAR9)VAR5;
    }
    else
    {
        VAR3 = (VAR10)VAR3;
        VAR4 = (VAR10)(VAR4 & VAR5);
        if (VAR6)
        {
            VAR4 |= VAR2->VAR4 & ~((VAR9)0xFFFFFFFF);
        }
    }
    VAR3 = (VAR10)VAR3;
    VAR4 &= (VAR10)VAR5;
    VAR2->VAR3 = VAR3 & ~((VAR11)0x00000003);
    FUN5(VAR2, VAR4, 1);
    FUN6(VAR2->VAR3, VAR2->VAR4);
    VAR8->VAR12 |= VAR13;
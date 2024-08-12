static inline void FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3(VAR2));
    VAR4 &= ~(1ULL << VAR7);
    if (!FUN4(VAR2, VAR4))
    {
        VAR3 = (VAR8)VAR3;
    }
    VAR3 = (VAR8)VAR3;
    VAR2->VAR3 = VAR3 & ~((VAR9)0x00000003);
    FUN5(VAR2, VAR4, 1);
    FUN6(VAR2->VAR3, VAR2->VAR4);
    VAR6->VAR10 |= VAR11;
    FUN7(VAR2);
}
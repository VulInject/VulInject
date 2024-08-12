static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, tcg_target_long VAR5, bool VAR6)
{
    intptr_t VAR7;
    tcg_target_long VAR8;
    int VAR9;
    FUN2(VAR10 == 64 || VAR3 == VAR11);
    if (VAR10 == 64 && VAR3 == VAR11)
    {
        VAR5 = (VAR12)VAR5;
    }
    if (FUN3(VAR2, VAR4, VAR5))
    {
        return;
    }
    VAR7 = VAR5 - (VAR13)VAR2->VAR14;
    if (!VAR6 && VAR15 && VAR7 == (VAR16)VAR7)
    {
        FUN4(VAR2, VAR17 | FUN5(VAR4, VAR18, VAR7));
        return;
    }
    if (VAR10 == 32 || VAR5 == (VAR12)VAR5)
    {
        FUN4(VAR2, VAR19 | FUN5(VAR4, 0, VAR5 >> 16));
        FUN4(VAR2, VAR20 | FUN6(VAR4, VAR4, VAR5));
        return;
    }
    if (VAR5 == (VAR21)VAR5 && !(VAR5 & 0x8000))
    {
        FUN4(VAR2, VAR17 | FUN5(VAR4, 0, VAR5));
        FUN4(VAR2, VAR22 | FUN6(VAR4, VAR4, VAR5 >> 16));
        return;
    }
    if (VAR5 > 0 && (VAR5 & 0x8000))
    {
        VAR8 = VAR5 | 0x7fff;
        if ((VAR8 & (VAR8 + 1)) == 0)
        {
            int VAR23 = FUN7(VAR8 + 1) + 1;
            FUN4(VAR2, VAR17 | FUN5(VAR4, 0, VAR5));
            FUN8(VAR2, VAR24, VAR4, VAR4, 0, VAR23);
            return;
        }
    }
    VAR9 = FUN9(VAR5);
    VAR8 = VAR5 >> VAR9;
    if (VAR8 == (VAR16)VAR8)
    {
        FUN4(VAR2, VAR17 | FUN5(VAR4, 0, VAR8));
        FUN10(VAR2, VAR4, VAR4, VAR9);
        return;
    }
    VAR9 = FUN7(VAR5);
    if (FUN3(VAR2, VAR4, VAR5 << VAR9))
    {
        FUN11(VAR2, VAR4, VAR4, VAR9);
        return;
    }
    if (!VAR6 && VAR15 && VAR7 == (VAR12)VAR7)
    {
        FUN12(VAR2, VAR17, VAR25, VAR4, VAR18, VAR7);
        return;
    }
    if (!VAR6 && VAR15)
    {
        FUN13(VAR2, VAR5, VAR26, VAR2->VAR27, -(VAR13)VAR2->VAR14);
        FUN4(VAR2, VAR28 | FUN5(VAR4, VAR18, 0));
        return;
    }
    VAR8 = VAR5 >> 31 >> 1;
    FUN14(VAR2, VAR11, VAR4, VAR8);
    if (VAR8)
    {
        FUN10(VAR2, VAR4, VAR4, 32);
    }
    if (VAR5 & 0xffff0000)
    {
        FUN4(VAR2, VAR22 | FUN6(VAR4, VAR4, VAR5 >> 16));
    }
    if (VAR5 & 0xffff)
    {
        FUN4(VAR2, VAR20 | FUN6(VAR4, VAR4, VAR5));
    }
}
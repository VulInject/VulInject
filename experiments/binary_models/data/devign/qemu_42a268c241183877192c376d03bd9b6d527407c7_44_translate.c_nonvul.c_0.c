static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4 = FUN2(VAR2->VAR5);
    VAR6 *VAR7;
    TCGv VAR8;
    VAR2->VAR9 = VAR10;
    if (VAR3 == VAR11 || VAR3 == VAR12 || VAR3 == VAR13)
    {
        VAR8 = FUN3();
        if (VAR3 == VAR12)
            FUN4(VAR8, VAR14);
        else if (VAR3 == VAR13)
            FUN5(VAR8, VAR15);
        else
            FUN4(VAR8, VAR16);
    }
    else
    {
        FUN6(VAR8);
    }
    if (FUN7(VAR2->VAR5))
        FUN8(VAR2, VAR2->VAR17);
    VAR7 = FUN9();
    if ((VAR4 & 0x4) == 0)
    {
        TCGv VAR18 = FUN10();
        if (FUN11(VAR3 == VAR12))
        {
            FUN12(VAR2, VAR19);
            return;
        }
        FUN13(VAR14, VAR14, 1);
        if (FUN14(VAR2))
        {
            FUN15(VAR18, VAR14);
        }
        else
        {
            FUN4(VAR18, VAR14);
        }
        if (VAR4 & 0x2)
        {
            FUN16(VAR20, VAR18, 0, VAR7);
        }
        else
        {
            FUN16(VAR21, VAR18, 0, VAR7);
        }
        FUN17(VAR18);
    }
    if ((VAR4 & 0x10) == 0)
    {
        uint32_t VAR22 = FUN18(VAR2->VAR5);
        uint32_t VAR23 = 0x08 >> (VAR22 & 0x03);
        TCGv_i32 VAR18 = FUN19();
        if (VAR4 & 0x8)
        {
            FUN20(VAR18, VAR24[VAR22 >> 2], VAR23);
            FUN21(VAR21, VAR18, 0, VAR7);
        }
        else
        {
            FUN20(VAR18, VAR24[VAR22 >> 2], VAR23);
            FUN21(VAR20, VAR18, 0, VAR7);
        }
        FUN22(VAR18);
    }
    FUN23(VAR2, VAR2->VAR17);
    if (VAR3 == VAR25)
    {
        target_ulong VAR26 = (VAR27)((VAR28)(FUN24(VAR2->VAR5)));
        if (FUN25(FUN26(VAR2->VAR5) == 0))
        {
            FUN27(VAR2, 0, VAR2->VAR17 + VAR26 - 4);
        }
        else
        {
            FUN27(VAR2, 0, VAR26);
        }
        FUN28(VAR7);
        FUN27(VAR2, 1, VAR2->VAR17);
    }
    else
    {
        if (FUN14(VAR2))
        {
            FUN29(VAR29, VAR8, (VAR30)~3);
        }
        else
        {
            FUN29(VAR29, VAR8, ~3);
        }
        FUN30(0);
        FUN28(VAR7);
        FUN31(VAR2, VAR2->VAR17);
        FUN30(0);
    }
    if (VAR3 == VAR11 || VAR3 == VAR12 || VAR3 == VAR13)
    {
        FUN17(VAR8);
    }
}
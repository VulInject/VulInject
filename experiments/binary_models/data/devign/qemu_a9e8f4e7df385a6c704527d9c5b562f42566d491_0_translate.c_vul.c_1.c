static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4 = FUN2(VAR2->VAR5);
    int VAR6;
    TCGv VAR7;
    VAR2->VAR8 = VAR9;
    if (VAR3 == VAR10 || VAR3 == VAR11 || VAR3 == VAR12)
    {
        VAR7 = FUN3();
        if (VAR3 == VAR11)
            FUN4(VAR7, VAR13);
        else if (VAR3 == VAR12)
            FUN5(VAR7, VAR14);
        else
            FUN4(VAR7, VAR15);
    }
    else
    {
        FUN6(VAR7);
    }
    if (FUN7(VAR2->VAR5))
        FUN8(VAR2, VAR2->VAR16);
    VAR6 = FUN9();
    if ((VAR4 & 0x4) == 0)
    {
        TCGv VAR17 = FUN10();
        if (FUN11(VAR3 == VAR11))
        {
            FUN12(VAR2, VAR18);
            return;
        }
        FUN13(VAR13, VAR13, 1);
        if (FUN14(VAR2))
        {
            FUN15(VAR17, VAR13);
        }
        else
        {
            FUN4(VAR17, VAR13);
        }
        if (VAR4 & 0x2)
        {
            FUN16(VAR19, VAR17, 0, VAR6);
        }
        else
        {
            FUN16(VAR20, VAR17, 0, VAR6);
        }
        FUN17(VAR17);
    }
    if ((VAR4 & 0x10) == 0)
    {
        uint32_t VAR21 = FUN18(VAR2->VAR5);
        uint32_t VAR22 = 1 << (3 - (VAR21 & 0x03));
        TCGv_i32 VAR17 = FUN19();
        if (VAR4 & 0x8)
        {
            FUN20(VAR17, VAR23[VAR21 >> 2], VAR22);
            FUN21(VAR20, VAR17, 0, VAR6);
        }
        else
        {
            FUN20(VAR17, VAR23[VAR21 >> 2], VAR22);
            FUN21(VAR19, VAR17, 0, VAR6);
        }
        FUN22(VAR17);
    }
    FUN23(VAR2, VAR2->VAR16);
    if (VAR3 == VAR24)
    {
        target_ulong VAR25 = (VAR26)((VAR27)(FUN24(VAR2->VAR5)));
        if (FUN25(FUN26(VAR2->VAR5) == 0))
        {
            FUN27(VAR2, 0, VAR2->VAR16 + VAR25 - 4);
        }
        else
        {
            FUN27(VAR2, 0, VAR25);
        }
        FUN28(VAR6);
        FUN27(VAR2, 1, VAR2->VAR16);
    }
    else
    {
        if (FUN14(VAR2))
        {
            FUN29(VAR28, VAR7, (VAR29)~3);
        }
        else
        {
            FUN29(VAR28, VAR7, ~3);
        }
        FUN30(0);
        FUN28(VAR6);
        FUN31(VAR2, VAR2->VAR16);
        FUN30(0);
    }
    if (VAR3 == VAR10 || VAR3 == VAR11)
    {
        FUN17(VAR7);
    }
}
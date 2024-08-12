static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    target_ulong VAR6 = (VAR3 == VAR7 ? 0x3f : 0x1f);
    TCGv_i32 VAR8, VAR9;
    if (VAR4 == VAR10)
    {
        FUN2(VAR3 + VAR2->VAR11);
    }
    else
    {
        FUN3(VAR3, 0, VAR4);
    }
    FUN4(VAR12[1], VAR12[1], VAR6);
    switch (VAR3)
    {
    case VAR13:
        FUN5(VAR12[0], VAR12[0]);
        FUN6(VAR12[0], VAR12[0], 0x01010101);
        goto VAR14;
    case VAR15:
        FUN7(VAR12[0], VAR12[0], VAR12[0], 16, 16);
        goto VAR14;
    VAR14:
    case VAR16:
        FUN8(VAR17, VAR12[0]);
        FUN8(VAR18, VAR12[1]);
        if (VAR5)
        {
            FUN9(VAR17, VAR17, VAR18);
        }
        else
        {
            FUN10(VAR17, VAR17, VAR18);
        }
        FUN11(VAR12[0], VAR17);
        break;
    default:
        if (VAR5)
        {
            FUN12(VAR12[0], VAR12[0], VAR12[1]);
        }
        else
        {
            FUN13(VAR12[0], VAR12[0], VAR12[1]);
        }
        break;
    }
    if (VAR4 == VAR10)
    {
        FUN14(VAR3 + VAR2->VAR11);
    }
    else
    {
        FUN15(VAR3, VAR4);
    }
    FUN16(VAR2);
    if (VAR5)
    {
        FUN17(VAR19, VAR12[0], VAR6 - 1);
        FUN17(VAR20, VAR12[0], VAR6);
    }
    else
    {
        FUN17(VAR19, VAR12[0], VAR6);
        FUN4(VAR20, VAR12[0], 1);
    }
    FUN4(VAR19, VAR19, 1);
    FUN18(VAR19, VAR19, VAR20);
    VAR8 = FUN19(0);
    VAR9 = FUN20();
    FUN8(VAR9, VAR12[1]);
    FUN21(VAR17, VAR21);
    FUN21(VAR18, VAR22);
    FUN22(VAR23, VAR24, VAR9, VAR8, VAR17, VAR18);
    FUN23(VAR8);
    FUN23(VAR9);
    FUN24(VAR2, VAR25);
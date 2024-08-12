static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int64_t VAR7 = FUN2(VAR2);
    char VAR8[32] = {0};
    FUN3(VAR2, 0);
    FUN4(VAR2, VAR6->VAR9);
    FUN3(VAR2, 0);
    FUN5(VAR2, 0);
    FUN5(VAR2, 1);
    FUN5(VAR2, 0);
    FUN5(VAR2, 0);
    if (VAR6->VAR10 == VAR11)
    {
        FUN6(VAR2, "");
        if (VAR6->VAR12->VAR13 == VAR14)
        {
            FUN3(VAR2, 0);
            FUN3(VAR2, 0x400);
        }
        else
        {
            FUN3(VAR2, 0x200);
            FUN3(VAR2, 0x200);
        }
    }
    else
    {
        FUN3(VAR2, 0);
        FUN3(VAR2, 0);
        FUN3(VAR2, 0);
    }
    FUN5(VAR2, VAR6->VAR12->VAR15);
    FUN5(VAR2, VAR6->VAR16);
    FUN3(VAR2, 0x00480000);
    FUN3(VAR2, 0x00480000);
    FUN3(VAR2, 0);
    FUN5(VAR2, 1);
    FUN7(VAR8, 32, VAR6);
    FUN8(VAR2, strlen(VAR8));
    FUN9(VAR2, VAR8, 31);
    if (VAR6->VAR10 == VAR11 && VAR6->VAR12->VAR17)
        FUN5(VAR2, VAR6->VAR12->VAR17);
    else
        FUN5(VAR2, 0x18);
    FUN5(VAR2, 0xffff);
    if (VAR6->VAR9 == FUN10('', '', '', ''))
        FUN11(VAR2, VAR6);
    else if (VAR6->VAR12->VAR13 == VAR18)
        FUN12(VAR2);
    else if (VAR6->VAR12->VAR13 == VAR19 || VAR6->VAR12->VAR13 == VAR20)
    {
        FUN13(VAR2, VAR6);
        FUN3(VAR2, 0);
    }
    else if (VAR6->VAR12->VAR13 == VAR21)
        FUN14(VAR2, VAR6);
    else if (VAR6->VAR12->VAR13 == VAR22)
        FUN15(VAR2, VAR6);
    else if (VAR6->VAR12->VAR13 == VAR23 && !FUN16(VAR6->VAR9))
    {
        FUN17(VAR2, VAR6);
        if (VAR6->VAR10 == VAR24)
            FUN18(VAR2);
    }
    else if (VAR6->VAR12->VAR13 == VAR25 && VAR6->VAR26 > 0)
        FUN19(VAR2, VAR6);
    else if (VAR6->VAR12->VAR13 == VAR27 || VAR6->VAR12->VAR13 == VAR28)
    {
    }
    else if (VAR6->VAR12->VAR13 == VAR29)
    {
        if (VAR6->VAR12->VAR30 == FUN10('', '', '', ''))
            FUN20(VAR2, VAR6);
    }
    else if (VAR6->VAR26 > 0)
        FUN21(VAR2, VAR6);
    if (VAR6->VAR12->VAR13 != VAR23 && VAR6->VAR12->VAR13 != VAR31 && VAR6->VAR12->VAR13 != VAR21)
        if (VAR6->VAR12->VAR32 != VAR33)
            FUN22(VAR2, VAR6);
    if (VAR4->VAR34 & VAR35)
        FUN23(VAR2, VAR6);
    if (VAR6->VAR12->VAR36.VAR37 && VAR6->VAR12->VAR36.VAR38 && VAR6->VAR12->VAR36.VAR37 != VAR6->VAR12->VAR36.VAR38)
    {
        FUN24(VAR2, VAR6);
    }
    return FUN25(VAR2, VAR7);
}
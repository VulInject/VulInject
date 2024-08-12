static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5 = FUN2(VAR2);
    int VAR6 = 0;
    uint32_t VAR7 = VAR4->VAR7;
    if (VAR4->VAR8 == VAR9)
    {
        if (VAR4->VAR10 > VAR11)
        {
            if (FUN3(VAR4->VAR12->VAR13))
                VAR7 = FUN4("");
            VAR6 = 2;
        }
        else if (VAR4->VAR14 || FUN5(VAR4->VAR12->VAR13) || FUN6(VAR4->VAR12->VAR13) || VAR4->VAR12->VAR13 == VAR15 || VAR4->VAR12->VAR13 == VAR16 || VAR4->VAR12->VAR13 == VAR17)
        {
            VAR6 = 1;
        }
    }
    FUN7(VAR2, 0);
    FUN8(VAR2, VAR7);
    FUN7(VAR2, 0);
    FUN9(VAR2, 0);
    FUN9(VAR2, 1);
    FUN9(VAR2, VAR6);
    FUN9(VAR2, 0);
    FUN7(VAR2, 0);
    if (VAR6 == 2)
    {
        FUN9(VAR2, 3);
        FUN9(VAR2, 16);
        FUN9(VAR2, 0xfffe);
        FUN9(VAR2, 0);
        FUN7(VAR2, 0x00010000);
        FUN7(VAR2, 72);
        FUN10(VAR2, FUN11(VAR4->VAR12->VAR18));
        FUN7(VAR2, VAR4->VAR12->VAR19);
        FUN7(VAR2, 0x7F000000);
        FUN7(VAR2, FUN12(VAR4->VAR12->VAR13));
        FUN7(VAR2, FUN3(VAR4->VAR12->VAR13));
        FUN7(VAR2, VAR4->VAR20);
        FUN7(VAR2, FUN13(VAR4));
    }
    else
    {
        if (VAR4->VAR8 == VAR9)
        {
            FUN9(VAR2, VAR4->VAR12->VAR19);
            if (VAR4->VAR12->VAR13 == VAR21 || VAR4->VAR12->VAR13 == VAR22)
                FUN9(VAR2, 8);
            else
                FUN9(VAR2, 16);
            FUN9(VAR2, VAR4->VAR14 ? -2 : 0);
        }
        else
        {
            FUN9(VAR2, 2);
            FUN9(VAR2, 16);
            FUN9(VAR2, 0);
        }
        FUN9(VAR2, 0);
        FUN9(VAR2, VAR4->VAR12->VAR18 <= VAR11 ? VAR4->VAR12->VAR18 : 0);
        FUN9(VAR2, 0);
    }
    if (VAR6 == 1)
    {
        FUN7(VAR2, VAR4->VAR12->VAR23);
        FUN7(VAR2, VAR4->VAR20 / VAR4->VAR12->VAR19);
        FUN7(VAR2, VAR4->VAR20);
        FUN7(VAR2, 2);
    }
    if (VAR4->VAR8 == VAR9 && (VAR4->VAR12->VAR13 == VAR24 || VAR4->VAR12->VAR13 == VAR25 || VAR4->VAR12->VAR13 == VAR26 || VAR4->VAR12->VAR13 == VAR27 || VAR4->VAR12->VAR13 == VAR15 || VAR4->VAR12->VAR13 == VAR16 || VAR4->VAR12->VAR13 == VAR17 || (FUN5(VAR4->VAR12->VAR13) && VAR6 == 1) || (FUN6(VAR4->VAR12->VAR13) && VAR6 == 1)))
        FUN14(VAR2, VAR4);
    else if (VAR4->VAR7 == FUN15('', '', '', ''))
        FUN16(VAR2, VAR4);
    else if (VAR4->VAR12->VAR13 == VAR26)
        FUN17(VAR2, VAR4);
    else if (VAR4->VAR12->VAR13 == VAR25)
        FUN18(VAR2, VAR4);
    else if (VAR4->VAR12->VAR13 == VAR27)
        FUN19(VAR2, VAR4);
    else if (VAR4->VAR12->VAR13 == VAR28)
        FUN20(VAR2, VAR4);
    else if (VAR4->VAR29 > 0)
        FUN21(VAR2, VAR4);
    if (VAR4->VAR8 == VAR9 && VAR4->VAR12->VAR30 == VAR31)
        FUN22(VAR2, VAR4);
    return FUN23(VAR2, VAR5);
}
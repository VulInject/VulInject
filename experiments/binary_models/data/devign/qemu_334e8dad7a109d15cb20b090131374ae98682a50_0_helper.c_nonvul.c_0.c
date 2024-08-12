static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint32_t VAR5;
    uint32_t VAR6;
    bool VAR7 = false;
    bool VAR8 = false;
    bool VAR9 = false;
    bool VAR10 = false;
    assert(FUN2(VAR4));
    VAR5 = VAR4->VAR11[15];
    if (VAR4->VAR12)
    {
        VAR5 |= 1;
    }
    FUN3(VAR13, "" VAR14 "", VAR5, VAR4->VAR15.VAR16);
    if (FUN4(VAR5, 5, 23) != FUN4(-1, 5, 23))
    {
        FUN3(VAR17, ""
                                       "" VAR14 "",
                      VAR5);
    }
    if (VAR4->VAR15.VAR16 != VAR18)
    {
        if (FUN5(VAR4, VAR19))
        {
            int VAR20 = VAR5 & 1;
            if (FUN6(VAR4->VAR21) >= 0)
            {
                VAR4->VAR15.VAR22[VAR20] = 0;
            }
        }
        else
        {
            VAR4->VAR15.VAR22[VAR23] = 0;
        }
    }
    switch (FUN7(VAR4->VAR21, VAR4->VAR15.VAR16))
    {
    case -1:
        VAR7 = true;
        break;
    case 0:
        break;
    case 1:
        VAR10 = true;
        break;
    default:
        FUN8();
    }
    switch (VAR5 & 0xf)
    {
    case 1:
        VAR9 = true;
        break;
    case 13:
        VAR8 = true;
    case 9:
        if (!VAR10 && !(VAR4->VAR15.VAR24[VAR4->VAR15.VAR25] & VAR26))
        {
            VAR7 = true;
        }
        break;
    default:
        VAR7 = true;
    }
    if (VAR7)
    {
        VAR4->VAR15.VAR27[VAR4->VAR15.VAR25] |= VAR28;
        FUN9(VAR4->VAR21, VAR29);
        FUN10(VAR2, VAR5 | 0xf0000000);
        FUN3(VAR13, ""
                                   "");
        return;
    }
    FUN11(VAR4, VAR8);
    VAR4->VAR11[0] = FUN12(VAR4);
    VAR4->VAR11[1] = FUN12(VAR4);
    VAR4->VAR11[2] = FUN12(VAR4);
    VAR4->VAR11[3] = FUN12(VAR4);
    VAR4->VAR11[12] = FUN12(VAR4);
    VAR4->VAR11[14] = FUN12(VAR4);
    VAR4->VAR11[15] = FUN12(VAR4);
    if (VAR4->VAR11[15] & 1)
    {
        FUN3(VAR17, ""
                                       "");
        VAR4->VAR11[15] &= ~1U;
    }
    VAR6 = FUN12(VAR4);
    FUN13(VAR4, VAR6, ~VAR30);
    if (VAR6 & VAR30)
    {
        VAR4->VAR11[13] |= 4;
    }
    if (VAR9 != FUN2(VAR4))
    {
        FUN9(VAR4->VAR21, VAR29);
        VAR4->VAR15.VAR27[VAR4->VAR15.VAR25] |= VAR28;
        FUN14(VAR2);
        FUN10(VAR2, VAR5 | 0xf0000000);
        FUN3(VAR13, ""
                                   "");
        return;
    }
    FUN3(VAR13, "");
}
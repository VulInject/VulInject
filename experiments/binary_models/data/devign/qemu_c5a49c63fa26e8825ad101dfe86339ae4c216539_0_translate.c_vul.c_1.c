static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    TCGv VAR6;
    FUN2(VAR2, VAR7);
    VAR6 = FUN3();
    switch (VAR4)
    {
    case 0:
        FUN4(VAR6, VAR8);
        FUN5(VAR6, VAR3);
        break;
    case 1:
        FUN6(VAR6, VAR8);
        FUN5(VAR6, VAR3);
        break;
    case 2:
        if (VAR2->VAR9->VAR10 & VAR11)
        {
            FUN7();
        }
        FUN8(VAR6, VAR8);
        if (VAR2->VAR9->VAR10 & VAR11)
        {
            FUN9();
        }
        FUN5(VAR6, VAR3);
        FUN10(VAR2->VAR12 + 4);
        VAR2->VAR13 = VAR14;
        break;
    case 3:
        FUN11(VAR6, VAR8);
        FUN5(VAR6, VAR3);
        break;
    case 4:
        FUN2(VAR2, VAR15);
        if (VAR5 != 0)
        {
            FUN12(VAR2, VAR16);
        }
        FUN13(VAR6, VAR8);
        FUN5(VAR6, VAR3);
        break;
    case 5:
        FUN2(VAR2, VAR15);
        FUN14(VAR6, VAR8);
        FUN5(VAR6, VAR3);
        break;
    case 29:
        FUN15(VAR6, VAR8, FUN16(VAR17, VAR18.VAR19));
        FUN5(VAR6, VAR3);
        break;
        if ((VAR2->VAR20 & VAR21) || (VAR2->VAR20 & VAR22))
        {
            FUN15(VAR6, VAR8, FUN16(VAR17, VAR18.VAR19));
            FUN5(VAR6, VAR3);
        }
        else
        {
            FUN17(VAR2, VAR16);
        }
        break;
    default:
        FUN18("");
        FUN17(VAR2, VAR16);
        break;
    }
    FUN19(VAR6);
}
static void FUN1(int VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(sizeof(*VAR5));
    VAR6 *VAR7 = FUN2(sizeof(*VAR7));
    bool VAR8 = !FUN3(&VAR9);
    if (VAR8)
    {
        FUN4();
    }
    if (VAR3->VAR10 & VAR11)
    {
        FUN5(FUN6(VAR7), (struct VAR12 *)&VAR3->VAR13, VAR3->VAR14);
        FUN5(FUN7(VAR5), (struct VAR12 *)&VAR3->VAR15, VAR3->VAR16);
    }
    else
    {
        FUN8("", VAR17);
    }
    switch (VAR1)
    {
    case VAR18:
        FUN9(FUN7(VAR5), FUN6(VAR7), &VAR19);
        break;
    case VAR20:
        if (VAR21)
        {
            VAR5->VAR22 = true;
            VAR5->VAR21 = FUN10(VAR21);
        }
        FUN11(VAR7, VAR3);
        FUN12(VAR3);
        FUN13(VAR5, VAR7, &VAR19);
        break;
    case VAR23:
        FUN14(VAR3);
        FUN15(FUN7(VAR5), FUN6(VAR7), &VAR19);
        break;
    default:
        break;
    }
    if (VAR8)
    {
        FUN16();
    }
    FUN17(VAR5);
    FUN18(VAR7);
}
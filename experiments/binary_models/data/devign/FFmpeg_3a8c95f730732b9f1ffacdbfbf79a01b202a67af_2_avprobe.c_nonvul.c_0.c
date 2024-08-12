static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6[VAR3];
    VAR7 *VAR8;
    VAR9 *VAR10;
    char VAR11[128];
    AVRational VAR12;
    FUN2("");
    FUN3("", VAR5->VAR13);
    if ((VAR8 = VAR5->VAR14))
    {
        if ((VAR10 = VAR8->VAR14))
        {
            FUN4("", VAR10->VAR15);
            FUN4("", VAR10->VAR16);
        }
        else
        {
            FUN4("", "");
        }
        FUN4("", FUN5(VAR8->VAR17));
        FUN4("", FUN6(VAR11, sizeof(VAR11), "", &VAR8->VAR18));
        FUN7(VAR11, sizeof(VAR11), VAR8->VAR19);
        FUN4("", VAR11);
        FUN4("", FUN8(VAR11, sizeof(VAR11), VAR8->VAR19));
        switch (VAR8->VAR17)
        {
        case VAR20:
            FUN3("", VAR8->VAR21);
            FUN3("", VAR8->VAR22);
            FUN3("", VAR8->VAR23);
            if (VAR8->VAR24.VAR25)
            {
                FUN4("", FUN6(VAR11, sizeof(VAR11), "", &VAR8->VAR24));
                FUN9(&VAR12.VAR25, &VAR12.VAR26, VAR8->VAR21 * VAR8->VAR24.VAR25, VAR8->VAR22 * VAR8->VAR24.VAR26, 1024 * 1024);
                FUN4("", FUN6(VAR11, sizeof(VAR11), "", &VAR12));
            }
            FUN4("", VAR8->VAR27 != VAR28 ? VAR29[VAR8->VAR27].VAR15 : "");
            FUN3("", VAR8->VAR30);
            break;
        case VAR31:
            FUN4("", FUN10(VAR11, sizeof(VAR11), VAR8->VAR32, VAR33));
            FUN3("", VAR8->VAR34);
            FUN3("", FUN11(VAR8->VAR35));
            break;
        }
    }
    else
    {
        FUN4("", "");
    }
    if (VAR2->VAR36->VAR37 & VAR38)
        FUN3("", VAR5->VAR39);
    FUN4("", FUN6(VAR11, sizeof(VAR11), "", &VAR5->VAR40));
    FUN4("", FUN6(VAR11, sizeof(VAR11), "", &VAR5->VAR41));
    FUN4("", FUN6(VAR11, sizeof(VAR11), "", &VAR5->VAR18));
    FUN4("", FUN12(VAR11, sizeof(VAR11), VAR5->VAR42, &VAR5->VAR18));
    FUN4("", FUN12(VAR11, sizeof(VAR11), VAR5->VAR43, &VAR5->VAR18));
    if (VAR5->VAR44)
        FUN3("", VAR5->VAR44);
    FUN13(VAR5->VAR45, "");
    FUN14("");
}
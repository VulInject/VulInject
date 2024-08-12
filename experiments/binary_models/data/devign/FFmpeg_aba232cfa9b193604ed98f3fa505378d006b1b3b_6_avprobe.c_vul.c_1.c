static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6[VAR3];
    VAR7 *VAR8;
    VAR9 *VAR10;
    const char *VAR11;
    char VAR12[128];
    AVRational VAR13;
    FUN2("");
    FUN3("", VAR5->VAR14);
    if ((VAR8 = VAR5->VAR15))
    {
        if ((VAR10 = VAR8->VAR15))
        {
            FUN4("", VAR10->VAR16);
            FUN4("", VAR10->VAR17);
        }
        else
        {
            FUN4("", "");
        }
        FUN4("", FUN5(VAR8->VAR18));
        FUN4("", FUN6(VAR12, sizeof(VAR12), "", &VAR8->VAR19));
        FUN7(VAR12, sizeof(VAR12), VAR8->VAR20);
        FUN4("", VAR12);
        FUN4("", FUN8(VAR12, sizeof(VAR12), VAR8->VAR20));
        if (VAR10 && (VAR11 = FUN9(VAR10, VAR8->VAR11)))
            FUN4("", VAR11);
        switch (VAR8->VAR18)
        {
        case VAR21:
            FUN3("", VAR8->VAR22);
            FUN3("", VAR8->VAR23);
            FUN3("", VAR8->VAR24);
            if (VAR8->VAR25.VAR26)
            {
                FUN4("", FUN6(VAR12, sizeof(VAR12), "", &VAR8->VAR25));
                FUN10(&VAR13.VAR26, &VAR13.VAR27, VAR8->VAR22 * VAR8->VAR25.VAR26, VAR8->VAR23 * VAR8->VAR25.VAR27, 1024 * 1024);
                FUN4("", FUN6(VAR12, sizeof(VAR12), "", &VAR13));
            }
            FUN4("", VAR8->VAR28 != VAR29 ? VAR30[VAR8->VAR28].VAR16 : "");
            FUN3("", VAR8->VAR31);
            break;
        case VAR32:
            FUN4("", FUN11(VAR12, sizeof(VAR12), VAR8->VAR33, VAR34));
            FUN3("", VAR8->VAR35);
            FUN3("", FUN12(VAR8->VAR36));
            break;
        }
    }
    else
    {
        FUN4("", "");
    }
    if (VAR2->VAR37->VAR38 & VAR39)
        FUN3("", VAR5->VAR40);
    FUN4("", FUN6(VAR12, sizeof(VAR12), "", &VAR5->VAR41));
    FUN4("", FUN6(VAR12, sizeof(VAR12), "", &VAR5->VAR42));
    FUN4("", FUN6(VAR12, sizeof(VAR12), "", &VAR5->VAR19));
    FUN4("", FUN13(VAR12, sizeof(VAR12), VAR5->VAR43, &VAR5->VAR19));
    FUN4("", FUN13(VAR12, sizeof(VAR12), VAR5->VAR44, &VAR5->VAR19));
    if (VAR5->VAR45)
        FUN3("", VAR5->VAR45);
    FUN14(VAR5->VAR46, "");
    FUN15("");
}
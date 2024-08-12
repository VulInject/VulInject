static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10;
    int VAR11;
    FUN4(VAR6, "", VAR12, VAR8->VAR13);
    VAR8->VAR14 = FUN5(VAR8->VAR15.VAR16, 1);
    VAR8->VAR17 = FUN6(sizeof(VAR18) * VAR8->VAR14);
    VAR8->VAR17[0].VAR19 = FUN7(VAR6, 256, VAR20);
    VAR8->VAR21 = 1;
    VAR8->VAR17[0].VAR8 = VAR8;
    VAR8->VAR22 = VAR8->VAR23.VAR24;
    if (VAR8->VAR23.VAR25 && strcmp(VAR8->VAR23.VAR25, "") && strcmp(VAR8->VAR23.VAR25, ""))
    {
        FUN8(""
                     ""VAR26\""VAR27\"",
                     VAR8->VAR23.VAR25);
        FUN8(""VAR27\"");
    }
    if (VAR8->VAR23.VAR25 && !strcmp(VAR8->VAR23.VAR25, ""))
    {
        VAR8->VAR17[0].VAR28 = FUN7(VAR6, 256, VAR29);
        VAR8->VAR17[0].VAR30 = FUN9(VAR31, VAR32, &VAR8->VAR17[0]);
    }
    else
    {
        VAR8->VAR17[0].VAR28 = FUN7(VAR6, 256, VAR33);
        VAR8->VAR17[0].VAR34 = FUN10(VAR35, &VAR8->VAR17[0]);
    }
    VAR8->VAR36 = FUN7(VAR6, 64, VAR37);
    FUN11(&VAR8->VAR15.VAR38);
    memcpy(&VAR8->VAR39[0], &VAR8->VAR15.VAR38, sizeof(VAR8->VAR39));
    VAR8->VAR40 = VAR41;
    if (VAR8->VAR42)
    {
        VAR8->VAR43 = FUN12(&VAR44, &VAR8->VAR15, VAR8->VAR42, VAR8->VAR45, VAR8);
    }
    else
    {
        VAR8->VAR43 = FUN12(&VAR44, &VAR8->VAR15, FUN13(FUN14(VAR2)), VAR2->VAR46, VAR8);
    }
    FUN15(VAR8);
    if (FUN16(VAR8))
    {
        for (VAR11 = 0; VAR11 < VAR8->VAR14; VAR11++)
        {
            FUN17(FUN18(VAR8->VAR43, VAR11)->VAR47, true);
        }
        VAR8->VAR48 = sizeof(struct VAR49);
    }
    else
    {
        VAR8->VAR48 = 0;
    }
    FUN19(FUN20(VAR8->VAR43), VAR8->VAR15.VAR38.VAR50);
    VAR8->VAR17[0].VAR51 = 0;
    VAR8->VAR52 = VAR8->VAR23.VAR53;
    FUN21(VAR8, 0);
    VAR8->VAR54 = 1;
    VAR8->VAR55.VAR56 = FUN6(VAR57 * VAR58);
    VAR8->VAR59 = FUN6(VAR60 >> 3);
    VAR10 = FUN20(VAR8->VAR43);
    VAR10->VAR61 = 1;
    VAR8->VAR62 = VAR2;
    FUN22(VAR2, "", -1, VAR63, VAR64, VAR65, VAR8);
    FUN23(VAR8->VAR15.VAR66, VAR2, "");
}
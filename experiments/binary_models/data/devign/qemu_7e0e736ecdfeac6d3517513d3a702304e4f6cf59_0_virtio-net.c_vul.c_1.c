static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10;
    int VAR11;
    FUN4(VAR6, "", VAR12, VAR8->VAR13);
    VAR8->VAR14 = FUN5(VAR8->VAR15.VAR16.VAR17, 1);
    VAR8->VAR18 = FUN6(sizeof(VAR19) * VAR8->VAR14);
    VAR8->VAR18[0].VAR20 = FUN7(VAR6, 256, VAR21);
    VAR8->VAR22 = 1;
    VAR8->VAR18[0].VAR8 = VAR8;
    VAR8->VAR23 = VAR8->VAR24.VAR25;
    if (VAR8->VAR24.VAR26 && strcmp(VAR8->VAR24.VAR26, "") && strcmp(VAR8->VAR24.VAR26, ""))
    {
        FUN8(""
                     ""VAR27\""VAR28\"",
                     VAR8->VAR24.VAR26);
        FUN8(""VAR28\"");
        if (VAR8->VAR24.VAR26 && !strcmp(VAR8->VAR24.VAR26, ""))
        {
            VAR8->VAR18[0].VAR29 = FUN7(VAR6, 256, VAR30);
            VAR8->VAR18[0].VAR31 = FUN9(VAR32, VAR33, &VAR8->VAR18[0]);
        }
        else
        {
            VAR8->VAR18[0].VAR29 = FUN7(VAR6, 256, VAR34);
            VAR8->VAR18[0].VAR35 = FUN10(VAR36, &VAR8->VAR18[0]);
            VAR8->VAR37 = FUN7(VAR6, 64, VAR38);
            FUN11(&VAR8->VAR15.VAR39);
            memcpy(&VAR8->VAR40[0], &VAR8->VAR15.VAR39, sizeof(VAR8->VAR40));
            VAR8->VAR41 = VAR42;
            VAR8->VAR43 = FUN12(VAR32, VAR44, VAR8);
            if (VAR8->VAR45)
            {
                VAR8->VAR46 = FUN13(&VAR47, &VAR8->VAR15, VAR8->VAR45, VAR8->VAR48, VAR8);
            }
            else
            {
                VAR8->VAR46 = FUN13(&VAR47, &VAR8->VAR15, FUN14(FUN15(VAR2)), VAR2->VAR49, VAR8);
                FUN16(VAR8);
                if (FUN17(VAR8))
                {
                    for (VAR11 = 0; VAR11 < VAR8->VAR14; VAR11++)
                    {
                        FUN18(FUN19(VAR8->VAR46, VAR11)->VAR50, true);
                        VAR8->VAR51 = sizeof(struct VAR52);
                    }
                    else
                    {
                        VAR8->VAR51 = 0;
                        FUN20(FUN21(VAR8->VAR46), VAR8->VAR15.VAR39.VAR53);
                        VAR8->VAR18[0].VAR54 = 0;
                        VAR8->VAR55 = VAR8->VAR24.VAR56;
                        FUN22(VAR8, 0);
                        VAR8->VAR57 = 1;
                        VAR8->VAR58.VAR59 = FUN6(VAR60 * VAR61);
                        VAR8->VAR62 = FUN6(VAR63 >> 3);
                        VAR10 = FUN21(VAR8->VAR46);
                        VAR10->VAR64 = 1;
                        VAR8->VAR65 = VAR2;
                        FUN23(VAR2, "", -1, VAR66, VAR67, VAR68, VAR8);
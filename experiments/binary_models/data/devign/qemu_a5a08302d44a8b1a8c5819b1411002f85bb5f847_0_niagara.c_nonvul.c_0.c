static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, 1);
    VAR5 *VAR6 = FUN3(VAR7);
    VAR8 *VAR9 = FUN4();
    FUN5(VAR2->VAR10, "", VAR11);
    FUN6(&VAR4->VAR12, NULL, "", VAR13);
    FUN7(VAR9, VAR14, &VAR4->VAR12);
    FUN6(&VAR4->VAR15, NULL, "", VAR2->VAR16);
    FUN7(VAR9, VAR17, &VAR4->VAR15);
    FUN6(&VAR4->VAR18, NULL, "", VAR19);
    FUN7(VAR9, VAR20, &VAR4->VAR18);
    FUN6(&VAR4->VAR21, NULL, "", VAR22);
    FUN7(VAR9, VAR23, &VAR4->VAR21);
    FUN6(&VAR4->VAR24, NULL, "", VAR25);
    FUN7(VAR9, VAR26, &VAR4->VAR24);
    FUN6(&VAR4->VAR27, NULL, "", VAR28);
    FUN7(VAR9, VAR11, &VAR4->VAR27);
    FUN8("", VAR20);
    FUN8("", VAR23);
    FUN8("", VAR26);
    FUN8("", VAR11);
    FUN8("", VAR11 + VAR29);
    FUN8("", VAR11 + VAR30);
    if (VAR6)
    {
        VAR31 *VAR32 = FUN9(VAR6);
        int VAR33 = FUN10(VAR32);
        if (VAR33 > 0)
        {
            FUN6(&VAR4->VAR34, NULL, "", VAR33);
            FUN7(FUN4(), VAR35, &VAR4->VAR34);
            VAR6->VAR36 = 1;
            FUN11(FUN12(VAR32)->VAR37, VAR35, -1);
        }
        else
        {
            fprintf(VAR38, "", FUN12(VAR32)->VAR37);
            FUN13(1);
        }
    }
    if (VAR39[0])
    {
        FUN14(VAR9, VAR40, 0, NULL, 115200, VAR39[0], VAR41);
    }
    FUN15(VAR42, VAR43);
    FUN16(VAR44);
}
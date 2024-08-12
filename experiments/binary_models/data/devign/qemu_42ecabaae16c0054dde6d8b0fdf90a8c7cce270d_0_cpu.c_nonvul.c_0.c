static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR2);
    VAR9 *VAR10 = &VAR6->VAR10;
    FeatureWord VAR11;
    VAR4->VAR12 = VAR10;
    FUN5(VAR2, "", "", VAR13, VAR14, NULL, NULL, NULL);
    FUN5(VAR2, "", "", VAR15, VAR16, NULL, NULL, NULL);
    FUN5(VAR2, "", "", VAR17, VAR18, NULL, NULL, NULL);
    FUN6(VAR2, "", VAR19, VAR20, NULL);
    FUN6(VAR2, "", VAR21, VAR22, NULL);
    FUN5(VAR2, "", "", VAR23, VAR24, NULL, NULL, NULL);
    FUN5(VAR2, "", "", VAR25, VAR26, NULL, NULL, NULL);
    FUN5(VAR2, "", "", VAR27, NULL, NULL, (void *)VAR10->VAR28, NULL);
    FUN5(VAR2, "", "", VAR27, NULL, NULL, (void *)VAR6->VAR29, NULL);
    VAR6->VAR30 = VAR31;
    VAR6->VAR32 = -1;
    for (VAR11 = 0; VAR11 < VAR33; VAR11++)
    {
        int VAR34;
        for (VAR34 = 0; VAR34 < 32; VAR34++)
        {
            FUN7(VAR6, VAR11, VAR34);
        }
    }
    FUN8(VAR6, VAR8->VAR35, &VAR36);
}
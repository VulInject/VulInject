void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    if (VAR2->VAR6)
    {
        FUN2(VAR2->VAR6);
    }
    if (VAR2->VAR7)
    {
        FUN3(VAR2);
    }
    FUN4(VAR2);
    FUN5(VAR2);
    FUN4(VAR2);
    FUN6(&VAR2->VAR8, VAR2);
    if (VAR2->VAR9)
    {
        FUN7(VAR2->VAR9, false);
    }
    if (VAR2->VAR10)
    {
        VAR11 *VAR12, *VAR13;
        VAR2->VAR10->FUN1(VAR2);
        VAR2->VAR10 = NULL;
        FUN8(VAR2, NULL);
        if (VAR2->VAR14 != NULL)
        {
            FUN9(VAR2, VAR2->VAR14);
            VAR2->VAR14 = NULL;
        }
        FUN10(VAR12, &VAR2->VAR15, VAR13, VAR13)
        {
            if (VAR12->VAR2->VAR16 == VAR2)
            {
                VAR12->VAR2->VAR16 = NULL;
            }
            FUN11(VAR12);
        }
        FUN12(VAR2->VAR17);
        VAR2->VAR17 = NULL;
        VAR2->VAR18 = 0;
        VAR2->VAR19[0] = '';
        VAR2->VAR20[0] = '';
        VAR2->VAR21 = 0;
        VAR2->VAR22 = 0;
        VAR2->VAR23 = 0;
        VAR2->VAR24 = 0;
        VAR2->VAR25 = false;
        FUN13(VAR2->VAR26);
        VAR2->VAR26 = NULL;
        FUN13(VAR2->VAR27);
        VAR2->VAR27 = NULL;
    }
    FUN10(VAR4, &VAR2->VAR28, VAR29, VAR5) { FUN12(VAR4); }
    FUN14(&VAR2->VAR28);
}
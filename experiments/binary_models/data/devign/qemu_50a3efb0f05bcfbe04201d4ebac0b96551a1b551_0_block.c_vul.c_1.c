static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    assert(!VAR2->VAR6);
    assert(!VAR2->VAR7);
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2);
    if (VAR2->VAR8)
    {
        VAR9 *VAR10, *VAR11;
        VAR2->VAR8->FUN1(VAR2);
        VAR2->VAR8 = NULL;
        FUN5(VAR2, NULL, &VAR12);
        if (VAR2->VAR13 != NULL)
        {
            FUN6(VAR2, VAR2->VAR13);
            VAR2->VAR13 = NULL;
        }
        FUN7(VAR10, &VAR2->VAR14, VAR11, VAR11)
        {
            if (VAR10->VAR2->VAR15 == VAR2)
            {
                VAR10->VAR2->VAR15 = NULL;
            }
            FUN8(VAR10);
        }
        FUN9(VAR2->VAR16);
        VAR2->VAR16 = NULL;
        FUN10(&VAR2->VAR17, 0);
        VAR2->VAR18[0] = '';
        VAR2->VAR19[0] = '';
        VAR2->VAR20 = 0;
        VAR2->VAR21 = false;
        VAR2->VAR22 = false;
        FUN11(VAR2->VAR23);
        FUN11(VAR2->VAR24);
        VAR2->VAR23 = NULL;
        VAR2->VAR24 = NULL;
        FUN11(VAR2->VAR25);
        VAR2->VAR25 = NULL;
    }
    FUN12(VAR2);
    assert(FUN13(&VAR2->VAR26));
    FUN7(VAR4, &VAR2->VAR27, VAR28, VAR5) { FUN9(VAR4); }
    FUN14(&VAR2->VAR27);
    FUN15(VAR2);
}
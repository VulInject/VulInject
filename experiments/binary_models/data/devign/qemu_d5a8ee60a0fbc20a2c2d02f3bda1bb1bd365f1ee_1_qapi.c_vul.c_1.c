static void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 **VAR6)
{
    VAR3 *VAR7 = FUN2(sizeof(*VAR7));
    VAR8 *VAR9 = FUN3(VAR2);
    VAR8 *VAR10;
    VAR11 **VAR12;
    VAR5 *VAR13 = NULL;
    VAR7->VAR14 = FUN4(FUN5(VAR2));
    VAR7->VAR15 = FUN4("");
    VAR7->VAR16 = FUN6(VAR2);
    VAR7->VAR17 = FUN7(VAR2);
    if (FUN7(VAR2))
    {
        VAR7->VAR18 = true;
        VAR7->VAR19 = FUN8(VAR2);
    }
    if (FUN9(VAR9))
    {
        VAR7->VAR20 = true;
        VAR7->VAR21 = VAR9->VAR22;
    }
    if (!FUN10(&VAR9->VAR23))
    {
        VAR7->VAR24 = true;
        VAR7->VAR23 = FUN11(VAR9);
    }
    if (VAR9->VAR25)
    {
        VAR7->VAR26 = true;
        VAR7->VAR27 = FUN12(VAR9);
        VAR10 = VAR9;
        VAR12 = &VAR7->VAR27->VAR28;
        while (1)
        {
            FUN13(VAR10, VAR12, &VAR13);
            if (VAR13)
            {
                FUN14(VAR6, VAR13);
                goto VAR29;
            }
            if (VAR10->VAR25 && VAR10->VAR30)
            {
                VAR10 = VAR10->VAR30;
                (*VAR12)->VAR31 = true;
                VAR12 = &((*VAR12)->VAR32);
            }
            else
            {
                break;
            }
        }
    }
    *VAR4 = VAR7;
    return;
VAR29:
    FUN15(VAR7);
}
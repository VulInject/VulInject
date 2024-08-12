static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = &VAR4->VAR8;
    VAR9 *VAR10 = FUN2(VAR4);
    int VAR11;
    FUN3(VAR8, VAR12);
    FUN4(VAR4);
    if (VAR4->VAR13)
    {
        VAR5 *VAR14 = NULL;
        FUN5(VAR4, VAR4->VAR13, &VAR14);
        if (VAR14)
        {
            FUN6(VAR6, VAR14);
            return;
        }
    }
    VAR11 = FUN7(VAR10->VAR15);
    if (VAR11 < VAR16)
    {
        VAR10->VAR17 = VAR11;
    }
    FUN8(VAR2->VAR18, VAR4);
    FUN9(VAR19, VAR4);
    FUN10(VAR4);
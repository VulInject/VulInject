static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR5 *VAR11 = NULL;
    VAR12 *VAR13 = FUN2(VAR2);
    if (VAR13->VAR14)
    {
        VAR10 = FUN3(VAR13->VAR14);
        VAR10->FUN4(FUN5(VAR13->VAR14), VAR4, &VAR11);
        if (VAR11)
        {
            goto VAR15;
        }
    }
    VAR13->VAR16++;
    if (VAR4->VAR17)
    {
        FUN6(VAR13->VAR18, VAR13->VAR16);
        FUN7(VAR13->VAR19, VAR20, VAR13->VAR16);
    }
    VAR8 = FUN8(VAR13, FUN9(VAR4), NULL);
    VAR8->VAR21 = FUN9(VAR4);
VAR15:
    FUN10(VAR6, VAR11);
}
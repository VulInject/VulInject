FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2();
    VAR5->VAR6 = sizeof(VAR2->VAR7);
    VAR5->VAR8 = sizeof(VAR2->VAR9);
VAR10:
    FUN3(VAR2);
    VAR5->VAR11 = FUN4(VAR2->VAR11, (struct VAR12 *)&VAR5->VAR7, &VAR5->VAR6);
    if (VAR5->VAR11 < 0)
    {
        FUN5(VAR2);
        if (VAR13 == VAR14)
        {
            goto VAR10;
        }
        goto VAR15;
    }
    if (FUN6(VAR5->VAR11, (struct VAR12 *)&VAR5->VAR9, &VAR5->VAR8) < 0)
    {
        FUN7(VAR4, VAR13, "");
        goto VAR15;
    }
    if (VAR5->VAR9.VAR16 == VAR17)
    {
        VAR18 *VAR19 = FUN8(VAR5);
        FUN9(VAR19, VAR20);
    }
    FUN10(VAR2, VAR5, VAR5->VAR11);
    return VAR5;
VAR15:
    FUN11(FUN12(VAR5));
    return NULL;
}
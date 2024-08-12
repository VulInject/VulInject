static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7 = 0;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    int VAR12 = 0;
    assert(VAR2 != NULL);
    assert(VAR2->VAR13 != NULL);
    VAR2->VAR14 = FUN2(sizeof(VAR8));
    VAR9 = VAR2->VAR14;
    FUN3(VAR2->VAR15, &VAR12);
    VAR11 = FUN2(sizeof(VAR10));
    VAR9->VAR16 = FUN4(VAR11, VAR2->VAR13->VAR17, VAR6);
    if (VAR9->VAR16 == NULL)
    {
        VAR7 = -VAR18;
        goto VAR19;
    }
    VAR9->VAR20 = FUN5(VAR9->VAR16, VAR11->VAR21, VAR12);
    if (VAR9->VAR20 == NULL)
    {
        VAR7 = -VAR18;
        goto VAR19;
    }
VAR19:
    FUN6(VAR11);
    return VAR7;
}
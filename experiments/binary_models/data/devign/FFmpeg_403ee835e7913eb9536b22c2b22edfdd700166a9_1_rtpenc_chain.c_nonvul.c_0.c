VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR1 *VAR8;
    int VAR9;
    VAR10 *VAR11 = FUN2("", NULL, NULL);
    if (!VAR11)
        return NULL;
    VAR8 = FUN3();
    if (!VAR8)
        return NULL;
    VAR8->VAR12 = VAR11;
    if (!FUN4(VAR8, 0))
    {
        FUN5(VAR8);
        return NULL;
    }
    VAR8->VAR13 = VAR2->VAR13;
    VAR8->VAR14[0]->VAR15 = VAR4->VAR15;
    VAR8->VAR16 = VAR2->VAR16;
    FUN6(VAR8->VAR14[0]->VAR17, VAR4->VAR17);
    if (VAR6)
    {
        FUN7(&VAR8->VAR18, VAR6);
    }
    else
        FUN8(&VAR8->VAR18, VAR7);
    VAR9 = FUN9(VAR8);
    if (VAR9)
    {
        if (VAR6)
        {
            FUN10(VAR8->VAR18);
        }
        else
        {
            VAR19 *VAR20;
            FUN11(VAR8->VAR18, &VAR20);
            FUN5(VAR20);
        }
        FUN12(VAR8);
        return NULL;
    }
    return VAR8;
}
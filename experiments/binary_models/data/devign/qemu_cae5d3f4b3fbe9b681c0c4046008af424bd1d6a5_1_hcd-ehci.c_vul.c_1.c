static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(&VAR2->VAR5);
    int VAR6 = 0;
    assert(VAR4 != NULL);
    assert(VAR4->VAR7 == VAR2->VAR7);
    if (FUN3(VAR2) != 0)
    {
        return -1;
    }
    if (!VAR2->VAR8)
    {
        int VAR9 = FUN4(VAR2->VAR10.VAR11, VAR12);
        if (!VAR9)
        {
            FUN5(VAR2->VAR13, VAR2->VAR8, VAR14);
            VAR6 = 1;
            goto VAR15;
        }
    }
    if (VAR2->VAR8)
    {
        FUN6(VAR2->VAR13, VAR16);
    }
    VAR4->VAR17 = FUN7(VAR4, "");
    if (VAR4->VAR17 == VAR18)
    {
        VAR6 = -1;
        goto VAR15;
    }
    if (VAR4->VAR17 == VAR19)
    {
        FUN8(VAR2);
        FUN9(VAR4->VAR20, VAR4, "");
        VAR4->VAR8 = VAR21;
        FUN5(VAR2->VAR13, VAR2->VAR8, VAR14);
        VAR6 = (FUN10(VAR4) == VAR18) ? -1 : 1;
        goto VAR15;
    }
    FUN5(VAR2->VAR13, VAR2->VAR8, VAR22);
    VAR6 = 1;
VAR15:
    return VAR6;
}
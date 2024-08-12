int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR2->VAR7 = true;
    VAR6 = FUN2(VAR2, VAR2->VAR8);
    if (VAR6 < 0)
    {
        goto VAR9;
    }
    VAR6 = VAR2->VAR10->FUN3(VAR2, VAR11, VAR2->VAR12);
    if (VAR6 < 0)
    {
        VAR6 = -VAR13;
        goto VAR14;
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR15; ++VAR5)
    {
        VAR6 = FUN4(VAR2, VAR4, VAR2->VAR16 + VAR5, VAR2->VAR17 + VAR5);
        if (VAR6 < 0)
        {
            goto VAR18;
        }
    }
    if (VAR2->VAR8)
    {
        VAR2->VAR19 = FUN5(VAR2);
        VAR2->VAR20 = VAR2->VAR19 ? FUN6(VAR2->VAR19 * sizeof *VAR2->VAR20) : NULL;
        VAR6 = VAR2->VAR10->FUN3(VAR2, VAR21, VAR2->VAR20);
        if (VAR6 < 0)
        {
            VAR6 = -VAR13;
            goto VAR22;
        }
    }
    return 0;
VAR22:
VAR18:
    while (--VAR5 >= 0)
    {
        FUN7(VAR2, VAR4, VAR2->VAR16 + VAR5, VAR2->VAR17 + VAR5);
    }
    VAR5 = VAR2->VAR15;
VAR14:
VAR9:
    VAR2->VAR7 = false;
    return VAR6;
}
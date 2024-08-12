int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3(FUN4(VAR4)));
    VAR7 *VAR8 = FUN5(VAR6);
    VAR9 *VAR10 = FUN6(VAR8);
    int VAR11, VAR12;
    if (!VAR10->VAR13)
    {
        fprintf(VAR14, "");
        VAR12 = -VAR15;
        goto VAR16;
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR17; ++VAR11)
    {
        VAR12 = VAR10->FUN7(VAR6->VAR18, VAR2->VAR19 + VAR11, true);
        if (VAR12 < 0)
        {
            fprintf(VAR14, "", VAR11, -VAR12);
            goto VAR20;
        }
    }
    return 0;
VAR20:
    while (--VAR11 >= 0)
    {
        VAR12 = VAR10->FUN7(VAR6->VAR18, VAR2->VAR19 + VAR11, false);
        if (VAR12 < 0)
        {
            fprintf(VAR14, "", VAR11, -VAR12);
            FUN8(VAR14);
        }
        assert(VAR12 >= 0);
    }
VAR16:
    return VAR12;
}
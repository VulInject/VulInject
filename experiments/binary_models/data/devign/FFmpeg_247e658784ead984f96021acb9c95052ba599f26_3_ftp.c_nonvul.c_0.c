static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    char VAR4[VAR5], VAR6[20];
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = VAR2->VAR11;
    if (!VAR10->VAR12)
    {
        if ((VAR3 = FUN2(VAR10)) < 0)
        {
            FUN3(VAR2, "");
            return VAR3;
        }
        FUN4(VAR4, sizeof(VAR4), "", NULL, VAR10->VAR13, VAR10->VAR14, NULL);
        if (VAR10->VAR15 != -1)
        {
            snprintf(VAR6, sizeof(VAR6), "", VAR10->VAR15);
            FUN5(&VAR8, "", VAR6, 0);
        }
        VAR3 = FUN6(&VAR10->VAR12, VAR4, VAR2->VAR16, &VAR2->VAR17, &VAR8);
        FUN7(&VAR8);
        if (VAR3 < 0)
            return VAR3;
        if (VAR10->VAR18)
            if ((VAR3 = FUN8(VAR10, VAR10->VAR18)) < 0)
                return VAR3;
    }
    VAR10->VAR19 = VAR20;
    return 0;
}
static int FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4], VAR5[20];
    int VAR6;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = VAR2->VAR11;
    const int VAR12[] = {220, 0};
    VAR10->VAR13 = 0;
    if (!VAR10->VAR14)
    {
        FUN2(VAR3, sizeof(VAR3), "", NULL, VAR10->VAR15, VAR10->VAR16, NULL);
        if (VAR10->VAR17 != -1)
        {
            snprintf(VAR5, sizeof(VAR5), "", VAR10->VAR17);
            FUN3(&VAR8, "", VAR5, 0);
        }
        VAR6 = FUN4(&VAR10->VAR14, VAR3, VAR18, &VAR10->VAR19, &VAR8);
        FUN5(&VAR8);
        if (VAR6 < 0)
        {
            FUN6(VAR2, VAR20, "");
            return VAR6;
        }
        if (FUN7(VAR10, NULL, VAR12) != 220)
        {
            FUN6(VAR2, VAR20, "");
            VAR6 = FUN8(VAR21);
            return VAR6;
        }
        if ((VAR6 = FUN9(VAR10)) < 0)
        {
            FUN6(VAR2, VAR20, "");
            return VAR6;
        }
        if ((VAR6 = FUN10(VAR10)) < 0)
        {
            FUN11(VAR2, "");
            return VAR6;
        }
    }
    return 0;
}
static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    int VAR9;
    VAR9 = FUN2(VAR5->VAR10, VAR11, &VAR8, sizeof(VAR8));
    if (VAR9 < 0)
    {
        FUN3(VAR2, VAR12, "");
        return VAR13;
    }
    if (!VAR3)
    {
        void *VAR14 = FUN4(VAR5->VAR15, &VAR5->VAR16, VAR5->VAR17 + VAR9);
        if (!VAR14)
            VAR5->VAR15 = VAR14;
        memcpy(VAR5->VAR15 + VAR5->VAR17, VAR8, VAR9);
        VAR5->VAR17 += VAR9;
    }
    else
    {
        int VAR18 = FUN5(VAR5->VAR17);
        memcpy(VAR5->VAR15, VAR8, VAR9);
        VAR2->VAR19 = FUN6(VAR18);
        FUN7(VAR2->VAR19, VAR18, VAR5->VAR15, VAR5->VAR17);
    }
    return 0;
    FUN3(VAR2, VAR12, "");
    return FUN8(VAR20);
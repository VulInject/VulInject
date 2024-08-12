static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9;
    FUN2(&VAR2->VAR7, VAR4, VAR5);
    VAR2->VAR10[VAR11]->VAR12 = !FUN3(VAR7);
    FUN3(VAR7);
    FUN4(VAR2, FUN5(VAR7, 6));
    if (VAR2->VAR10[VAR11]->VAR12)
    {
        FUN5(VAR7, 8);
        if (FUN5(VAR7, 5) > 5)
            return VAR13;
        FUN5(VAR7, 2);
        if (FUN3(VAR7))
        {
            FUN6(VAR2->VAR14, VAR15, "");
            return VAR16;
        }
        VAR8 = FUN5(VAR7, 8);
        VAR9 = FUN5(VAR7, 8);
        if (!VAR8 || !VAR9)
        {
            FUN6(VAR2->VAR14, VAR15, "", VAR9 << 4, VAR8 << 4);
            return VAR13;
        }
        FUN5(VAR7, 8);
        FUN5(VAR7, 8);
        FUN5(VAR7, 2);
        if (!VAR2->VAR17 || 16 * VAR9 != VAR2->VAR14->VAR18 || 16 * VAR8 != VAR2->VAR14->VAR19)
        {
            int VAR20 = FUN7(VAR2->VAR14, 16 * VAR9, 16 * VAR8);
            if (VAR20 < 0)
                return VAR20;
            return VAR21;
        }
    }
    else if (!VAR2->VAR17)
        return VAR13;
    return 0;
}
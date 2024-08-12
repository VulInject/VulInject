static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    int VAR13 = VAR6 ? VAR6->VAR14 : 0;
    void *VAR15 = VAR6 ? VAR6->VAR16[0] : NULL;
    if ((VAR12 = FUN2(VAR2, VAR4, (7 + 768) * VAR2->VAR17)) < 0)
        return VAR12;
    VAR11 = FUN3(VAR9->VAR18, VAR15, VAR13 * VAR2->VAR17, VAR4->VAR16, VAR4->VAR19);
    if (VAR11 < 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR11;
    }
    if (VAR6)
    {
        if ((VAR12 = FUN5(&VAR9->VAR21, VAR6)) < 0)
            return VAR12;
    }
    if (!VAR11)
        return 0;
    FUN6(&VAR9->VAR21, VAR2->VAR22, &VAR4->VAR23, &VAR4->VAR24);
    VAR4->VAR19 = VAR11;
    *VAR7 = 1;
    return 0;
}
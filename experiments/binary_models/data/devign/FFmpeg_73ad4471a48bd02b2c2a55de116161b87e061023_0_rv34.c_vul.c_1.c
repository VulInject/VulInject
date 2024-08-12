int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    VAR8 *const VAR9 = &VAR5->VAR9, *const VAR10 = &VAR7->VAR9;
    int VAR11;
    if (VAR2 == VAR3 || !VAR10->VAR12)
        return 0;
    if (VAR9->VAR13 != VAR10->VAR13 || VAR9->VAR14 != VAR10->VAR14)
    {
        FUN2(VAR9);
        VAR9->VAR13 = VAR10->VAR13;
        VAR9->VAR14 = VAR10->VAR14;
        if ((VAR11 = FUN3(VAR9)) < 0)
            return VAR11;
        if ((VAR11 = FUN4(VAR5)) < 0)
            return VAR11;
    }
    if ((VAR11 = FUN5(VAR2, VAR3)))
        return VAR11;
    VAR5->VAR15 = VAR7->VAR15;
    VAR5->VAR16 = VAR7->VAR16;
    VAR5->VAR17 = VAR7->VAR17;
    memset(&VAR5->VAR18, 0, sizeof(VAR5->VAR18));
    VAR9->VAR19 = NULL;
    return 0;
}
static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    char VAR7;
    VAR8 *VAR9 = VAR3;
    const char *VAR10 = VAR6->VAR3;
    AVBPrint VAR11;
    if (sscanf(VAR10, "", &VAR7) == 1)
    {
        FUN2(VAR2, VAR12, ""
                                    ""
                                    "");
        return VAR13;
    }
    FUN3(&VAR11, 0, VAR14);
    if (VAR10 && VAR6->VAR15 > 0 && !FUN4(&VAR11, VAR10))
        FUN5(VAR9, VAR11.VAR16, VAR6->VAR17, VAR6->VAR18, 0);
    *VAR4 = VAR9->VAR19 > 0;
    FUN6(&VAR11, NULL);
    return VAR6->VAR15;
}
void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR6->VAR7;
    const VAR8 *VAR9 = FUN2(VAR2);
    int VAR10 = VAR9->VAR11.VAR12;
    char VAR13[64];
    char *VAR14;
    int VAR15;
    if (VAR2->VAR13)
    {
        FUN3(VAR2, VAR10, VAR2->VAR13);
        return;
    }
    assert(VAR10 != 0 && VAR9->VAR16[VAR10] != NULL);
    VAR15 = snprintf(VAR13, sizeof(VAR13), "", VAR9->VAR16[VAR10]);
    VAR14 = FUN4(VAR4);
    if (VAR14)
    {
        VAR15 += snprintf(VAR13 + VAR15, sizeof(VAR13) - VAR15, "", VAR14);
    }
    VAR15 += snprintf(VAR13 + VAR15, sizeof(VAR13) - VAR15, "", VAR2->VAR17->VAR14);
    FUN3(VAR2, VAR10, VAR13);
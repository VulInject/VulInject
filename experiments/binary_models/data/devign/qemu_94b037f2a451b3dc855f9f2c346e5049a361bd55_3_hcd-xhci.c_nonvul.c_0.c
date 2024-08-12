static int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, TRBCCode VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    VAR13 *VAR14 = NULL;
    assert(VAR3 >= 1 && VAR3 <= VAR2->VAR15);
    assert(VAR4 >= 1 && VAR4 <= 31);
    FUN2("", VAR3, VAR4);
    VAR7 = &VAR2->VAR16[VAR3 - 1];
    if (!VAR7->VAR17[VAR4 - 1])
    {
        return 0;
    }
    VAR9 = VAR7->VAR17[VAR4 - 1];
    for (;;)
    {
        VAR11 = FUN3(&VAR9->VAR18);
        if (VAR11 == NULL)
        {
            break;
        }
        VAR12 += FUN4(VAR11, VAR5);
        if (VAR12)
        {
            VAR5 = 0;
        }
        FUN5(VAR11);
    }
    VAR14 = FUN6(VAR2, VAR3, VAR4);
    if (VAR14)
    {
        FUN7(VAR14->VAR19, VAR14);
    }
    return VAR12;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7 = -1;
    uint32_t VAR8;
    int VAR9;
    if (VAR4->VAR10->VAR11 == VAR12 && !VAR4->VAR13)
    {
        VAR6 = FUN2(sizeof(*VAR6));
        if (!VAR6)
            return FUN3(VAR14);
        VAR6[0].VAR15 = VAR4->VAR16;
        VAR6[0].VAR17 = 1;
        VAR7 = 1;
    }
    else
    {
        VAR6 = VAR4->VAR18 ? FUN4(VAR4->VAR18, sizeof(*VAR6)) : NULL;
        if (VAR4->VAR18 && !VAR6)
            return FUN3(VAR14);
        for (VAR9 = 0; VAR9 < VAR4->VAR18; VAR9++)
        {
            int VAR17 = FUN5(VAR4, VAR9);
            if (VAR9 && VAR17 == VAR6[VAR7].VAR17)
            {
                VAR6[VAR7].VAR15++;
            }
            else
            {
                VAR7++;
                VAR6[VAR7].VAR17 = VAR17;
                VAR6[VAR7].VAR15 = 1;
            }
        }
        VAR7++;
    }
    VAR8 = 16 + (VAR7 * 8);
    FUN6(VAR2, VAR8);
    FUN7(VAR2, "");
    FUN6(VAR2, 0);
    FUN6(VAR2, VAR7);
    for (VAR9 = 0; VAR9 < VAR7; VAR9++)
    {
        FUN6(VAR2, VAR6[VAR9].VAR15);
        FUN6(VAR2, VAR6[VAR9].VAR17);
    }
    FUN8(VAR6);
    return VAR8;
}
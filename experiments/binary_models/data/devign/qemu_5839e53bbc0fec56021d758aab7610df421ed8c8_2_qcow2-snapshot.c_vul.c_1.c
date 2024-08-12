int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8, *VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (!VAR6->VAR13)
    {
        *VAR4 = NULL;
        return VAR6->VAR13;
    }
    VAR8 = FUN2(VAR6->VAR13 * sizeof(VAR3));
    for (VAR12 = 0; VAR12 < VAR6->VAR13; VAR12++)
    {
        VAR9 = VAR8 + VAR12;
        VAR11 = VAR6->VAR14 + VAR12;
        FUN3(VAR9->VAR15, sizeof(VAR9->VAR15), VAR11->VAR15);
        FUN3(VAR9->VAR16, sizeof(VAR9->VAR16), VAR11->VAR16);
        VAR9->VAR17 = VAR11->VAR17;
        VAR9->VAR18 = VAR11->VAR18;
        VAR9->VAR19 = VAR11->VAR19;
        VAR9->VAR20 = VAR11->VAR20;
    }
    *VAR4 = VAR8;
    return VAR6->VAR13;
}
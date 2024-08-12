static VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8, *VAR9 = VAR4->VAR10;
    int64_t VAR11, VAR12, VAR13 = VAR14;
    VAR1 *VAR15, *VAR16 = NULL;
    int VAR17;
    VAR12 = FUN2(VAR9->VAR18, VAR4->VAR19, VAR20);
    for (VAR17 = 0; VAR17 < VAR3->VAR21; VAR17++)
    {
        VAR15 = VAR3->VAR22[VAR17];
        VAR8 = VAR15->VAR10;
        if (VAR15->VAR23 < VAR24 && VAR8->VAR25.VAR26)
        {
            VAR11 = FUN2(VAR8->VAR25.VAR27, VAR15->VAR19, VAR20);
            if (VAR11 <= VAR12 && VAR11 < VAR13)
            {
                VAR13 = VAR11;
                VAR16 = VAR15;
            }
        }
    }
    if (VAR16)
    {
        VAR8 = VAR16->VAR10;
        *VAR6 = VAR8->VAR25;
        VAR6->VAR28 = VAR16->VAR29;
        if (FUN3(VAR8->VAR30, &VAR8->VAR25) < 0)
            VAR8->VAR25.VAR26 = NULL;
    }
    return VAR16;
}
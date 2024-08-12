static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7, VAR8 = 0;
    if (!VAR3)
        return;
    if (VAR5->VAR3 & VAR9)
    {
        VAR8 += VAR5->VAR10;
        if (VAR5->VAR3 & VAR5->VAR11)
            VAR8 += VAR5->VAR12;
        for (VAR7 = 0; VAR7 < VAR2->VAR13.VAR14; VAR7++)
            VAR8 += VAR5->VAR15[VAR7];
        if (VAR2->VAR13.VAR3 & VAR16)
            VAR8 += VAR5->VAR17;
        if (!VAR8)
        {
            memset(VAR5->VAR18, 0, sizeof(VAR5->VAR18));
            for (VAR7 = 0; VAR7 < VAR2->VAR13.VAR14; VAR7++)
                memset(VAR5->VAR19[VAR7], 0, sizeof(VAR5->VAR19[VAR7]));
            memset(VAR5->VAR20, 0, sizeof(VAR5->VAR20));
            return;
        }
    }
    if (VAR5->VAR11 && (VAR3 & 64))
        FUN2(VAR2, 5);
    for (VAR7 = 0; VAR7 < VAR2->VAR13.VAR14; VAR7++)
        if (VAR3 & (1 << VAR7))
            FUN2(VAR2, VAR7);
    if ((VAR2->VAR13.VAR3 & VAR16) && (VAR3 & 32))
        FUN2(VAR2, 6);
}
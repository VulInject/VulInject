static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    AVSubtitle VAR6;
    int VAR7, VAR8 = FUN2(VAR2->VAR9, &VAR6, VAR5, VAR4);
    FUN3(VAR5, VAR8);
    if (VAR8 < 0 || !*VAR5)
    {
        if (!VAR4->VAR10)
            FUN4(VAR2);
        return VAR8;
    }
    if (VAR2->VAR11)
    {
        int VAR12 = 1;
        if (VAR2->VAR13.VAR5)
        {
            VAR12 = FUN5(VAR6.VAR14 - VAR2->VAR13.VAR6.VAR14, 1000, VAR15);
            if (VAR12 < VAR2->VAR13.VAR6.VAR16)
            {
                FUN6(VAR2->VAR9, VAR17, "", VAR2->VAR13.VAR6.VAR16, VAR12, VAR12 <= 0 ? "" : "");
                VAR2->VAR13.VAR6.VAR16 = VAR12;
            }
        }
        FUN7(int, *VAR5, VAR2->VAR13.VAR5);
        FUN7(int, VAR8, VAR2->VAR13.VAR8);
        FUN7(VAR18, VAR6, VAR2->VAR13.VAR6);
        if (VAR12 <= 0)
            goto VAR19;
    }
    if (!*VAR5)
        return VAR8;
    FUN8(VAR2, &VAR6);
    if (!VAR6.VAR20)
        goto VAR19;
    VAR2->VAR21++;
    for (VAR7 = 0; VAR7 < VAR22; VAR7++)
    {
        VAR23 *VAR24 = VAR25[VAR7];
        if (!FUN9(VAR2, VAR24) || !VAR24->VAR26 || VAR24->VAR27->VAR28 != VAR29)
            continue;
        FUN10(VAR30[VAR24->VAR31]->VAR32, VAR24, VAR2, &VAR6);
    }
VAR19:
    FUN11(&VAR6);
    return VAR8;
}
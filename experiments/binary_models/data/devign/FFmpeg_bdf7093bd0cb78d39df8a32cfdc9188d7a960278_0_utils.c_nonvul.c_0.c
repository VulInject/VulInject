static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR6;
    const VAR8 *VAR9 = FUN2(VAR4->VAR10);
    int VAR11;
    if (VAR4->VAR12[0] || VAR4->VAR12[1] || VAR4->VAR12[2] || VAR4->VAR12[3])
    {
        FUN3(VAR2, VAR13, "");
        return -1;
    }
    if (!VAR9)
    {
        FUN3(VAR2, VAR13, "", FUN4(VAR4->VAR10));
        return FUN5(VAR14);
    }
    memset(VAR4->VAR12, 0, sizeof(VAR4->VAR12));
    VAR4->VAR15 = VAR4->VAR12;
    for (VAR11 = 0; VAR11 < 4 && VAR6->VAR16[VAR11]; VAR11++)
    {
        VAR4->VAR17[VAR11] = VAR6->VAR17[VAR11];
        VAR4->VAR18[VAR11] = FUN6(VAR6->VAR16[VAR11]);
        if (!VAR4->VAR18[VAR11])
            goto VAR19;
        VAR4->VAR12[VAR11] = VAR4->VAR18[VAR11]->VAR12;
    }
    for (; VAR11 < VAR20; VAR11++)
    {
        VAR4->VAR12[VAR11] = NULL;
        VAR4->VAR17[VAR11] = 0;
    }
    if (VAR9->VAR21 & VAR22 || VAR9->VAR21 & VAR23)
        FUN7((VAR24 *)VAR4->VAR12[1], VAR4->VAR10);
    if (VAR2->VAR25 & VAR26)
        FUN3(VAR2, VAR27, "", VAR4);
    return 0;
VAR19:
    FUN8(VAR4);
    return FUN5(VAR28);
}
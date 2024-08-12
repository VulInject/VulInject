static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR3 *VAR7;
    VAR5 **VAR8;
    int VAR9;
    int VAR10;
    if (!VAR6[VAR11] || !VAR6[VAR12])
    {
        return -VAR13;
    }
    VAR4->VAR14.VAR15 = FUN2(VAR6[VAR11]);
    VAR8 = FUN3((VAR4->VAR14.VAR15 + 1) * sizeof(VAR5 *));
    if (!VAR8)
    {
        return -VAR16;
    }
    FUN4(VAR4->VAR14.VAR17);
    VAR4->VAR14.VAR17 = FUN3(VAR4->VAR14.VAR15 * sizeof(VAR18));
    if (!VAR4->VAR14.VAR17)
    {
        VAR9 = -VAR16;
        goto VAR19;
    }
    FUN5(VAR8, VAR4->VAR14.VAR15, VAR6[VAR12]);
    for (VAR10 = 0; VAR10 < VAR4->VAR14.VAR15; VAR10++)
    {
        VAR4->VAR14.VAR17[VAR10] = FUN6(VAR8[VAR10 + 1]);
    }
    for (VAR10 = 0; VAR10 < VAR4->VAR14.VAR15; VAR10++)
    {
        VAR7 = FUN7(VAR2, VAR4->VAR14.VAR17[VAR10]);
        if (!VAR7)
        {
            continue;
        }
        if ((FUN8(VAR7->VAR20) == VAR21) && (FUN9(VAR7->VAR20) != FUN9(VAR4->VAR20)))
        {
            FUN10(""
                    "",
                    VAR4->VAR14.VAR17[VAR10], VAR4->VAR20);
            VAR9 = -VAR13;
            goto VAR19;
        }
    }
    FUN4(VAR8);
    return VAR22;
VAR19:
    VAR4->VAR14.VAR15 = 0;
    FUN4(VAR4->VAR14.VAR17);
    FUN4(VAR8);
    return VAR9;
}
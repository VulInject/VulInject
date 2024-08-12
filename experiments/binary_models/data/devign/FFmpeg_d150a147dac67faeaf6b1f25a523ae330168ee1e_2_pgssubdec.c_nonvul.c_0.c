static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = FUN2(&VAR4);
    int VAR10 = FUN2(&VAR4);
    uint16_t VAR11;
    FUN3(VAR2, "", VAR9, VAR10);
    if (FUN4(VAR9, VAR10, 0, VAR2) >= 0)
        FUN5(VAR2, VAR9, VAR10);
    VAR4++;
    VAR7->VAR12.VAR13 = FUN2(&VAR4);
    VAR4 += 3;
    VAR7->VAR12.VAR14 = FUN6(&VAR4);
    if (!VAR7->VAR12.VAR14)
        return;
    VAR5 -= 11;
    if (VAR5 < VAR7->VAR12.VAR14 * 8)
    {
        VAR7->VAR12.VAR14 = 0;
        return;
    }
    FUN7(&VAR7->VAR12.VAR15);
    VAR7->VAR12.VAR15 = FUN8(sizeof(VAR16) * VAR7->VAR12.VAR14);
    if (!VAR7->VAR12.VAR15)
    {
        VAR7->VAR12.VAR14 = 0;
        return;
    }
    for (VAR11 = 0; VAR11 < VAR7->VAR12.VAR14; ++VAR11)
    {
        VAR16 *VAR17 = &VAR7->VAR12.VAR15[VAR11];
        VAR17->VAR18 = FUN2(&VAR4);
        VAR4 += 2;
        VAR17->VAR19 = FUN2(&VAR4);
        VAR17->VAR20 = FUN2(&VAR4);
        FUN3(VAR2, "", VAR17->VAR18, VAR17->VAR19, VAR17->VAR20);
        if (VAR17->VAR19 > VAR2->VAR21 || VAR17->VAR20 > VAR2->VAR22)
        {
            FUN9(VAR2, VAR23, "", VAR17->VAR19, VAR17->VAR20, VAR2->VAR21, VAR2->VAR22);
            VAR17->VAR19 = 0;
            VAR17->VAR20 = 0;
        }
    }
}
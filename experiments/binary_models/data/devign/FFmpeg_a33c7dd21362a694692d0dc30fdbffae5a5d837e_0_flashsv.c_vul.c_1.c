static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    struct VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = VAR14->VAR18;
    int VAR19;
    int VAR20 = FUN2(&VAR14->VAR21);
    if (VAR20 != VAR22)
    {
        FUN3(VAR2, VAR23, "", VAR20);
        return VAR24;
    }
    if (VAR14->VAR25 || VAR14->VAR26)
    {
        VAR20 = FUN4(VAR14, VAR14->VAR27[VAR12].VAR28, VAR14->VAR27[VAR12].VAR29);
        if (VAR20 < 0)
            return VAR20;
    }
    VAR14->VAR21.VAR30 = VAR4->VAR31 + FUN5(VAR6) / 8;
    VAR14->VAR21.VAR32 = VAR7;
    VAR14->VAR21.VAR33 = VAR14->VAR18;
    VAR14->VAR21.VAR34 = VAR14->VAR7 * 3;
    VAR20 = FUN6(&VAR14->VAR21, VAR35);
    if (VAR20 == VAR36)
    {
        FUN3(VAR2, VAR23, "");
        FUN7(&VAR14->VAR21);
        VAR20 = FUN6(&VAR14->VAR21, VAR35);
    }
    if (VAR20 != VAR22 && VAR20 != VAR37)
    {
    }
    if (VAR14->VAR38)
    {
        VAR14->VAR27[VAR12].VAR28 = VAR14->VAR39 + (FUN5(VAR6) / 8);
        VAR14->VAR27[VAR12].VAR29 = VAR7;
    }
    VAR11 += VAR14->VAR40;
    if (!VAR14->VAR41)
    {
        for (VAR19 = 1; VAR19 <= VAR14->VAR42; VAR19++)
        {
            memcpy(VAR14->VAR43->VAR31[0] + VAR10 * 3 + (VAR14->VAR44 - VAR11 - VAR19) * VAR14->VAR43->VAR45[0], VAR17, VAR8 * 3);
            VAR17 += VAR8 * 3;
        }
    }
    else
    {
        FUN8(VAR14->VAR18, VAR14->VAR43->VAR31[0], VAR14->VAR44 - (VAR11 + 1 + VAR14->VAR42), VAR10, VAR14->VAR42, VAR8, VAR14->VAR43->VAR45[0], VAR14->VAR46);
    }
    FUN9(VAR6, 8 * VAR7);
    return 0;
}
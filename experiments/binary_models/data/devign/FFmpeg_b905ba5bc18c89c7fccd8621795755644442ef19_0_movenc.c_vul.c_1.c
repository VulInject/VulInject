static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5
    {
        int VAR6;
        int16_t VAR7;
        int VAR8;
    };
    struct VAR5 *VAR9 = NULL;
    int VAR10 = -1;
    int VAR11 = 0;
    int VAR12, VAR13;
    const int VAR14 = 80;
    int VAR15 = FUN2(VAR14, (VAR16){1, 1000}, (VAR16){1, 48000});
    if (VAR4->VAR17)
    {
        VAR9 = FUN3(VAR4->VAR17, sizeof(*VAR9));
        if (!VAR9)
            return FUN4(VAR18);
    }
    FUN5(VAR4->VAR19->VAR20 == VAR21);
    for (VAR12 = 0; VAR12 < VAR4->VAR17; VAR12++)
    {
        int VAR22 = VAR15;
        int VAR23 = 0;
        for (VAR13 = VAR12 - 1; VAR13 >= 0; VAR13--)
        {
            VAR22 -= FUN6(VAR4, VAR13);
            VAR23++;
            if (VAR22 <= 0)
                break;
        }
        if (VAR22 > 0)
            VAR23 = 0;
        FUN5(VAR23 == 0 || (VAR23 >= 2 && VAR23 <= 32));
        if (VAR12 && VAR23 == VAR9[VAR10].VAR7)
        {
            VAR9[VAR10].VAR6++;
        }
        else
        {
            VAR10++;
            VAR9[VAR10].VAR6 = 1;
            VAR9[VAR10].VAR7 = VAR23;
            VAR9[VAR10].VAR8 = VAR23 ? ++VAR11 : 0;
        }
    }
    VAR10++;
    if (!VAR11)
        return 0;
    FUN7(VAR2, 24 + (VAR11 * 2));
    FUN8(VAR2, "");
    FUN7(VAR2, 1 << 24);
    FUN8(VAR2, "");
    FUN7(VAR2, 2);
    FUN7(VAR2, VAR11);
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
    {
        if (VAR9[VAR12].VAR8)
        {
            FUN9(VAR2, -VAR9[VAR12].VAR7);
        }
    }
    FUN7(VAR2, 20 + (VAR10 * 8));
    FUN8(VAR2, "");
    FUN7(VAR2, 0);
    FUN8(VAR2, "");
    FUN7(VAR2, VAR10);
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
    {
        FUN7(VAR2, VAR9[VAR12].VAR6);
        FUN7(VAR2, VAR9[VAR12].VAR8);
    }
    FUN10(VAR9);
    return 0;
}
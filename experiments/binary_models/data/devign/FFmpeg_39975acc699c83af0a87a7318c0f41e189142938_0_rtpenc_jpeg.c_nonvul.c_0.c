void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR3 *VAR9 = NULL;
    int VAR10 = 0;
    uint8_t VAR11;
    uint8_t VAR12, VAR13;
    VAR3 *VAR14;
    int VAR15 = 0;
    int VAR16;
    int VAR17;
    VAR7->VAR18 = VAR7->VAR4;
    VAR7->VAR19 = VAR7->VAR20;
    VAR12 = VAR2->VAR21[0]->VAR22->VAR23 >> 3;
    VAR13 = VAR2->VAR21[0]->VAR22->VAR24 >> 3;
    if (VAR2->VAR21[0]->VAR22->VAR25 == VAR26 || (VAR2->VAR21[0]->VAR22->VAR27 == VAR28 && VAR2->VAR21[0]->VAR22->VAR25 == VAR29))
    {
        VAR11 = 0;
    }
    else if (VAR2->VAR21[0]->VAR22->VAR25 == VAR30 || (VAR2->VAR21[0]->VAR22->VAR27 == VAR28 && VAR2->VAR21[0]->VAR22->VAR25 == VAR31))
    {
        VAR11 = 1;
    }
    else
    {
        FUN2(VAR2, VAR32, "");
        return;
    }
    for (VAR17 = 0; VAR17 < VAR5; VAR17++)
    {
        if (VAR4[VAR17] != 0xff)
            continue;
        if (VAR4[VAR17 + 1] == VAR33)
        {
            if (VAR4[VAR17 + 4])
                FUN2(VAR2, VAR34, "");
            VAR10 = FUN3(&VAR4[VAR17 + 2]) / 65;
            if (VAR17 + 4 + VAR10 * 65 > VAR5)
            {
                FUN2(VAR2, VAR32, "");
                return;
            }
            VAR9 = &VAR4[VAR17 + 4];
        }
        else if (VAR4[VAR17 + 1] == VAR35)
        {
            if (VAR4[VAR17 + 14] != 17 || VAR4[VAR17 + 17] != 17)
            {
                FUN2(VAR2, VAR32, "");
                return;
            }
        }
        else if (VAR4[VAR17 + 1] == VAR36)
        {
            VAR17 += FUN3(&VAR4[VAR17 + 2]) + 2;
            break;
        }
    }
    VAR4 += VAR17;
    VAR5 -= VAR17;
    for (VAR17 = VAR5 - 2; VAR17 >= 0; VAR17--)
    {
        if (VAR4[VAR17] == 0xff && VAR4[VAR17 + 1] == VAR37)
        {
            VAR5 = VAR17;
            break;
        }
    }
    VAR14 = VAR7->VAR18;
    while (VAR5 > 0)
    {
        int VAR38 = 8;
        if (VAR15 == 0 && VAR10)
            VAR38 += 4 + 64 * VAR10;
        VAR16 = FUN4(VAR5, VAR7->VAR39 - VAR38);
        FUN5(&VAR14, 0);
        FUN6(&VAR14, VAR15);
        FUN5(&VAR14, VAR11);
        FUN5(&VAR14, 255);
        FUN5(&VAR14, VAR12);
        FUN5(&VAR14, VAR13);
        if (VAR15 == 0 && VAR10)
        {
            FUN5(&VAR14, 0);
            FUN5(&VAR14, 0);
            FUN7(&VAR14, 64 * VAR10);
            for (VAR17 = 0; VAR17 < VAR10; VAR17++)
                FUN8(&VAR14, &VAR9[65 * VAR17 + 1], 64);
        }
        memcpy(VAR14, VAR4, VAR16);
        FUN9(VAR2, VAR7->VAR4, VAR16 + VAR38, VAR5 == VAR16);
        VAR4 += VAR16;
        VAR5 -= VAR16;
        VAR15 += VAR16;
        VAR14 = VAR7->VAR4;
    }
}
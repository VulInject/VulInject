static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(VAR4->VAR8);
    int VAR9[0x24] = {0};
    int VAR10, VAR11 = 0;
    uint64_t VAR12 = 0;
    if (!VAR7)
    {
        FUN3(VAR2, VAR13, "");
        return VAR14;
    }
    if (VAR7->VAR15 <= 0)
    {
        FUN3(VAR2, VAR13, "");
        return VAR14;
    }
    VAR2->VAR16 = VAR7->VAR15;
    VAR2->VAR17 = VAR7->VAR18;
    for (VAR10 = 0; VAR10 < VAR7->VAR19; VAR10++)
    {
        AUDIO_CHANNEL_TYPE VAR20 = VAR7->VAR21[VAR10];
        if (VAR20 <= VAR22 || VAR20 > FUN4(VAR9))
        {
            FUN3(VAR2, VAR23, "");
            break;
        }
        VAR9[VAR20]++;
    }
    FUN3(VAR2, VAR24, "", VAR7->VAR19, VAR9[VAR25], VAR9[VAR26], VAR9[VAR27], VAR9[VAR28], VAR9[VAR29] + VAR9[VAR30] + VAR9[VAR31] + VAR9[VAR32]);
    switch (VAR9[VAR25])
    {
    case 4:
        VAR12 |= VAR33 | VAR34 | VAR35;
        break;
    case 3:
        VAR12 |= VAR33 | VAR36;
        break;
    case 2:
        VAR12 |= VAR33;
        break;
    case 1:
        VAR12 |= VAR36;
        break;
    default:
        FUN3(VAR2, VAR23, "", VAR9[VAR25]);
        VAR11 = 1;
        break;
    }
    if (VAR9[VAR26] > 0)
    {
        if (VAR9[VAR26] == 2)
        {
            VAR12 |= VAR37 | VAR38;
        }
        else
        {
            FUN3(VAR2, VAR23, "", VAR9[VAR26]);
            VAR11 = 1;
        }
    }
    if (VAR9[VAR27] > 0)
    {
        switch (VAR9[VAR27])
        {
        case 3:
            VAR12 |= VAR39 | VAR40 | VAR41;
            break;
        case 2:
            VAR12 |= VAR39 | VAR40;
            break;
        case 1:
            VAR12 |= VAR41;
            break;
        default:
            FUN3(VAR2, VAR23, "", VAR9[VAR27]);
            VAR11 = 1;
            break;
        }
    }
    if (VAR9[VAR28] > 0)
    {
        if (VAR9[VAR28] == 1)
        {
            VAR12 |= VAR42;
        }
        else
        {
            FUN3(VAR2, VAR23, "", VAR9[VAR28]);
            VAR11 = 1;
        }
    }
    if (!VAR11 && FUN5(VAR12) != VAR7->VAR19)
    {
        FUN3(VAR2, VAR23, "");
        VAR11 = 1;
    }
    if (VAR11)
        VAR2->VAR43 = 0;
    else
        VAR2->VAR43 = VAR12;
    VAR2->VAR44 = VAR7->VAR19;
    return 0;
}
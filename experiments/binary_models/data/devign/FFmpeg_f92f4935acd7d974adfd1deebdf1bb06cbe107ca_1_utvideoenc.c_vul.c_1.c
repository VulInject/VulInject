static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    uint8_t VAR15[256];
    uint32_t VAR16[256] = {0};
    HuffEntry VAR17[256];
    uint32_t VAR18 = 0, VAR19 = 0;
    int VAR20, VAR21, send = 0;
    int VAR22;
    switch (VAR13->VAR23)
    {
    case VAR24:
        for (VAR20 = 0; VAR20 < VAR13->VAR25; VAR20++)
        {
            VAR21 = send;
            send = VAR9 * (VAR20 + 1) / VAR13->VAR25;
            FUN2(VAR4 + VAR21 * VAR7, VAR5 + VAR21 * VAR8, VAR6, VAR7, VAR8, send - VAR21);
        }
        break;
    case VAR26:
        for (VAR20 = 0; VAR20 < VAR13->VAR25; VAR20++)
        {
            VAR21 = send;
            send = VAR9 * (VAR20 + 1) / VAR13->VAR25;
            FUN3(VAR4 + VAR21 * VAR7, VAR5 + VAR21 * VAR8, VAR6, VAR7, VAR8, send - VAR21);
        }
        break;
    case VAR27:
        for (VAR20 = 0; VAR20 < VAR13->VAR25; VAR20++)
        {
            VAR21 = send;
            send = VAR9 * (VAR20 + 1) / VAR13->VAR25;
            FUN4(VAR4 + VAR21 * VAR7, VAR5 + VAR21 * VAR8, VAR6, VAR7, VAR8, send - VAR21);
        }
        break;
    default:
        FUN5(VAR2, VAR28, "", VAR13->VAR23);
        return VAR29;
    }
    FUN6(VAR5, VAR8, VAR9, VAR16);
    for (VAR22 = 0; VAR22 < 256; VAR22++)
    {
        if (VAR16[VAR22])
        {
            if (VAR16[VAR22] == VAR8 * VAR9)
            {
                for (VAR20 = 0; VAR20 < 256; VAR20++)
                {
                    if (VAR20 == VAR22)
                        FUN7(VAR11, 0);
                    else
                        FUN7(VAR11, 0xFF);
                }
                for (VAR20 = 0; VAR20 < VAR13->VAR25; VAR20++)
                    FUN8(VAR11, 0);
                return 0;
            }
            break;
        }
    }
    FUN9(VAR15, VAR16);
    for (VAR20 = 0; VAR20 < 256; VAR20++)
    {
        FUN7(VAR11, VAR15[VAR20]);
        VAR17[VAR20].VAR30 = VAR15[VAR20];
        VAR17[VAR20].VAR31 = VAR20;
    }
    FUN10(VAR17);
    send = 0;
    for (VAR20 = 0; VAR20 < VAR13->VAR25; VAR20++)
    {
        VAR21 = send;
        send = VAR9 * (VAR20 + 1) / VAR13->VAR25;
        VAR18 += FUN11(VAR5 + VAR21 * VAR8, VAR13->VAR32, VAR8 * (send - VAR21), VAR8, send - VAR21, VAR17) >> 3;
        VAR19 = VAR18 - VAR19;
        VAR13->VAR33.FUN12((VAR34 *)VAR13->VAR32, (VAR34 *)VAR13->VAR32, VAR19 >> 2);
        FUN8(VAR11, VAR18);
        FUN13(VAR11, 4 * (VAR13->VAR25 - VAR20 - 1) + VAR18 - VAR19, VAR35);
        FUN14(VAR11, VAR13->VAR32, VAR19);
        FUN13(VAR11, -4 * (VAR13->VAR25 - VAR20 - 1) - VAR18, VAR35);
        VAR19 = VAR18;
    }
    FUN13(VAR11, VAR18, VAR35);
    return 0;
}
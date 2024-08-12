static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    ogg_packet VAR9;
    float *VAR10 = VAR5;
    int VAR11, VAR12;
    if (VAR5)
    {
        const int VAR13 = VAR2->VAR14;
        float **VAR15;
        int VAR16, VAR17 = VAR7->VAR18.VAR17;
        VAR15 = FUN2(&VAR7->VAR19, VAR13);
        for (VAR16 = 0; VAR16 < VAR17; VAR16++)
        {
            int VAR20;
            int VAR21 = (VAR17 > 8) ? VAR16 : VAR22[VAR17 - 1][VAR16];
            for (VAR20 = 0; VAR20 < VAR13; VAR20++)
                VAR15[VAR16][VAR20] = VAR10[VAR20 * VAR17 + VAR21];
        }
        if ((VAR12 = FUN3(&VAR7->VAR19, VAR13)) < 0)
            return FUN4(VAR12);
    }
    else
    {
        if (!VAR7->VAR23)
            if ((VAR12 = FUN3(&VAR7->VAR19, 0)) < 0)
                return FUN4(VAR12);
        VAR7->VAR23 = 1;
    }
    while ((VAR12 = FUN5(&VAR7->VAR19, &VAR7->VAR24)) == 1)
    {
        if ((VAR12 = FUN6(&VAR7->VAR24, NULL)) < 0)
            break;
        if ((VAR12 = FUN7(&VAR7->VAR24)) < 0)
            break;
        while ((VAR12 = FUN8(&VAR7->VAR19, &VAR9)) == 1)
        {
            if (VAR9.VAR25 == 1 && VAR9.VAR26)
                continue;
            if (VAR7->VAR27 + sizeof(VAR28) + VAR9.VAR25 > VAR29)
            {
                FUN9(VAR2, VAR30, "");
                return -1;
            }
            memcpy(VAR7->VAR15 + VAR7->VAR27, &VAR9, sizeof(VAR28));
            VAR7->VAR27 += sizeof(VAR28);
            memcpy(VAR7->VAR15 + VAR7->VAR27, VAR9.VAR31, VAR9.VAR25);
            VAR7->VAR27 += VAR9.VAR25;
        }
        if (VAR12 < 0)
            break;
    }
    if (VAR12 < 0)
        return FUN4(VAR12);
    VAR11 = 0;
    if (VAR7->VAR27)
    {
        VAR28 *VAR32 = (VAR28 *)VAR7->VAR15;
        VAR32->VAR31 = VAR7->VAR15 + sizeof(VAR28);
        VAR11 = VAR32->VAR25;
        VAR2->VAR33->VAR34 = FUN10(VAR2, VAR32->VAR35);
        if (VAR11 > VAR4)
        {
            FUN9(VAR2, VAR30, "");
            return -1;
        }
        memcpy(VAR3, VAR32->VAR31, VAR11);
        VAR7->VAR27 -= VAR11 + sizeof(VAR28);
        memmove(VAR7->VAR15, VAR7->VAR15 + VAR11 + sizeof(VAR28), VAR7->VAR27);
    }
    return VAR11;
}
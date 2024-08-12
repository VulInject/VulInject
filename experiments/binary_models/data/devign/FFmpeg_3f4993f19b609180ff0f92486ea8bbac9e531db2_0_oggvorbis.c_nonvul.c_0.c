static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    float **VAR9;
    ogg_packet VAR10;
    signed char *VAR11 = VAR5;
    int VAR12, VAR13 = VAR14;
    VAR9 = FUN2(&VAR7->VAR15, VAR13);
    if (VAR7->VAR16.VAR17 == 1)
    {
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
            VAR9[0][VAR12] = ((VAR11[VAR12 * 2 + 1] << 8) | (0x00ff & (int)VAR11[VAR12 * 2])) / 32768.VAR18;
    }
    else
    {
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
        {
            VAR9[0][VAR12] = ((VAR11[VAR12 * 4 + 1] << 8) | (0x00ff & (int)VAR11[VAR12 * 4])) / 32768.VAR18;
            VAR9[1][VAR12] = ((VAR11[VAR12 * 4 + 3] << 8) | (0x00ff & (int)VAR11[VAR12 * 4 + 2])) / 32768.VAR18;
        }
    }
    FUN3(&VAR7->VAR15, VAR13);
    while (FUN4(&VAR7->VAR15, &VAR7->VAR19) == 1)
    {
        FUN5(&VAR7->VAR19, NULL);
        FUN6(&VAR7->VAR19);
        while (FUN7(&VAR7->VAR15, &VAR10))
        {
            memcpy(VAR7->VAR9 + VAR7->VAR20, &VAR10, sizeof(VAR21));
            VAR7->VAR20 += sizeof(VAR21);
            memcpy(VAR7->VAR9 + VAR7->VAR20, VAR10.VAR22, VAR10.VAR23);
            VAR7->VAR20 += VAR10.VAR23;
        }
    }
    VAR12 = 0;
    if (VAR7->VAR20)
    {
        VAR21 *VAR24 = (VAR21 *)VAR7->VAR9;
        VAR24->VAR22 = VAR7->VAR9 + sizeof(VAR21);
        if (VAR24->VAR25 <= VAR7->VAR26)
        {
            assert(VAR24->VAR25 == VAR7->VAR26);
            VAR12 = VAR24->VAR23;
            memcpy(VAR3, VAR24->VAR22, VAR12);
            VAR7->VAR20 -= VAR12 + sizeof(VAR21);
            memcpy(VAR7->VAR9, VAR7->VAR9 + VAR12 + sizeof(VAR21), VAR7->VAR20);
        }
    }
    if (VAR12 || VAR7->VAR26)
    {
        VAR7->VAR26 += VAR2->VAR27;
    }
    return VAR12;
}
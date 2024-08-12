static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    AVPacket VAR11;
    const int VAR12 = 5;
    const VAR7 *VAR13;
    VAR7 *VAR14;
    int VAR15 = 0, VAR16 = 0;
    if (!VAR2->VAR17 || !VAR2->VAR18)
        return -1;
    VAR13 = VAR8;
    VAR14 = FUN2(VAR9 + 1024);
    if (!VAR14)
        return -1;
    VAR14[VAR16++] = 0xFF;
    VAR14[VAR16++] = 0xD8;
    memcpy(VAR14 + VAR16, &VAR19[0], sizeof(VAR19));
    memcpy(VAR14 + VAR16 + 5, &VAR20[VAR12 * 2], 64);
    memcpy(VAR14 + VAR16 + 70, &VAR20[(VAR12 * 2) + 1], 64);
    VAR16 += sizeof(VAR19);
    memcpy(VAR14 + VAR16, &VAR21[0], sizeof(VAR21));
    VAR16 += sizeof(VAR21);
    memcpy(VAR14 + VAR16, &VAR22[0], sizeof(VAR22));
    FUN3(VAR14 + VAR16 + 5, VAR2->VAR23);
    FUN3(VAR14 + VAR16 + 7, VAR2->VAR24);
    VAR16 += sizeof(VAR22);
    memcpy(VAR14 + VAR16, &VAR25[0], sizeof(VAR25));
    VAR16 += sizeof(VAR25);
    if (VAR2->VAR26 == VAR27)
        for (VAR15 = 2; VAR15 < VAR9 - 2 && VAR16 < VAR9 + 1024 - 2; VAR15++)
            VAR14[VAR16++] = VAR8[VAR15];
    else
        for (VAR15 = 14; VAR15 < VAR9 && VAR16 < VAR9 + 1024 - 2; VAR15++)
        {
            VAR14[VAR16++] = VAR8[VAR15];
            if (VAR8[VAR15] == 0xff)
                VAR14[VAR16++] = 0;
        }
    VAR14[VAR16++] = 0xFF;
    VAR14[VAR16++] = 0xD9;
    VAR2->VAR28 &= ~VAR29;
    FUN4(&VAR11);
    VAR11.VAR3 = VAR14;
    VAR11.VAR10 = VAR16;
    VAR15 = FUN5(VAR2, VAR3, VAR4, &VAR11);
    FUN6(VAR14);
    return VAR15;
}
VAR1 *FUN1(VAR2 *VAR3, int VAR4, enum AVSampleFormat VAR5, int VAR6, int64_t VAR7, int VAR8)
{
    VAR9 *VAR10 = FUN2(sizeof(VAR9));
    VAR1 *VAR11 = NULL;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17 = 0;
    char *VAR18;
    if (!VAR10 || !(VAR11 = FUN2(sizeof(VAR1))))
        goto VAR19;
    VAR11->VAR18 = VAR10;
    VAR11->VAR20 = VAR5;
    VAR11->VAR21 = FUN2(sizeof(VAR22));
    if (!VAR11->VAR21)
        goto VAR19;
    VAR11->VAR21->VAR7 = VAR7;
    VAR11->VAR21->VAR6 = VAR6;
    VAR11->VAR21->VAR8 = VAR8;
    VAR11->VAR4 = VAR4 | VAR23;
    VAR10->VAR24 = 1;
    VAR10->free = VAR25;
    VAR13 = FUN3(VAR5) >> 3;
    VAR14 = FUN4(VAR7);
    VAR16 = VAR6 / VAR14;
    VAR11->VAR21->VAR26 = VAR16 / VAR13;
    for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        VAR10->VAR27[VAR12] = VAR8 > 0 ? VAR16 : VAR13;
    memset(&VAR10->VAR27[VAR14], 0, (8 - VAR14) * sizeof(VAR10->VAR27[0]));
    VAR15 = (VAR6 + 15) & ~15;
    VAR18 = FUN5(VAR15);
    if (!VAR18)
        goto VAR19;
    VAR10->VAR28[0] = VAR18;
    if (VAR18 && VAR8)
    {
        for (VAR12 = 1; VAR12 < VAR14; VAR12++)
        {
            VAR17 += VAR16;
            VAR10->VAR28[VAR12] = VAR18 + VAR17;
        }
    }
    else
    {
        for (VAR12 = 1; VAR12 < VAR14; VAR12++)
            VAR10->VAR28[VAR12] = VAR18;
    }
    memset(&VAR10->VAR28[VAR14], 0, (8 - VAR14) * sizeof(VAR10->VAR28[0]));
    memcpy(VAR11->VAR28, VAR10->VAR28, sizeof(VAR11->VAR28));
    memcpy(VAR11->VAR27, VAR10->VAR27, sizeof(VAR11->VAR27));
    return VAR11;
VAR19:
    FUN6(VAR18);
    if (VAR11 && VAR11->VAR21)
        FUN6(VAR11->VAR21);
    FUN6(VAR11);
    FUN6(VAR10);
    return NULL;
}
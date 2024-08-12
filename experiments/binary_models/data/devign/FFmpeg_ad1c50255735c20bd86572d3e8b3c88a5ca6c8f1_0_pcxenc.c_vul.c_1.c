static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *const VAR10 = &VAR7->VAR11;
    const VAR12 *VAR13 = VAR3;
    const VAR12 *VAR14 = VAR3 + VAR4;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    const VAR21 *VAR22 = NULL;
    const VAR12 *VAR23;
    *VAR10 = *(VAR9 *)VAR5;
    VAR10->VAR24 = VAR25;
    VAR10->VAR26 = 1;
    if (VAR2->VAR27 > 65535 || VAR2->VAR28 > 65535)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    switch (VAR2->VAR30)
    {
    case VAR31:
        VAR15 = 8;
        VAR16 = 3;
        break;
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
        VAR15 = 8;
        VAR16 = 1;
        FUN3(VAR37, VAR2->VAR30);
        VAR22 = VAR37;
        break;
    case VAR38:
        VAR15 = 8;
        VAR16 = 1;
        VAR22 = (VAR21 *)VAR10->VAR5[1];
        break;
    case VAR39:
        VAR15 = 1;
        VAR16 = 1;
        VAR22 = VAR40;
        break;
    default:
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR19 = (VAR2->VAR27 * VAR15 + 7) >> 3;
    VAR19 = (VAR19 + 1) & ~1;
    FUN4(&VAR3, 10);
    FUN4(&VAR3, 5);
    FUN4(&VAR3, 1);
    FUN4(&VAR3, VAR15);
    FUN5(&VAR3, 0);
    FUN5(&VAR3, 0);
    FUN5(&VAR3, VAR2->VAR27 - 1);
    FUN5(&VAR3, VAR2->VAR28 - 1);
    FUN5(&VAR3, 0);
    FUN5(&VAR3, 0);
    for (VAR17 = 0; VAR17 < 16; VAR17++)
        FUN6(&VAR3, VAR22 ? VAR22[VAR17] : 0);
    FUN4(&VAR3, 0);
    FUN4(&VAR3, VAR16);
    FUN5(&VAR3, VAR19);
    while (VAR3 - VAR13 < 128)
        *VAR3++ = 0;
    VAR23 = VAR10->VAR5[0];
    for (VAR18 = 0; VAR18 < VAR2->VAR28; VAR18++)
    {
        if ((VAR20 = FUN7(VAR3, VAR14 - VAR3, VAR23, VAR19, VAR16)) < 0)
        {
            FUN2(VAR2, VAR29, "");
            return -1;
        }
        VAR3 += VAR20;
        VAR23 += VAR10->VAR41[0];
    }
    if (VAR16 == 1 && VAR15 == 8)
    {
        if (VAR14 - VAR3 < 257)
        {
            FUN2(VAR2, VAR29, "");
            return -1;
        }
        FUN4(&VAR3, 12);
        for (VAR17 = 0; VAR17 < 256; VAR17++)
        {
            FUN6(&VAR3, VAR22[VAR17]);
        }
    }
    return VAR3 - VAR13;
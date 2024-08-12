static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint8_t VAR10, *VAR11, *VAR12, *VAR13;
    int VAR14, VAR15, VAR16;
    VAR8->VAR17.VAR18 = 3;
    if ((VAR16 = VAR2->FUN2(VAR2, &VAR8->VAR17)) < 0)
        return VAR16;
    FUN3(&VAR8->VAR19, VAR6->VAR3, VAR6->VAR20);
    VAR10 = FUN4(&VAR8->VAR19);
    if (VAR10 & 0x20)
    {
        for (VAR14 = 0; VAR14 < 4; VAR14++)
            memset(VAR8->VAR15[VAR14], 0, VAR8->VAR21);
        memset(VAR8->VAR17.VAR3[1], 0, VAR22);
        VAR8->VAR23 = 0;
        VAR8->VAR17.VAR24 = 1;
        VAR8->VAR17.VAR25 = VAR26;
    }
    else
    {
        VAR8->VAR17.VAR24 = 0;
        VAR8->VAR17.VAR25 = VAR27;
    }
    if (VAR10 & 0x40)
    {
        VAR28 *VAR29 = (VAR28 *)VAR8->VAR17.VAR3[1];
        int VAR30, VAR31;
        VAR30 = FUN4(&VAR8->VAR19);
        VAR31 = FUN4(&VAR8->VAR19) + 1;
        if (VAR30 + VAR31 > 256)
            return VAR32;
        if (FUN5(&VAR8->VAR19) < 3 * VAR22)
            return VAR32;
        VAR29 += VAR30;
        for (VAR14 = 0; VAR14 < VAR31; VAR14++)
        {
            unsigned VAR33, VAR34, VAR35;
            VAR33 = FUN6(&VAR8->VAR19);
            VAR33 = VAR33 << 2 | VAR33 >> 4;
            VAR34 = FUN6(&VAR8->VAR19);
            VAR34 = VAR34 << 2 | VAR34 >> 4;
            VAR35 = FUN6(&VAR8->VAR19);
            VAR35 = VAR35 << 2 | VAR35 >> 4;
            *VAR29++ = 0xFFU << 24 | VAR33 << 16 | VAR34 << 8 | VAR35;
        }
        VAR8->VAR17.VAR36 = 1;
    }
    switch (VAR10 & 0x0F)
    {
    case 0:
        if ((VAR16 = FUN7(VAR2, VAR10, VAR6->VAR3)) < 0)
            return VAR16;
        break;
    case 1:
        VAR11 = VAR8->VAR15[VAR8->VAR23];
        FUN8(&VAR8->VAR19, 2);
        if (FUN5(&VAR8->VAR19) < VAR8->VAR37)
            return VAR32;
        FUN9(&VAR8->VAR19, VAR11, VAR8->VAR37);
        break;
    case 2:
        VAR15 = FUN4(&VAR8->VAR19);
        if (VAR15 > 3)
            return VAR32;
        if (VAR15 != VAR8->VAR23)
            memcpy(VAR8->VAR15[VAR8->VAR23], VAR8->VAR15[VAR15], VAR8->VAR21);
        break;
    case 4:
        VAR11 = VAR8->VAR15[VAR8->VAR23];
        VAR13 = VAR11 + VAR8->VAR37;
        FUN8(&VAR8->VAR19, 2);
        while (VAR11 < VAR13)
        {
            int8_t VAR10;
            int VAR31;
            if (FUN5(&VAR8->VAR19) < 2)
                return VAR32;
            VAR10 = FUN6(&VAR8->VAR19);
            VAR31 = FUN10(VAR10) + 1;
            if (VAR11 + VAR31 > VAR13)
                return VAR32;
            if (VAR10 < 0)
                memset(VAR11, FUN6(&VAR8->VAR19), VAR31);
            else
                FUN11(&VAR8->VAR19, VAR11, VAR31);
            VAR11 += VAR31;
        }
        break;
    default:
        FUN12(VAR2, "");
        return VAR32;
    }
    VAR11 = VAR8->VAR17.VAR3[0];
    VAR12 = VAR8->VAR15[VAR8->VAR23];
    for (VAR14 = 0; VAR14 < VAR2->VAR38; VAR14++)
    {
        memcpy(VAR11, VAR12, VAR2->VAR39);
        VAR11 += VAR8->VAR17.VAR40[0];
        VAR12 += VAR2->VAR39;
    }
    VAR8->VAR23 = (VAR8->VAR23 + 1) & 3;
    *VAR4 = sizeof(VAR41);
    *(VAR41 *)VAR3 = VAR8->VAR17;
    return VAR6->VAR20;
}
static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    GetByteContext VAR7;
    VAR8 *const VAR9 = VAR3;
    unsigned int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    unsigned int VAR17, VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    int VAR23;
    FUN2(&VAR7, VAR6->VAR3, VAR6->VAR24);
    VAR10 = FUN3(&VAR7);
    FUN4(&VAR7, 72);
    VAR13 = FUN3(&VAR7);
    VAR11 = FUN5(&VAR7);
    VAR12 = FUN5(&VAR7);
    VAR14 = FUN6(&VAR7);
    FUN4(&VAR7, 2);
    VAR16 = FUN6(&VAR7);
    if (VAR10 < 8 || VAR10 > 9)
    {
        FUN7(VAR2, VAR25, "", VAR10);
        return VAR26;
    }
    if (VAR14 == 8)
    {
        VAR2->VAR27 = VAR28;
    }
    else if (VAR14 == 16 || VAR14 == 32)
    {
        VAR2->VAR27 = VAR29;
    }
    else
    {
        FUN7(VAR2, VAR25, "", VAR14);
        return VAR26;
    }
    if ((VAR23 = FUN8(VAR2, VAR11, VAR12)) < 0)
        return VAR23;
    if ((VAR23 = FUN9(VAR2, VAR9, 0)) < 0)
        return VAR23;
    VAR9->VAR30 = VAR31;
    VAR20 = VAR9->VAR3[0];
    VAR15 = VAR9->VAR32[0];
    if (VAR14 == 8)
    {
        VAR22 = (VAR21 *)VAR9->VAR3[1];
        for (VAR17 = 0; VAR17 < 256; VAR17++)
        {
            VAR18 = FUN10(&VAR7);
            VAR22[VAR17] = (VAR18 >> 8) + (VAR18 << 24);
        }
        if (FUN11(&VAR7) < VAR11 * VAR12)
            return VAR33;
        FUN4(&VAR7, 4);
        for (VAR17 = 0; VAR17 < VAR12; VAR17++)
        {
            FUN12(&VAR7, VAR20, VAR11);
            VAR20 += VAR15;
        }
    }
    else if (VAR14 == 16)
    {
        FUN4(&VAR7, 4);
        switch (VAR13)
        {
        case 0:
            if (!(VAR16 & 1))
                goto VAR34;
        case VAR35:
            if (FUN11(&VAR7) < FUN13(VAR11, 2) * FUN13(VAR12, 2) * 8)
                return VAR33;
            FUN14(&VAR7, VAR20, VAR11, VAR12, VAR15);
            break;
        case VAR36:
            if (FUN11(&VAR7) < FUN13(VAR11, 2) * FUN13(VAR12, 2) * 16)
                return VAR33;
            FUN15(&VAR7, VAR20, VAR11, VAR12, VAR15);
            break;
        default:
            goto VAR34;
        }
    }
    else if (VAR14 == 32)
    {
        switch (VAR13)
        {
        case 0x15:
        case 0x16:
            if (FUN11(&VAR7) < VAR12 * VAR11 * 4)
                return VAR33;
            for (VAR17 = 0; VAR17 < VAR12; VAR17++)
            {
                FUN12(&VAR7, VAR20, VAR11 * 4);
                VAR20 += VAR15;
            }
            break;
        default:
            goto VAR34;
        }
    }
    *VAR4 = 1;
    return VAR6->VAR24;
VAR34:
    FUN7(VAR2, VAR25, "", VAR13);
    return VAR26;
}
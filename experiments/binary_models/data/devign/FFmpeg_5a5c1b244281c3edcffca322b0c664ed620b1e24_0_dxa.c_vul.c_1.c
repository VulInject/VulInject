static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    VAR9 *const VAR10 = VAR2->VAR11;
    VAR12 *VAR13, *VAR14, *VAR15;
    unsigned long VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21;
    int VAR22 = 0;
    GetByteContext VAR23;
    FUN2(&VAR23, VAR6->VAR3, VAR6->VAR24);
    if (FUN3(&VAR23) == FUN4('', '', '', ''))
    {
        FUN5(&VAR23, 4);
        for (VAR17 = 0; VAR17 < 256; VAR17++)
        {
            VAR10->VAR25[VAR17] = 0xFFU << 24 | FUN6(&VAR23);
        }
        VAR22 = 1;
    }
    if ((VAR20 = FUN7(VAR2, VAR8, VAR26)) < 0)
        return VAR20;
    memcpy(VAR8->VAR3[1], VAR10->VAR25, VAR27);
    VAR8->VAR28 = VAR22;
    VAR13 = VAR8->VAR3[0];
    VAR14 = VAR10->VAR29;
    VAR15 = VAR10->VAR30->VAR3[0];
    VAR21 = VAR8->VAR31[0];
    if (FUN8(&VAR23) == FUN4('', '', '', ''))
        VAR19 = -1;
    else
        VAR19 = FUN9(&VAR23);
    VAR16 = VAR10->VAR16;
    if (VAR19 != 4 && VAR19 != -1)
    {
        FUN5(&VAR23, 4);
        if (FUN10(VAR10->VAR29, &VAR16, VAR6->VAR3 + FUN11(&VAR23), FUN12(&VAR23)) != VAR32)
        {
            FUN13(VAR2, VAR33, "");
            return VAR34;
        }
        memset(VAR10->VAR29 + VAR16, 0, VAR35);
    }
    if (VAR2->VAR36 & VAR37)
        FUN13(VAR2, VAR38, "", VAR19, (int)VAR16);
    switch (VAR19)
    {
    case -1:
        VAR8->VAR39 = 0;
        VAR8->VAR40 = VAR41;
        if (VAR10->VAR30->VAR3[0])
            memcpy(VAR8->VAR3[0], VAR10->VAR30->VAR3[0], VAR8->VAR31[0] * VAR2->VAR42);
        else
        {
            memset(VAR8->VAR3[0], 0, VAR8->VAR31[0] * VAR2->VAR42);
            VAR8->VAR39 = 1;
            VAR8->VAR40 = VAR43;
        }
        break;
    case 2:
    case 4:
        VAR8->VAR39 = 1;
        VAR8->VAR40 = VAR43;
        for (VAR18 = 0; VAR18 < VAR2->VAR42; VAR18++)
        {
            memcpy(VAR13, VAR14, VAR2->VAR44);
            VAR13 += VAR21;
            VAR14 += VAR2->VAR44;
        }
        break;
    case 3:
    case 5:
        if (!VAR15)
        {
            FUN13(VAR2, VAR33, "");
            if (!(VAR2->VAR45 & VAR46))
                return VAR47;
        }
        VAR8->VAR39 = 0;
        VAR8->VAR40 = VAR41;
        for (VAR18 = 0; VAR18 < VAR2->VAR42; VAR18++)
        {
            if (VAR15)
            {
                for (VAR17 = 0; VAR17 < VAR2->VAR44; VAR17++)
                    VAR13[VAR17] = VAR14[VAR17] ^ VAR15[VAR17];
                VAR15 += VAR21;
            }
            else
                memcpy(VAR13, VAR14, VAR2->VAR44);
            VAR13 += VAR21;
            VAR14 += VAR2->VAR44;
        }
        break;
    case 12:
    case 13:
        VAR8->VAR39 = 0;
        VAR8->VAR40 = VAR41;
        if (!VAR10->VAR30->VAR3[0])
        {
            FUN13(VAR2, VAR33, "");
            return VAR47;
        }
        FUN14(VAR2, VAR10, VAR8->VAR3[0], VAR8->VAR31[0], VAR14, VAR10->VAR30->VAR3[0]);
        break;
    default:
        FUN13(VAR2, VAR33, "", VAR19);
        return VAR47;
    }
    FUN15(VAR10->VAR30);
    if ((VAR20 = FUN16(VAR10->VAR30, VAR8)) < 0)
        return VAR20;
    *VAR4 = 1;
    return VAR6->VAR24;
}
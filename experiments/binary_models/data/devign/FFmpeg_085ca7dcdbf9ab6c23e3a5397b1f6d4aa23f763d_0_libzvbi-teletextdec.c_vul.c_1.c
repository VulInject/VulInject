static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    uint8_t VAR16[45] = {0x00, 0x00, 0x01, 0xbd, 0x00, 0x00, 0x85, 0x80, 0x24, 0x21, 0x00, 0x01, 0x00, 0x01};
    int VAR17 = sizeof(VAR16);
    const VAR12 *VAR18 = VAR16;
    int VAR19 = 0;
    if (!VAR8->VAR20)
    {
        if (!(VAR8->VAR20 = FUN2()))
            return FUN3(VAR21);
        if (!FUN4(VAR8->VAR20, VAR22, VAR23, VAR8))
        {
            FUN5(VAR8->VAR20);
            VAR8->VAR20 = NULL;
            return FUN3(VAR21);
        }
    }
    if (!VAR8->VAR24 && (!(VAR8->VAR24 = FUN6(NULL, NULL))))
        return FUN3(VAR21);
    if (VAR2->VAR25.VAR26 && VAR6->VAR27 != VAR28)
        VAR8->VAR27 = FUN7(VAR6->VAR27, VAR2->VAR25, VAR29);
    if (VAR14)
    {
        if ((VAR17 + VAR14) < 184 || (VAR17 + VAR14) > 65504 || (VAR17 + VAR14) % 184 != 0)
            return VAR30;
        memset(VAR16 + 14, 0xff, VAR17 - 14);
        FUN8(VAR16 + 4, VAR14 + VAR17 - 6);
        FUN9(VAR8->VAR24, VAR8->VAR31, 64, NULL, &VAR18, &VAR17);
        VAR8->VAR32 = VAR6->VAR15;
        while (VAR14 > 0)
        {
            int64_t VAR27 = 0;
            unsigned int VAR33 = FUN9(VAR8->VAR24, VAR8->VAR31, 64, &VAR27, &VAR13, &VAR14);
            FUN10(VAR2, "", VAR8, VAR6->VAR15, VAR14, VAR33, (double)VAR27 / 90000.0, (double)VAR6->VAR27 / 90000.0);
            if (VAR33 > 0)
            {
                int VAR34;
                for (VAR34 = 0; VAR34 < VAR33; ++VAR34)
                    FUN11(VAR2, VAR35, "", VAR34, VAR8->VAR31[VAR34].VAR36);
                FUN12(VAR8->VAR20, VAR8->VAR31, VAR33, (double)VAR27 / 90000.0);
                VAR8->VAR37 += VAR33;
            }
        }
        VAR8->VAR27 = VAR28;
        VAR19 = VAR8->VAR32;
    }
    if (VAR19 < 0)
        return VAR19;
    if (VAR8->VAR38)
    {
        int VAR34;
        VAR11->VAR39 = VAR8->VAR40;
        VAR11->VAR41 = 0;
        VAR11->VAR42 = VAR8->VAR43;
        VAR11->VAR44 = 0;
        VAR11->VAR27 = VAR8->VAR45->VAR27;
        if (VAR8->VAR45->VAR46->VAR47 != VAR48)
        {
            VAR11->VAR49 = FUN13(sizeof(*VAR11->VAR49) * 1);
            if (VAR11->VAR49)
            {
                VAR11->VAR44 = 1;
                VAR11->VAR49[0] = VAR8->VAR45->VAR46;
            }
            else
            {
                VAR19 = FUN3(VAR21);
            }
        }
        else
        {
            FUN11(VAR2, VAR35, "");
            VAR11->VAR49 = NULL;
        }
        if (!VAR11->VAR49)
            FUN14(&VAR8->VAR45->VAR46);
        for (VAR34 = 0; VAR34 < VAR8->VAR38 - 1; VAR34++)
            VAR8->VAR45[VAR34] = VAR8->VAR45[VAR34 + 1];
        VAR8->VAR38--;
        if (VAR19 >= 0)
            *VAR4 = 1;
    }
    else
        *VAR4 = 0;
    return VAR19;
}
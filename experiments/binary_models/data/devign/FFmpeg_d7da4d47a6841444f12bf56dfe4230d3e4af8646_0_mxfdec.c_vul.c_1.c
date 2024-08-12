static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    KLVPacket VAR6;
    int64_t VAR7 = 0;
    int VAR8;
    VAR4->VAR9 = VAR10;
    VAR4->VAR11 = 1;
    if (!FUN2(VAR2->VAR12, VAR13, 14))
    {
        FUN3(VAR2, VAR14, "");
        return VAR15;
    }
    FUN4(VAR2->VAR12, -14, VAR16);
    VAR4->VAR17 = VAR2;
    VAR4->VAR18 = FUN5(VAR2->VAR12);
    while (!FUN6(VAR2->VAR12))
    {
        const VAR19 *VAR20;
        if (FUN7(&VAR6, VAR2->VAR12) < 0)
        {
            if (FUN8(VAR4) <= 0)
                break;
            else
                continue;
        }
        FUN9(VAR2, "", VAR6.VAR21);
        FUN10(VAR2, "" VAR22 "" VAR23 "", VAR6.VAR24, VAR6.VAR25);
        if (FUN11(VAR6.VAR21, VAR26) || FUN11(VAR6.VAR21, VAR27) || FUN11(VAR6.VAR21, VAR28) || FUN11(VAR6.VAR21, VAR29))
        {
            if (!VAR4->VAR30)
            {
                FUN3(VAR4->VAR17, VAR14, "");
                return VAR15;
            }
            if (!VAR4->VAR30->VAR7)
            {
                int64_t VAR31 = FUN12(VAR4->VAR30->VAR32 + VAR4->VAR30->VAR33, VAR4->VAR30->VAR34) + FUN12(VAR4->VAR30->VAR35, VAR4->VAR30->VAR34) + FUN12(VAR4->VAR30->VAR36, VAR4->VAR30->VAR34);
                if (VAR4->VAR37 == VAR38)
                {
                    VAR4->VAR30->VAR7 = FUN5(VAR2->VAR12);
                    VAR4->VAR30->VAR39 = VAR6.VAR24;
                }
                else
                {
                    VAR4->VAR30->VAR7 = VAR31;
                }
            }
            if (!VAR7)
                VAR7 = VAR6.VAR25;
            if (FUN13(VAR4) <= 0)
                break;
            continue;
        }
        else if (!memcmp(VAR6.VAR21, VAR13, 13) && VAR6.VAR21[13] >= 2 && VAR6.VAR21[13] <= 4 && VAR4->VAR30)
        {
            if (FUN8(VAR4) <= 0)
                break;
            else if (VAR4->VAR40)
                continue;
        }
        for (VAR20 = VAR41; VAR20->read; VAR20++)
        {
            if (FUN11(VAR6.VAR21, VAR20->VAR21))
            {
                int VAR42;
                if (VAR6.VAR21[5] == 0x53)
                {
                    VAR42 = FUN14(VAR4, &VAR6, VAR20->read, VAR20->VAR43, VAR20->VAR44);
                }
                else
                {
                    uint64_t VAR45 = FUN5(VAR2->VAR12) + VAR6.VAR24;
                    VAR42 = VAR20->read(VAR4, VAR2->VAR12, 0, VAR6.VAR24, VAR6.VAR21, VAR6.VAR25);
                    if (FUN5(VAR2->VAR12) > VAR45)
                    {
                        FUN3(VAR2, VAR14, "" VAR23 "", VAR6.VAR25);
                        return VAR15;
                    }
                    FUN4(VAR2->VAR12, VAR45, VAR46);
                }
                if (VAR42 < 0)
                {
                    FUN3(VAR2, VAR14, "");
                    return VAR42;
                }
                break;
            }
        }
        if (!VAR20->read)
            FUN15(VAR2->VAR12, VAR6.VAR24);
    }
    if (!VAR7)
    {
        FUN3(VAR2, VAR14, "");
        return VAR15;
    }
    FUN4(VAR2->VAR12, VAR7, VAR46);
    FUN16(VAR4);
    if ((VAR8 = FUN17(VAR4)) < 0)
        return VAR8;
    if ((VAR8 = FUN18(VAR4)) < 0)
        return VAR8;
    if (VAR4->VAR47 > 1)
    {
        FUN3(VAR4->VAR17, VAR48, "", VAR4->VAR47, VAR4->VAR49[0].VAR50);
    }
    else if (VAR4->VAR47 == 0 && VAR4->VAR37 == VAR38)
    {
        FUN3(VAR4->VAR17, VAR14, "");
        return VAR15;
    }
    FUN19(VAR2);
    return 0;
}
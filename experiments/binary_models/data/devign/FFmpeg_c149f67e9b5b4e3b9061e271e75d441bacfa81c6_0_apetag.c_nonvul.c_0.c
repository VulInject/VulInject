static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    uint8_t VAR5[1024], *VAR6;
    uint32_t VAR7, VAR8;
    int VAR9, VAR10;
    VAR7 = FUN2(VAR4);
    VAR8 = FUN2(VAR4);
    for (VAR9 = 0; VAR9 < sizeof(VAR5) - 1; VAR9++)
    {
        VAR10 = FUN3(VAR4);
        if (VAR10 < 0x20 || VAR10 > 0x7E)
            break;
        else
            VAR5[VAR9] = VAR10;
    }
    VAR5[VAR9] = 0;
    if (VAR10 != 0)
    {
        FUN4(VAR2, VAR11, "", VAR5);
        return -1;
    }
    if (VAR7 > VAR12 - VAR13)
    {
        FUN4(VAR2, VAR14, "");
        return VAR15;
    }
    if (VAR8 & VAR16)
    {
        uint8_t VAR17[1024];
        enum AVCodecID VAR18;
        int VAR19;
        VAR20 *VAR21 = FUN5(VAR2, NULL);
        if (!VAR21)
            return FUN6(VAR22);
        VAR19 = FUN7(VAR4, VAR7, VAR17, sizeof(VAR17));
        if (VAR19 < 0)
            return VAR19;
        if (VAR7 <= VAR19)
        {
            FUN4(VAR2, VAR11, "", VAR5);
            return 0;
        }
        VAR7 -= VAR19;
        FUN8(&VAR21->VAR23, VAR5, VAR17, 0);
        if ((VAR18 = FUN9(VAR17)) != VAR24)
        {
            AVPacket VAR25;
            int VAR19;
            VAR19 = FUN10(VAR2->VAR4, &VAR25, VAR7);
            if (VAR19 < 0)
            {
                FUN4(VAR2, VAR14, "");
                return VAR19;
            }
            VAR21->VAR26 |= VAR27;
            VAR21->VAR28->VAR29 = VAR30;
            VAR21->VAR28->VAR31 = VAR18;
            VAR21->VAR32 = VAR25;
            VAR21->VAR32.VAR33 = VAR21->VAR34;
            VAR21->VAR32.VAR8 |= VAR35;
        }
        else
        {
            if (FUN11(VAR21->VAR28, VAR2->VAR4, VAR7) < 0)
                return FUN6(VAR22);
            VAR21->VAR28->VAR29 = VAR36;
        }
    }
    else
    {
        VAR6 = FUN12(VAR7 + 1);
        if (!VAR6)
            return FUN6(VAR22);
        VAR10 = FUN13(VAR4, VAR6, VAR7);
        if (VAR10 < 0)
        {
            FUN14(VAR6);
            return VAR10;
        }
        VAR6[VAR10] = 0;
        FUN8(&VAR2->VAR23, VAR5, VAR6, VAR37);
    }
    return 0;
}
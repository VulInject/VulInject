static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    VAR8 *VAR9;
    const VAR8 *VAR10;
    uint32_t VAR11;
    uint32_t VAR12, VAR13, VAR14 = 0;
    if (VAR5->VAR15 == VAR16)
        return VAR17;
    for (;;)
    {
        RTMPPacket VAR18 = {0};
        if ((VAR7 = FUN2(VAR5->VAR19, &VAR18, VAR5->VAR20, VAR5->VAR21[0])) <= 0)
        {
            if (VAR7 == 0)
            {
                return FUN3(VAR22);
            }
            else
            {
                return FUN3(VAR23);
            }
        }
        VAR5->VAR24 += VAR7;
        if (VAR5->VAR24 > VAR5->VAR25 + VAR5->VAR26)
        {
            FUN4(VAR2, VAR27, "");
            FUN5(VAR2, VAR5, VAR18.VAR28 + 1);
            VAR5->VAR25 = VAR5->VAR24;
        }
        VAR7 = FUN6(VAR2, VAR5, &VAR18);
        if (VAR7 < 0)
        {
            FUN7(&VAR18);
            return -1;
        }
        if (VAR5->VAR15 == VAR16)
        {
            FUN7(&VAR18);
            return VAR17;
        }
        if (VAR3 && (VAR5->VAR15 == VAR29 || VAR5->VAR15 == VAR30))
        {
            FUN7(&VAR18);
            return 0;
        }
        if (!VAR18.VAR11 || !VAR5->VAR31)
        {
            FUN7(&VAR18);
            continue;
        }
        if (VAR18.VAR32 == VAR33 || VAR18.VAR32 == VAR34 || (VAR18.VAR32 == VAR35 && !memcmp("", VAR18.VAR36, 13)))
        {
            VAR12 = VAR18.VAR28;
            VAR5->VAR37 = 0;
            VAR5->VAR38 = VAR18.VAR11 + 15;
            VAR5->VAR39 = VAR9 = FUN8(VAR5->VAR39, VAR5->VAR38);
            FUN9(&VAR9, VAR18.VAR32);
            FUN10(&VAR9, VAR18.VAR11);
            FUN10(&VAR9, VAR12);
            FUN9(&VAR9, VAR12 >> 24);
            FUN10(&VAR9, 0);
            FUN11(&VAR9, VAR18.VAR36, VAR18.VAR11);
            FUN12(&VAR9, 0);
            FUN7(&VAR18);
            return 0;
        }
        else if (VAR18.VAR32 == VAR40)
        {
            VAR5->VAR37 = 0;
            VAR5->VAR38 = VAR18.VAR11;
            VAR5->VAR39 = FUN8(VAR5->VAR39, VAR5->VAR38);
            VAR10 = VAR18.VAR36;
            VAR12 = VAR18.VAR28;
            while (VAR10 - VAR18.VAR36 < VAR18.VAR11 - 11)
            {
                VAR10++;
                VAR11 = FUN13(&VAR10);
                VAR9 = VAR10;
                VAR13 = FUN13(&VAR10);
                VAR13 |= FUN14(&VAR10) << 24;
                if (VAR14 == 0)
                    VAR14 = VAR13;
                VAR12 += VAR13 - VAR14;
                VAR14 = VAR13;
                FUN10(&VAR9, VAR12);
                FUN9(&VAR9, VAR12 >> 24);
                VAR10 += VAR11 + 3 + 4;
            }
            memcpy(VAR5->VAR39, VAR18.VAR36, VAR18.VAR11);
            FUN7(&VAR18);
            return 0;
        }
        FUN7(&VAR18);
    }
}
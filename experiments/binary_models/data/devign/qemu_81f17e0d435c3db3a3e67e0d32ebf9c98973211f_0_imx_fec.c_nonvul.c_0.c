static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4 = 0;
    uint8_t VAR5[VAR6];
    VAR7 *VAR8 = VAR5;
    uint32_t VAR9 = VAR2->VAR10;
    while (VAR4++ < VAR11)
    {
        IMXENETBufDesc VAR12;
        int VAR13;
        FUN2(&VAR12, VAR9);
        FUN3(""
                   "",
                   VAR9, VAR12.VAR14, VAR12.VAR15, VAR12.VAR16, VAR12.VAR17, VAR12.VAR18);
        if ((VAR12.VAR14 & VAR19) == 0)
        {
            break;
        }
        VAR13 = VAR12.VAR15;
        if (VAR3 + VAR13 > VAR6)
        {
            VAR13 = VAR6 - VAR3;
            VAR2->VAR20[VAR21] |= VAR22;
        }
        FUN4(&VAR23, VAR12.VAR16, VAR8, VAR13);
        VAR8 += VAR13;
        VAR3 += VAR13;
        if (VAR12.VAR14 & VAR24)
        {
            if (VAR12.VAR17 & VAR25)
            {
                struct VAR26 *VAR27 = FUN5(VAR5);
                if (FUN6(VAR27) == 4)
                {
                    FUN7(VAR5, VAR3);
                }
            }
            if (VAR12.VAR17 & VAR28)
            {
                struct VAR26 *VAR27 = FUN5(VAR5);
                if (FUN6(VAR27) == 4)
                {
                    uint16_t VAR29;
                    VAR27->VAR30 = 0;
                    VAR29 = FUN8((VAR7 *)VAR27, sizeof(*VAR27));
                    VAR27->VAR30 = FUN9(VAR29);
                }
            }
            FUN10(FUN11(VAR2->VAR31), VAR5, VAR13);
            VAR8 = VAR5;
            VAR3 = 0;
            if (VAR12.VAR17 & VAR32)
            {
                VAR2->VAR20[VAR21] |= VAR33;
            }
        }
        if (VAR12.VAR17 & VAR32)
        {
            VAR2->VAR20[VAR21] |= VAR34;
        }
        VAR12.VAR14 &= ~VAR19;
        FUN12(&VAR12, VAR9);
        if ((VAR12.VAR14 & VAR35) != 0)
        {
            VAR9 = VAR2->VAR20[VAR36];
        }
        else
        {
            VAR9 += sizeof(VAR12);
        }
    }
    VAR2->VAR10 = VAR9;
    FUN13(VAR2);
}
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, VAR10 *VAR11, int *VAR12, int VAR13, int64_t VAR14)
{
    VAR15 *VAR16 = VAR2->VAR17;
    int VAR18;
    if (VAR6->VAR19->VAR20 == VAR21)
    {
        VAR16->VAR22 = VAR6->VAR23;
        VAR18 = FUN2(VAR2, VAR4, VAR16, VAR8, VAR11, VAR9, VAR12, &VAR14);
        if (VAR18)
            return VAR18 < 0 ? VAR18 : -1;
    }
    else if (VAR6->VAR19->VAR20 == VAR24)
    {
        if ((VAR8->VAR25 == VAR26) || (VAR8->VAR25 == VAR27) || (VAR8->VAR25 == VAR28))
        {
            int VAR29;
            int VAR30 = VAR8->VAR31;
            int VAR32 = VAR8->VAR33;
            int VAR34 = VAR8->VAR35;
            int VAR36 = VAR8->VAR37;
            int VAR38 = VAR8->VAR39;
            if (VAR13 & 2)
                VAR36 = VAR8->VAR37 = 0;
            if (!VAR36)
                VAR8->VAR40 = VAR14;
            switch (VAR8->VAR25)
            {
            case VAR27:
                for (VAR29 = 0; VAR29 < VAR34 / 2; VAR29++)
                    FUN3(VAR4, VAR8->VAR11.VAR41 + VAR29 * 2 * VAR38 + VAR36 * VAR32, VAR32);
                break;
            case VAR26:
                for (VAR29 = 0; VAR29 < VAR38 / VAR30; VAR29++)
                    FUN3(VAR4, VAR8->VAR11.VAR41 + VAR30 * (VAR34 * VAR29 + ((VAR34 + 1) / 2) * (VAR36 & 1) + (VAR36 >> 1)), VAR30);
                break;
            case VAR28:
                FUN3(VAR4, VAR8->VAR11.VAR41 + VAR36 * VAR38, VAR38);
                break;
            }
            if (++(VAR8->VAR37) < VAR34)
                return -1;
            if (VAR8->VAR25 == VAR28)
                FUN4(VAR8->VAR11.VAR41, VAR34, VAR38);
            VAR8->VAR37 = 0;
            VAR16->VAR42 = VAR6->VAR43;
            VAR16->VAR44 = VAR34 * VAR38 / VAR6->VAR19->VAR45;
        }
        else if ((VAR8->VAR25 == VAR46) || (VAR8->VAR25 == VAR47))
        {
            int VAR29;
            VAR16->VAR42 = VAR6->VAR43;
            VAR8->VAR37 = (FUN5(VAR4) & 0xf0) >> 4;
            if (VAR8->VAR37)
            {
                for (VAR29 = 0; VAR29 < VAR8->VAR37; VAR29++)
                    VAR8->VAR48[VAR29] = FUN5(VAR4);
                VAR16->VAR44 = VAR8->VAR37;
                VAR8->VAR40 = VAR14;
            }
            else
                return -1;
        }
        else
        {
            FUN6(VAR4, VAR11, VAR9);
            FUN7(VAR6, VAR11);
        }
    }
    else
        FUN6(VAR4, VAR11, VAR9);
    VAR11->VAR49 = VAR6->VAR43;
    if (VAR6->VAR19->VAR20 == VAR21)
    {
        if (VAR6->VAR19->VAR50 == VAR51)
        {
            int VAR12 = 128 * (VAR11->VAR41[2] & 0x7F) + (VAR11->VAR41[3] >> 1);
            FUN8(VAR2, VAR52, "" VAR53 "", *VAR14, *VAR14 * 512LL / 25, VAR12);
            VAR12 |= (VAR14 & ~0x3FFF);
            if (VAR12 - VAR14 > 0x2000)
                VAR12 -= 0x4000;
            if (VAR12 - VAR14 < -0x2000)
                VAR12 += 0x4000;
        }
    }
    VAR11->VAR54 = VAR14;
    if (VAR13 & 2)
        VAR11->VAR13 |= VAR55;
    return VAR6->VAR19->VAR20 == VAR24 ? VAR16->VAR44 : 0;
}
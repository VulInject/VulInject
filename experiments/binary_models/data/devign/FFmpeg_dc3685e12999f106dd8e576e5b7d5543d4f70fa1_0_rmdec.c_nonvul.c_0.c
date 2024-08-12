FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, VAR10 *VAR11, int *VAR12, int *VAR13, VAR14 *VAR15)
{
    VAR16 *VAR17 = VAR2->VAR18;
    if (VAR6->VAR19->VAR20 == VAR21)
    {
        VAR17->VAR22 = VAR6->VAR23;
        if (FUN2(VAR2, VAR4, VAR17, VAR8, VAR11, VAR9))
            return -1;
    }
    else if (VAR6->VAR19->VAR20 == VAR24)
    {
        if ((VAR6->VAR19->VAR25 == VAR26) || (VAR6->VAR19->VAR25 == VAR27) || (VAR6->VAR19->VAR25 == VAR28) || (VAR6->VAR19->VAR25 == VAR29))
        {
            int VAR30;
            int VAR31 = VAR8->VAR32;
            int VAR33 = VAR8->VAR34;
            int VAR35 = VAR8->VAR36;
            int VAR37 = VAR8->VAR38;
            int VAR39 = VAR8->VAR40;
            if (*VAR13 & 2)
                VAR37 = VAR8->VAR38 = 0;
            if (!VAR37)
                VAR8->VAR41 = *VAR15;
            switch (VAR6->VAR19->VAR25)
            {
            case VAR26:
                for (VAR30 = 0; VAR30 < VAR35 / 2; VAR30++)
                    FUN3(VAR4, VAR8->VAR11.VAR42 + VAR30 * 2 * VAR39 + VAR37 * VAR33, VAR33);
                break;
            case VAR28:
            case VAR27:
                for (VAR30 = 0; VAR30 < VAR39 / VAR31; VAR30++)
                    FUN3(VAR4, VAR8->VAR11.VAR42 + VAR31 * (VAR35 * VAR30 + ((VAR35 + 1) / 2) * (VAR37 & 1) + (VAR37 >> 1)), VAR31);
                break;
            }
            if (++(VAR8->VAR38) < VAR35)
                return -1;
            else
            {
                VAR8->VAR38 = 0;
                VAR17->VAR43 = VAR6->VAR44;
                VAR17->VAR45 = VAR35 * VAR39 / VAR6->VAR19->VAR46 - 1;
                FUN4(VAR11, VAR6->VAR19->VAR46);
                memcpy(VAR11->VAR42, VAR8->VAR11.VAR42, VAR6->VAR19->VAR46);
                *VAR15 = VAR8->VAR41;
                *VAR13 = 2;
            }
        }
        else if (VAR6->VAR19->VAR25 == VAR47)
        {
            int VAR30;
            VAR17->VAR43 = VAR6->VAR44;
            VAR8->VAR38 = (FUN5(VAR4) & 0xf0) >> 4;
            if (VAR8->VAR38)
            {
                for (VAR30 = 0; VAR30 < VAR8->VAR38; VAR30++)
                    VAR8->VAR48[VAR30] = FUN5(VAR4);
                VAR17->VAR45 = VAR8->VAR38 - 1;
                FUN6(VAR4, VAR11, VAR8->VAR48[0]);
                *VAR13 = 2;
            }
        }
        else
        {
            FUN6(VAR4, VAR11, VAR9);
            FUN7(VAR6, VAR11);
        }
    }
    else
        FUN6(VAR4, VAR11, VAR9);
    VAR11->VAR49 = VAR6->VAR44;
    if (VAR6->VAR19->VAR20 == VAR21)
    {
        if (VAR6->VAR19->VAR25 == VAR50)
        {
            int VAR12 = 128 * (VAR11->VAR42[2] & 0x7F) + (VAR11->VAR42[3] >> 1);
            FUN8(VAR2, VAR51, "" VAR52 "", *VAR15, *VAR15 * 512LL / 25, VAR12);
            VAR12 |= (*VAR15 & ~0x3FFF);
            if (VAR12 - *VAR15 > 0x2000)
                VAR12 -= 0x4000;
            if (VAR12 - *VAR15 < -0x2000)
                VAR12 += 0x4000;
        }
    }
    VAR11->VAR53 = *VAR15;
    if (*VAR13 & 2)
        VAR11->VAR13 |= VAR54;
    return VAR6->VAR19->VAR20 == VAR24 ? VAR17->VAR45 : 0;
}
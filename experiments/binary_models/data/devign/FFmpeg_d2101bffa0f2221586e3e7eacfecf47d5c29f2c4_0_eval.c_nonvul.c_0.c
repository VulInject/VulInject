static double FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    switch (VAR4->VAR5)
    {
    case VAR6:
        return VAR4->VAR7;
    case VAR8:
        return VAR4->VAR7 * VAR2->VAR9[VAR4->VAR10.VAR11];
    case VAR12:
        return VAR4->VAR7 * VAR4->VAR10.FUN2(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR14:
        return VAR4->VAR7 * VAR4->VAR10.FUN3(VAR2->VAR15, FUN1(VAR2, VAR4->VAR13[0]));
    case VAR16:
        return VAR4->VAR7 * VAR4->VAR10.FUN4(VAR2->VAR15, FUN1(VAR2, VAR4->VAR13[0]), FUN1(VAR2, VAR4->VAR13[1]));
    case VAR17:
        return 1 / (1 + FUN5(4 * FUN1(VAR2, VAR4->VAR13[0])));
    case VAR18:
    {
        double VAR19 = FUN1(VAR2, VAR4->VAR13[0]);
        return FUN5(-VAR19 * VAR19 / 2) / FUN6(2 * VAR20);
    }
    case VAR21:
        return VAR4->VAR7 * VAR2->VAR22[FUN7(FUN1(VAR2, VAR4->VAR13[0]), 0, VAR23 - 1)];
    case VAR24:
        return VAR4->VAR7 * !!FUN8(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR25:
        return VAR4->VAR7 * FUN9(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR26:
        return VAR4->VAR7 * FUN10(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR27:
        return VAR4->VAR7 * FUN11(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR28:
        return VAR4->VAR7 * FUN6(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR29:
        return VAR4->VAR7 * (FUN1(VAR2, VAR4->VAR13[0]) == 0);
    case VAR30:
        return VAR4->VAR7 * (FUN1(VAR2, VAR4->VAR13[0]) ? FUN1(VAR2, VAR4->VAR13[1]) : 0);
    case VAR31:
        return VAR4->VAR7 * (!FUN1(VAR2, VAR4->VAR13[0]) ? FUN1(VAR2, VAR4->VAR13[1]) : 0);
    case VAR32:
    {
        int VAR33 = FUN7(FUN1(VAR2, VAR4->VAR13[0]), 0, VAR23 - 1);
        uint64_t VAR34 = FUN8(VAR2->VAR22[VAR33]) ? 0 : VAR2->VAR22[VAR33];
        VAR34 = VAR34 * 1664525 + 1013904223;
        VAR2->VAR22[VAR33] = VAR34;
        return VAR4->VAR7 * (VAR34 * (1.0 / VAR35));
    }
    case VAR36:
    {
        double VAR19 = VAR37;
        while (FUN1(VAR2, VAR4->VAR13[0]))
            VAR19 = FUN1(VAR2, VAR4->VAR13[1]);
        return VAR19;
    }
    case VAR38:
    {
        double VAR39 = 1, VAR19 = 0, VAR40;
        double VAR41 = FUN1(VAR2, VAR4->VAR13[1]);
        int VAR42 = VAR4->VAR13[2] ? FUN7(FUN1(VAR2, VAR4->VAR13[2]), 0, VAR23 - 1) : 0;
        int VAR43;
        double VAR44 = VAR2->VAR22[VAR42];
        for (VAR43 = 0; VAR43 < 1000; VAR43++)
        {
            double VAR45 = VAR19;
            VAR2->VAR22[VAR42] = VAR43;
            VAR40 = FUN1(VAR2, VAR4->VAR13[0]);
            VAR19 += VAR39 * VAR40;
            if (VAR45 == VAR19 && VAR40)
                break;
            VAR39 *= VAR41 / (VAR43 + 1);
        }
        VAR2->VAR22[VAR42] = VAR44;
        return VAR19;
    }
    case VAR46:
    {
        int VAR43, VAR47;
        double VAR48 = -1, VAR49 = -1, VAR40, VAR50 = -VAR51, VAR52 = VAR51;
        double VAR44 = VAR2->VAR22[0];
        double VAR53 = FUN1(VAR2, VAR4->VAR13[1]);
        for (VAR43 = -1; VAR43 < 1024; VAR43++)
        {
            if (VAR43 < 255)
            {
                VAR2->VAR22[0] = VAR54[VAR43 & 255] * VAR53 / 255;
            }
            else
            {
                VAR2->VAR22[0] = VAR53 * FUN12(0.9, VAR43 - 255);
                if (VAR43 & 1)
                    VAR2->VAR22[0] *= -1;
                if (VAR43 & 2)
                    VAR2->VAR22[0] += VAR48;
                else
                    VAR2->VAR22[0] += VAR49;
            }
            VAR40 = FUN1(VAR2, VAR4->VAR13[0]);
            if (VAR40 <= 0 && VAR40 > VAR50)
            {
                VAR48 = VAR2->VAR22[0];
                VAR50 = VAR40;
            }
            if (VAR40 >= 0 && VAR40 < VAR52)
            {
                VAR49 = VAR2->VAR22[0];
                VAR52 = VAR40;
            }
            if (VAR48 >= 0 && VAR49 >= 0)
            {
                for (VAR47 = 0; VAR47 < 1000; VAR47++)
                {
                    VAR2->VAR22[0] = (VAR48 + VAR49) * 0.5;
                    if (VAR48 == VAR2->VAR22[0] || VAR49 == VAR2->VAR22[0])
                        break;
                    VAR40 = FUN1(VAR2, VAR4->VAR13[0]);
                    if (VAR40 <= 0)
                        VAR48 = VAR2->VAR22[0];
                    if (VAR40 >= 0)
                        VAR49 = VAR2->VAR22[0];
                    if (FUN8(VAR40))
                    {
                        VAR48 = VAR49 = VAR40;
                        break;
                    }
                }
                break;
            }
        }
        VAR2->VAR22[0] = VAR44;
        return -VAR50 < VAR52 ? VAR48 : VAR49;
    }
    default:
    {
        double VAR19 = FUN1(VAR2, VAR4->VAR13[0]);
        double VAR55 = FUN1(VAR2, VAR4->VAR13[1]);
        switch (VAR4->VAR5)
        {
        case VAR56:
            return VAR4->VAR7 * (VAR19 - FUN9(VAR19 / VAR55) * VAR55);
        case VAR57:
            return VAR4->VAR7 * FUN13(VAR19, VAR55);
        case VAR58:
            return VAR4->VAR7 * (VAR19 > VAR55 ? VAR19 : VAR55);
        case VAR59:
            return VAR4->VAR7 * (VAR19 < VAR55 ? VAR19 : VAR55);
        case VAR60:
            return VAR4->VAR7 * (VAR19 == VAR55 ? 1.0 : 0.0);
        case VAR61:
            return VAR4->VAR7 * (VAR19 > VAR55 ? 1.0 : 0.0);
        case VAR62:
            return VAR4->VAR7 * (VAR19 >= VAR55 ? 1.0 : 0.0);
        case VAR63:
            return VAR4->VAR7 * FUN12(VAR19, VAR55);
        case VAR64:
            return VAR4->VAR7 * (VAR19 * VAR55);
        case VAR65:
            return VAR4->VAR7 * (VAR19 / VAR55);
        case VAR66:
            return VAR4->VAR7 * (VAR19 + VAR55);
        case VAR67:
            return VAR4->VAR7 * VAR55;
        case VAR68:
            return VAR4->VAR7 * (VAR2->VAR22[FUN7(VAR19, 0, VAR23 - 1)] = VAR55);
        case VAR69:
            return VAR4->VAR7 * (FUN6(VAR19 * VAR19 + VAR55 * VAR55));
        }
    }
    }
    return VAR37;
}
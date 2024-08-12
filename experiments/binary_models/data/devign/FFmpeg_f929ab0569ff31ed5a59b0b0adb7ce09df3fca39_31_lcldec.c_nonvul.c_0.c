static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *const VAR14 = VAR2->VAR15;
    unsigned int VAR16;
    int VAR17, VAR18;
    unsigned char *VAR19, *VAR20;
    VAR9 *VAR21, *VAR22, *VAR23;
    unsigned int VAR24 = VAR2->VAR24;
    unsigned int VAR25 = VAR2->VAR25;
    unsigned int VAR26;
    unsigned char VAR27, VAR28, VAR29, VAR30;
    int VAR31, VAR32;
    unsigned int VAR33, VAR34;
    unsigned int VAR35 = VAR11;
    if ((VAR32 = FUN2(VAR2, VAR8, 0)) < 0)
    {
        FUN3(VAR2, VAR36, "");
        return VAR32;
    }
    VAR20 = VAR8->VAR3[0];
    switch (VAR2->VAR37)
    {
    case VAR38:
        switch (VAR14->VAR39)
        {
        case VAR40:
            if (VAR14->VAR41 & VAR42)
            {
                VAR33 = FUN4(VAR10);
                VAR33 = FUN5(VAR33, VAR35 - 8);
                VAR34 = FUN4(VAR10 + 4);
                VAR34 = FUN5(VAR34, VAR14->VAR43);
                VAR26 = FUN6(VAR10 + 8, VAR33, VAR14->VAR44, VAR14->VAR43);
                if (VAR34 != VAR26)
                {
                    FUN3(VAR2, VAR36, "", VAR34, VAR26);
                    return VAR45;
                }
                VAR26 = FUN6(VAR10 + 8 + VAR33, VAR35 - 8 - VAR33, VAR14->VAR44 + VAR34, VAR14->VAR43 - VAR34);
                if (VAR34 != VAR26)
                {
                    FUN3(VAR2, VAR36, "", VAR34, VAR26);
                    return VAR45;
                }
                VAR19 = VAR14->VAR44;
                VAR35 = VAR14->VAR43;
            }
            else
            {
                VAR26 = FUN6(VAR10, VAR35, VAR14->VAR44, VAR14->VAR43);
                if (VAR14->VAR43 != VAR26)
                {
                    FUN3(VAR2, VAR36, "", VAR14->VAR43, VAR26);
                    return VAR45;
                }
                VAR19 = VAR14->VAR44;
                VAR35 = VAR26;
            }
            break;
        case VAR46:
        {
            int VAR47;
            switch (VAR14->VAR48)
            {
            case VAR49:
            case VAR50:
                VAR47 = 6;
                break;
            case VAR51:
            case VAR52:
                VAR47 = 4;
                break;
            case VAR53:
            case VAR54:
                VAR47 = 3;
                break;
            default:
                VAR47 = 0;
                break;
            }
            if (VAR35 < ((VAR24 * VAR25 * VAR47) >> 1))
                return VAR45;
            break;
        }
        default:
            FUN3(VAR2, VAR36, "");
            return VAR45;
        }
        break;
    case VAR55:
        if (VAR14->VAR39 == VAR56 && VAR14->VAR48 == VAR50 && VAR35 == VAR24 * VAR25 * 3)
        {
            if (VAR14->VAR41 & VAR57)
            {
                memcpy(VAR14->VAR44, VAR10, VAR35);
                VAR19 = VAR14->VAR44;
            }
            else
            {
                break;
            }
        }
        else if (VAR14->VAR41 & VAR42)
        {
            VAR33 = FUN4(VAR10);
            VAR33 = FUN5(VAR33, VAR35 - 8);
            VAR34 = FUN4(VAR10 + 4);
            VAR34 = FUN5(VAR34, VAR14->VAR43);
            VAR32 = FUN7(VAR2, VAR10 + 8, VAR33, 0, VAR34);
            if (VAR32 < 0)
                return VAR32;
            VAR32 = FUN7(VAR2, VAR10 + 8 + VAR33, VAR35 - 8 - VAR33, VAR34, VAR34);
            if (VAR32 < 0)
                return VAR32;
        }
        else
        {
            int VAR32 = FUN7(VAR2, VAR10, VAR35, 0, VAR14->VAR43);
            if (VAR32 < 0)
                return VAR32;
        }
        VAR19 = VAR14->VAR44;
        VAR35 = VAR14->VAR43;
        break;
    default:
        FUN3(VAR2, VAR36, "");
        return VAR45;
    }
    if (VAR2->VAR37 == VAR55 && (VAR14->VAR41 & VAR57))
    {
        switch (VAR14->VAR48)
        {
        case VAR49:
        case VAR50:
            for (VAR17 = 0; VAR17 < VAR25; VAR17++)
            {
                VAR16 = VAR17 * VAR24 * 3;
                VAR27 = VAR19[VAR16++];
                VAR31 = FUN8(VAR19 + VAR16);
                VAR16 += 2;
                for (VAR18 = 1; VAR18 < VAR24; VAR18++)
                {
                    VAR19[VAR16] = VAR27 -= VAR19[VAR16];
                    VAR31 -= FUN8(VAR19 + VAR16 + 1);
                    FUN9(VAR19 + VAR16 + 1, VAR31);
                    VAR16 += 3;
                }
            }
            break;
        case VAR51:
            for (VAR17 = 0; VAR17 < VAR25; VAR17++)
            {
                VAR16 = VAR17 * VAR24 * 2;
                VAR27 = VAR29 = VAR30 = 0;
                for (VAR18 = 0; VAR18 < VAR24 / 4; VAR18++)
                {
                    VAR19[VAR16] = VAR27 -= VAR19[VAR16];
                    VAR19[VAR16 + 1] = VAR27 -= VAR19[VAR16 + 1];
                    VAR19[VAR16 + 2] = VAR27 -= VAR19[VAR16 + 2];
                    VAR19[VAR16 + 3] = VAR27 -= VAR19[VAR16 + 3];
                    VAR19[VAR16 + 4] = VAR29 -= VAR19[VAR16 + 4];
                    VAR19[VAR16 + 5] = VAR29 -= VAR19[VAR16 + 5];
                    VAR19[VAR16 + 6] = VAR30 -= VAR19[VAR16 + 6];
                    VAR19[VAR16 + 7] = VAR30 -= VAR19[VAR16 + 7];
                    VAR16 += 8;
                }
            }
            break;
        case VAR53:
            for (VAR17 = 0; VAR17 < VAR25; VAR17++)
            {
                VAR16 = VAR17 * VAR24 / 2 * 3;
                VAR27 = VAR29 = VAR30 = 0;
                for (VAR18 = 0; VAR18 < VAR24 / 4; VAR18++)
                {
                    VAR19[VAR16] = VAR27 -= VAR19[VAR16];
                    VAR19[VAR16 + 1] = VAR27 -= VAR19[VAR16 + 1];
                    VAR19[VAR16 + 2] = VAR27 -= VAR19[VAR16 + 2];
                    VAR19[VAR16 + 3] = VAR27 -= VAR19[VAR16 + 3];
                    VAR19[VAR16 + 4] = VAR29 -= VAR19[VAR16 + 4];
                    VAR19[VAR16 + 5] = VAR30 -= VAR19[VAR16 + 5];
                    VAR16 += 6;
                }
            }
            break;
        case VAR52:
            for (VAR17 = 0; VAR17 < VAR25; VAR17++)
            {
                VAR16 = VAR17 * VAR24 * 2;
                VAR27 = VAR29 = VAR30 = 0;
                for (VAR18 = 0; VAR18 < VAR24 / 2; VAR18++)
                {
                    VAR19[VAR16] = VAR27 -= VAR19[VAR16];
                    VAR19[VAR16 + 1] = VAR27 -= VAR19[VAR16 + 1];
                    VAR19[VAR16 + 2] = VAR29 -= VAR19[VAR16 + 2];
                    VAR19[VAR16 + 3] = VAR30 -= VAR19[VAR16 + 3];
                    VAR16 += 4;
                }
            }
            break;
        case VAR54:
            for (VAR17 = 0; VAR17 < VAR25 / 2; VAR17++)
            {
                VAR16 = VAR17 * VAR24 * 3;
                VAR27 = VAR28 = VAR29 = VAR30 = 0;
                for (VAR18 = 0; VAR18 < VAR24 / 2; VAR18++)
                {
                    VAR19[VAR16] = VAR27 -= VAR19[VAR16];
                    VAR19[VAR16 + 1] = VAR27 -= VAR19[VAR16 + 1];
                    VAR19[VAR16 + 2] = VAR28 -= VAR19[VAR16 + 2];
                    VAR19[VAR16 + 3] = VAR28 -= VAR19[VAR16 + 3];
                    VAR19[VAR16 + 4] = VAR29 -= VAR19[VAR16 + 4];
                    VAR19[VAR16 + 5] = VAR30 -= VAR19[VAR16 + 5];
                    VAR16 += 6;
                }
            }
            break;
        default:
            FUN3(VAR2, VAR36, "");
            return VAR45;
        }
    }
    VAR21 = VAR8->VAR3[0] + (VAR25 - 1) * VAR8->VAR58[0];
    VAR22 = VAR8->VAR3[1] + (VAR25 - 1) * VAR8->VAR58[1];
    VAR23 = VAR8->VAR3[2] + (VAR25 - 1) * VAR8->VAR58[2];
    switch (VAR14->VAR48)
    {
    case VAR49:
        for (VAR17 = 0; VAR17 < VAR25; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR24; VAR18++)
            {
                VAR21[VAR18] = *VAR19++;
                VAR22[VAR18] = *VAR19++ + 128;
                VAR23[VAR18] = *VAR19++ + 128;
            }
            VAR21 -= VAR8->VAR58[0];
            VAR22 -= VAR8->VAR58[1];
            VAR23 -= VAR8->VAR58[2];
        }
        break;
    case VAR51:
        for (VAR17 = 0; VAR17 < VAR25; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR24 - 3; VAR18 += 4)
            {
                memcpy(VAR21 + VAR18, VAR19, 4);
                VAR19 += 4;
                VAR22[VAR18 >> 1] = *VAR19++ + 128;
                VAR22[(VAR18 >> 1) + 1] = *VAR19++ + 128;
                VAR23[VAR18 >> 1] = *VAR19++ + 128;
                VAR23[(VAR18 >> 1) + 1] = *VAR19++ + 128;
            }
            VAR21 -= VAR8->VAR58[0];
            VAR22 -= VAR8->VAR58[1];
            VAR23 -= VAR8->VAR58[2];
        }
        break;
    case VAR50:
        for (VAR17 = VAR25 - 1; VAR17 >= 0; VAR17--)
        {
            VAR16 = VAR17 * VAR8->VAR58[0];
            memcpy(VAR20 + VAR16, VAR19, 3 * VAR24);
            VAR19 += 3 * VAR24;
        }
        break;
    case VAR53:
        for (VAR17 = 0; VAR17 < VAR25; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR24 - 3; VAR18 += 4)
            {
                memcpy(VAR21 + VAR18, VAR19, 4);
                VAR19 += 4;
                VAR22[VAR18 >> 2] = *VAR19++ + 128;
                VAR23[VAR18 >> 2] = *VAR19++ + 128;
            }
            VAR21 -= VAR8->VAR58[0];
            VAR22 -= VAR8->VAR58[1];
            VAR23 -= VAR8->VAR58[2];
        }
        break;
    case VAR52:
        for (VAR17 = 0; VAR17 < VAR25; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR24 - 1; VAR18 += 2)
            {
                memcpy(VAR21 + VAR18, VAR19, 2);
                VAR19 += 2;
                VAR22[VAR18 >> 1] = *VAR19++ + 128;
                VAR23[VAR18 >> 1] = *VAR19++ + 128;
            }
            VAR21 -= VAR8->VAR58[0];
            VAR22 -= VAR8->VAR58[1];
            VAR23 -= VAR8->VAR58[2];
        }
        break;
    case VAR54:
        VAR22 = VAR8->VAR3[1] + ((VAR25 >> 1) - 1) * VAR8->VAR58[1];
        VAR23 = VAR8->VAR3[2] + ((VAR25 >> 1) - 1) * VAR8->VAR58[2];
        for (VAR17 = 0; VAR17 < VAR25 - 1; VAR17 += 2)
        {
            for (VAR18 = 0; VAR18 < VAR24 - 1; VAR18 += 2)
            {
                memcpy(VAR21 + VAR18, VAR19, 2);
                VAR19 += 2;
                memcpy(VAR21 + VAR18 - VAR8->VAR58[0], VAR19, 2);
                VAR19 += 2;
                VAR22[VAR18 >> 1] = *VAR19++ + 128;
                VAR23[VAR18 >> 1] = *VAR19++ + 128;
            }
            VAR21 -= VAR8->VAR58[0] << 1;
            VAR22 -= VAR8->VAR58[1];
            VAR23 -= VAR8->VAR58[2];
        }
        break;
    default:
        FUN3(VAR2, VAR36, "");
        return VAR45;
    }
    *VAR4 = 1;
    return VAR11;
}
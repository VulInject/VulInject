static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5, const VAR3 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11 = 0;
    int VAR12, VAR13;
    VAR14 *VAR15;
    const VAR3 *VAR16, *VAR17, *VAR18;
    VAR7 = FUN2(&VAR5, VAR2->VAR19);
    VAR8 = FUN2(&VAR5, VAR2->VAR19);
    VAR9 = FUN3(&VAR5, VAR2->VAR19);
    VAR10 = FUN3(&VAR5, VAR2->VAR19);
    if (VAR9 == 1)
    {
        switch (VAR8)
        {
        case VAR20:
        case VAR21:
            VAR5 -= 4;
            VAR11 = FUN4(&VAR5, VAR8, VAR2->VAR19);
            VAR5 = NULL;
            break;
        case VAR22:
            VAR11 = VAR10;
            VAR5 = NULL;
            break;
        case VAR23:
            if (VAR9 <= 4)
            {
                VAR5 -= 4;
                break;
            }
        default:
            VAR11 = -1;
            VAR5 = VAR4 + VAR10;
        }
    }
    else if (VAR24[VAR8] * VAR9 <= 4)
    {
        VAR5 -= 4;
    }
    else
    {
        VAR5 = VAR4 + VAR10;
    }
    if (VAR5 && (VAR5 < VAR4 || VAR5 > VAR6))
    {
        FUN5(VAR2->VAR25, VAR26, "");
        return -1;
    }
    switch (VAR7)
    {
    case VAR27:
        VAR2->VAR28 = VAR11;
        break;
    case VAR29:
        VAR2->VAR30 = VAR11;
        break;
    case VAR31:
        if (VAR9 == 1)
            VAR2->VAR32 = VAR11;
        else
        {
            switch (VAR8)
            {
            case VAR20:
                VAR2->VAR32 = (VAR10 & 0xFF) + ((VAR10 >> 8) & 0xFF) + ((VAR10 >> 16) & 0xFF) + ((VAR10 >> 24) & 0xFF);
                break;
            case VAR21:
            case VAR22:
                VAR2->VAR32 = 0;
                for (VAR12 = 0; VAR12 < VAR9; VAR12++)
                    VAR2->VAR32 += FUN4(&VAR5, VAR8, VAR2->VAR19);
                break;
            default:
                VAR2->VAR32 = -1;
            }
        }
        if (VAR9 > 4)
        {
            FUN5(VAR2->VAR25, VAR26, "", VAR2->VAR32, VAR9);
            return -1;
        }
        switch (VAR2->VAR32 * 10 + VAR9)
        {
        case 11:
            VAR2->VAR25->VAR33 = VAR34;
            break;
        case 81:
            VAR2->VAR25->VAR33 = VAR35;
            break;
        case 243:
            VAR2->VAR25->VAR33 = VAR36;
            break;
        case 161:
            VAR2->VAR25->VAR33 = VAR37;
            break;
        case 324:
            VAR2->VAR25->VAR33 = VAR38;
            break;
        case 483:
            VAR2->VAR25->VAR33 = VAR2->VAR19 ? VAR39 : VAR40;
            break;
        default:
            FUN5(VAR2->VAR25, VAR26, "", VAR2->VAR32, VAR9);
            return -1;
        }
        if (VAR2->VAR28 != VAR2->VAR25->VAR28 || VAR2->VAR30 != VAR2->VAR25->VAR30)
        {
            if (FUN6(VAR2->VAR25, VAR2->VAR28, VAR2->VAR30))
                return -1;
            FUN7(VAR2->VAR25, VAR2->VAR28, VAR2->VAR30);
        }
        if (VAR2->VAR41.VAR42[0])
            VAR2->VAR25->FUN8(VAR2->VAR25, &VAR2->VAR41);
        if (VAR2->VAR25->FUN9(VAR2->VAR25, &VAR2->VAR41) < 0)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        if (VAR2->VAR32 == 8)
        {
            VAR15 = (VAR14 *)VAR2->VAR41.VAR42[1];
            for (VAR12 = 0; VAR12 < 256; VAR12++)
                VAR15[VAR12] = VAR12 * 0x010101;
        }
        break;
    case VAR43:
        VAR2->VAR44 = VAR11;
        VAR2->VAR45 = 0;
        switch (VAR2->VAR44)
        {
        case VAR46:
        case VAR47:
        case VAR48:
        case VAR49:
            break;
        case VAR50:
        case VAR51:
            VAR2->VAR52 = 0;
            break;
        case VAR53:
        case VAR54:
            break;
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        case VAR55:
        case VAR56:
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        default:
            FUN5(VAR2->VAR25, VAR26, "", VAR2->VAR44);
            return -1;
        }
        break;
    case VAR57:
        if (VAR8 == VAR22 && VAR11 == -1)
            VAR11 = VAR2->VAR25->VAR30;
        if (VAR11 < 1)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        VAR2->VAR58 = VAR11;
        break;
    case VAR59:
        if (VAR9 == 1)
        {
            VAR2->VAR60 = NULL;
            VAR2->VAR61 = VAR11;
        }
        else
            VAR2->VAR60 = VAR4 + VAR10;
        VAR2->VAR62 = VAR9;
        if (VAR2->VAR62 == 1)
            VAR2->VAR58 = VAR2->VAR30;
        VAR2->VAR63 = VAR8;
        if (VAR2->VAR60 > VAR6)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        break;
    case VAR64:
        if (VAR9 == 1)
        {
            VAR2->VAR65 = NULL;
            VAR2->VAR66 = VAR11;
            VAR2->VAR62 = 1;
        }
        else
        {
            VAR2->VAR65 = VAR4 + VAR10;
        }
        VAR2->VAR62 = VAR9;
        VAR2->VAR67 = VAR8;
        if (VAR2->VAR65 > VAR6)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        break;
    case VAR68:
        VAR2->VAR45 = VAR11;
        break;
    case VAR69:
        switch (VAR11)
        {
        case 0:
            VAR2->VAR70 = 1;
            break;
        case 1:
            VAR2->VAR70 = 0;
            break;
        case 2:
        case 3:
            break;
        default:
            FUN5(VAR2->VAR25, VAR26, "", VAR11);
            return -1;
        }
        break;
    case VAR71:
        if (VAR2->VAR25->VAR33 != VAR35)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        VAR15 = (VAR14 *)VAR2->VAR41.VAR42[1];
        VAR10 = VAR24[VAR8];
        VAR16 = VAR5;
        VAR17 = VAR5 + VAR9 / 3 * VAR10;
        VAR18 = VAR5 + VAR9 / 3 * VAR10 * 2;
        VAR10 = (VAR24[VAR8] - 1) << 3;
        for (VAR12 = 0; VAR12 < VAR9 / 3; VAR12++)
        {
            VAR13 = (FUN4(&VAR16, VAR8, VAR2->VAR19) >> VAR10) << 16;
            VAR13 |= (FUN4(&VAR17, VAR8, VAR2->VAR19) >> VAR10) << 8;
            VAR13 |= FUN4(&VAR18, VAR8, VAR2->VAR19) >> VAR10;
            VAR15[VAR12] = VAR13;
        }
        break;
    case VAR72:
        if (VAR11 == 2)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        break;
    case VAR73:
    case VAR74:
        VAR2->VAR52 = VAR11;
        break;
    }
    return 0;
}
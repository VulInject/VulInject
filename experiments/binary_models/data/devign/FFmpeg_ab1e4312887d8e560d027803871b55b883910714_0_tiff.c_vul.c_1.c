static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    switch (VAR2->VAR6 * 1000 + VAR2->VAR7 * 10 + VAR2->VAR8)
    {
    case 11:
        if (!VAR2->VAR9)
        {
            VAR2->VAR10->VAR11 = VAR12;
            break;
        }
    case 21:
    case 41:
    case 81:
        VAR2->VAR10->VAR11 = VAR2->VAR9 ? VAR13 : VAR14;
        break;
    case 243:
        if (VAR2->VAR15 == VAR16)
        {
            if (VAR2->VAR17[0] == 1 && VAR2->VAR17[1] == 1)
            {
                VAR2->VAR10->VAR11 = VAR18;
            }
            else if (VAR2->VAR17[0] == 2 && VAR2->VAR17[1] == 1)
            {
                VAR2->VAR10->VAR11 = VAR19;
            }
            else if (VAR2->VAR17[0] == 4 && VAR2->VAR17[1] == 1)
            {
                VAR2->VAR10->VAR11 = VAR20;
            }
            else if (VAR2->VAR17[0] == 1 && VAR2->VAR17[1] == 2)
            {
                VAR2->VAR10->VAR11 = VAR21;
            }
            else if (VAR2->VAR17[0] == 2 && VAR2->VAR17[1] == 2)
            {
                VAR2->VAR10->VAR11 = VAR22;
            }
            else if (VAR2->VAR17[0] == 4 && VAR2->VAR17[1] == 4)
            {
                VAR2->VAR10->VAR11 = VAR23;
            }
            else
            {
                FUN2(VAR2->VAR10, VAR24, "");
                return VAR25;
            }
        }
        else
            VAR2->VAR10->VAR11 = VAR26;
        break;
    case 161:
        VAR2->VAR10->VAR11 = VAR2->VAR27 ? VAR28 : VAR29;
        break;
    case 162:
        VAR2->VAR10->VAR11 = VAR30;
        break;
    case 322:
        VAR2->VAR10->VAR11 = VAR2->VAR27 ? VAR31 : VAR32;
        break;
    case 324:
        VAR2->VAR10->VAR11 = VAR33;
        break;
    case 483:
        VAR2->VAR10->VAR11 = VAR2->VAR27 ? VAR34 : VAR35;
        break;
    case 644:
        VAR2->VAR10->VAR11 = VAR2->VAR27 ? VAR36 : VAR37;
        break;
    case 1243:
        VAR2->VAR10->VAR11 = VAR38;
        break;
    case 1324:
        VAR2->VAR10->VAR11 = VAR39;
        break;
    case 1483:
        VAR2->VAR10->VAR11 = VAR2->VAR27 ? VAR40 : VAR41;
        break;
    case 1644:
        VAR2->VAR10->VAR11 = VAR2->VAR27 ? VAR42 : VAR43;
        break;
    default:
        FUN2(VAR2->VAR10, VAR24, "", VAR2->VAR7, VAR2->VAR8);
        return VAR44;
    }
    if (VAR2->VAR15 == VAR16)
    {
        const VAR45 *VAR46 = FUN3(VAR2->VAR10->VAR11);
        if ((VAR46->VAR47 & VAR48) || VAR46->VAR49 < 3)
        {
            FUN2(VAR2->VAR10, VAR24, "");
            return VAR44;
        }
    }
    if (VAR2->VAR50 != VAR2->VAR10->VAR50 || VAR2->VAR51 != VAR2->VAR10->VAR51)
    {
        VAR5 = FUN4(VAR2->VAR10, VAR2->VAR50, VAR2->VAR51);
        if (VAR5 < 0)
            return VAR5;
    }
    if ((VAR5 = FUN5(VAR2->VAR10, VAR4, 0)) < 0)
        return VAR5;
    if (VAR2->VAR10->VAR11 == VAR13)
    {
        memcpy(VAR4->VAR52->VAR53[1], VAR2->VAR54, sizeof(VAR2->VAR54));
    }
    return 0;
}
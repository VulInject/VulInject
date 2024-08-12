static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = (VAR8 *)VAR2->VAR10;
    unsigned char *VAR11 = (unsigned char *)VAR6;
    int VAR12;
    int VAR13, VAR14;
    unsigned char *VAR15;
    unsigned int VAR16 = VAR2->VAR16;
    unsigned int VAR17 = VAR2->VAR17;
    unsigned int VAR18;
    unsigned char VAR19, VAR20, VAR21, VAR22;
    int VAR23;
    unsigned int VAR24, VAR25;
    int VAR26;
    int VAR27 = VAR7;
    if (VAR7 == 0)
        return 0;
    if (VAR9->VAR28.VAR3[0])
        VAR2->FUN2(VAR2, &VAR9->VAR28);
    VAR9->VAR28.VAR29 = 0;
    VAR9->VAR28.VAR30 = VAR31;
    if (VAR2->FUN3(VAR2, &VAR9->VAR28) < 0)
    {
        FUN4(VAR2, VAR32, "");
        return -1;
    }
    VAR15 = VAR9->VAR28.VAR3[0];
    switch (VAR2->VAR33)
    {
    case VAR34:
        switch (VAR9->VAR35)
        {
        case VAR36:
            if (VAR9->VAR37 & VAR38)
            {
                VAR24 = *((unsigned int *)VAR11);
                VAR25 = *((unsigned int *)(VAR11 + 4));
                VAR18 = FUN5(VAR11 + 8, VAR24, VAR9->VAR39);
                if (VAR25 != VAR18)
                {
                    FUN4(VAR2, VAR32, "", VAR25, VAR18);
                }
                VAR18 = FUN5(VAR11 + 8 + VAR24, VAR27 - VAR24, VAR9->VAR39 + VAR25);
                if ((VAR9->VAR40 - VAR25) != VAR18)
                {
                    FUN4(VAR2, VAR32, "", VAR9->VAR40 - VAR25, VAR18);
                }
                VAR11 = VAR9->VAR39;
                VAR27 = VAR9->VAR40;
            }
            else
            {
                VAR18 = FUN5(VAR11, VAR27, VAR9->VAR39);
                if (VAR9->VAR40 != VAR18)
                {
                    FUN4(VAR2, VAR32, "", VAR9->VAR40, VAR18);
                }
                VAR11 = VAR9->VAR39;
                VAR27 = VAR18;
            }
            break;
        case VAR41:
            break;
        default:
            FUN4(VAR2, VAR32, "");
            return -1;
        }
        break;
    case VAR42:
        if ((VAR9->VAR35 == VAR43) && (VAR9->VAR44 == VAR45) && (VAR27 == VAR16 * VAR17 * 3))
            break;
        VAR26 = FUN6(&(VAR9->VAR46));
        if (VAR26 != VAR47)
        {
            FUN4(VAR2, VAR32, "", VAR26);
            return -1;
        }
        if (VAR9->VAR37 & VAR38)
        {
            VAR24 = *((unsigned int *)VAR11);
            VAR25 = *((unsigned int *)(VAR11 + 4));
            VAR9->VAR46.VAR48 = VAR11 + 8;
            VAR9->VAR46.VAR49 = VAR24;
            VAR9->VAR46.VAR50 = VAR9->VAR39;
            VAR9->VAR46.VAR51 = VAR25;
            VAR26 = FUN7(&(VAR9->VAR46), VAR52);
            if ((VAR26 != VAR47) && (VAR26 != VAR53))
            {
                FUN4(VAR2, VAR32, "", VAR26);
                return -1;
            }
            if (VAR25 != (unsigned int)(VAR9->VAR46.VAR54))
            {
                FUN4(VAR2, VAR32, "", VAR25, VAR9->VAR46.VAR54);
            }
            VAR26 = FUN6(&(VAR9->VAR46));
            if (VAR26 != VAR47)
            {
                FUN4(VAR2, VAR32, "", VAR26);
                return -1;
            }
            VAR9->VAR46.VAR48 = VAR11 + 8 + VAR24;
            VAR9->VAR46.VAR49 = VAR27 - VAR24;
            VAR9->VAR46.VAR50 = VAR9->VAR39 + VAR25;
            VAR9->VAR46.VAR51 = VAR25;
            VAR26 = FUN7(&(VAR9->VAR46), VAR52);
            if ((VAR26 != VAR47) && (VAR26 != VAR53))
            {
                FUN4(VAR2, VAR32, "", VAR26);
                return -1;
            }
            if ((VAR9->VAR40 - VAR25) != (unsigned int)(VAR9->VAR46.VAR54))
            {
                FUN4(VAR2, VAR32, "", VAR9->VAR40 - VAR25, VAR9->VAR46.VAR54);
            }
        }
        else
        {
            VAR9->VAR46.VAR48 = VAR11;
            VAR9->VAR46.VAR49 = VAR27;
            VAR9->VAR46.VAR50 = VAR9->VAR39;
            VAR9->VAR46.VAR51 = VAR9->VAR40;
            VAR26 = FUN7(&(VAR9->VAR46), VAR52);
            if ((VAR26 != VAR47) && (VAR26 != VAR53))
            {
                FUN4(VAR2, VAR32, "", VAR26);
                return -1;
            }
            if (VAR9->VAR40 != (unsigned int)(VAR9->VAR46.VAR54))
            {
                FUN4(VAR2, VAR32, "", VAR9->VAR40, VAR9->VAR46.VAR54);
            }
        }
        VAR11 = VAR9->VAR39;
        VAR27 = VAR9->VAR40;
        ;
        FUN4(VAR2, VAR32, "");
        return -1;
        break;
    default:
        FUN4(VAR2, VAR32, "");
        return -1;
    }
    if ((VAR2->VAR33 == VAR42) && (VAR9->VAR37 & VAR55))
    {
        switch (VAR9->VAR44)
        {
        case VAR56:
        case VAR45:
            for (VAR13 = 0; VAR13 < VAR17; VAR13++)
            {
                VAR12 = VAR13 * VAR16 * 3;
                VAR19 = VAR11[VAR12++];
                VAR23 = VAR11[VAR12++];
                VAR23 += (VAR11[VAR12++] << 8);
                for (VAR14 = 1; VAR14 < VAR16; VAR14++)
                {
                    VAR11[VAR12] = VAR19 -= VAR11[VAR12];
                    VAR23 -= (VAR11[VAR12 + 1] | (VAR11[VAR12 + 2] << 8));
                    VAR11[VAR12 + 1] = (VAR23)&0xff;
                    VAR11[VAR12 + 2] = ((VAR23) >> 8) & 0xff;
                    VAR12 += 3;
                }
            }
            break;
        case VAR57:
            for (VAR13 = 0; VAR13 < VAR17; VAR13++)
            {
                VAR12 = VAR13 * VAR16 * 2;
                VAR19 = VAR21 = VAR22 = 0;
                for (VAR14 = 0; VAR14 < VAR16 / 4; VAR14++)
                {
                    VAR11[VAR12] = VAR19 -= VAR11[VAR12];
                    VAR11[VAR12 + 1] = VAR19 -= VAR11[VAR12 + 1];
                    VAR11[VAR12 + 2] = VAR19 -= VAR11[VAR12 + 2];
                    VAR11[VAR12 + 3] = VAR19 -= VAR11[VAR12 + 3];
                    VAR11[VAR12 + 4] = VAR21 -= VAR11[VAR12 + 4];
                    VAR11[VAR12 + 5] = VAR21 -= VAR11[VAR12 + 5];
                    VAR11[VAR12 + 6] = VAR22 -= VAR11[VAR12 + 6];
                    VAR11[VAR12 + 7] = VAR22 -= VAR11[VAR12 + 7];
                    VAR12 += 8;
                }
            }
            break;
        case VAR58:
            for (VAR13 = 0; VAR13 < VAR17; VAR13++)
            {
                VAR12 = VAR13 * VAR16 / 2 * 3;
                VAR19 = VAR21 = VAR22 = 0;
                for (VAR14 = 0; VAR14 < VAR16 / 4; VAR14++)
                {
                    VAR11[VAR12] = VAR19 -= VAR11[VAR12];
                    VAR11[VAR12 + 1] = VAR19 -= VAR11[VAR12 + 1];
                    VAR11[VAR12 + 2] = VAR19 -= VAR11[VAR12 + 2];
                    VAR11[VAR12 + 3] = VAR19 -= VAR11[VAR12 + 3];
                    VAR11[VAR12 + 4] = VAR21 -= VAR11[VAR12 + 4];
                    VAR11[VAR12 + 5] = VAR22 -= VAR11[VAR12 + 5];
                    VAR12 += 6;
                }
            }
            break;
        case VAR59:
            for (VAR13 = 0; VAR13 < VAR17; VAR13++)
            {
                VAR12 = VAR13 * VAR16 * 2;
                VAR19 = VAR21 = VAR22 = 0;
                for (VAR14 = 0; VAR14 < VAR16 / 2; VAR14++)
                {
                    VAR11[VAR12] = VAR19 -= VAR11[VAR12];
                    VAR11[VAR12 + 1] = VAR19 -= VAR11[VAR12 + 1];
                    VAR11[VAR12 + 2] = VAR21 -= VAR11[VAR12 + 2];
                    VAR11[VAR12 + 3] = VAR22 -= VAR11[VAR12 + 3];
                    VAR12 += 4;
                }
            }
            break;
        case VAR60:
            for (VAR13 = 0; VAR13 < VAR17 / 2; VAR13++)
            {
                VAR12 = VAR13 * VAR16 * 3;
                VAR19 = VAR20 = VAR21 = VAR22 = 0;
                for (VAR14 = 0; VAR14 < VAR16 / 2; VAR14++)
                {
                    VAR11[VAR12] = VAR19 -= VAR11[VAR12];
                    VAR11[VAR12 + 1] = VAR19 -= VAR11[VAR12 + 1];
                    VAR11[VAR12 + 2] = VAR20 -= VAR11[VAR12 + 2];
                    VAR11[VAR12 + 3] = VAR20 -= VAR11[VAR12 + 3];
                    VAR11[VAR12 + 4] = VAR21 -= VAR11[VAR12 + 4];
                    VAR11[VAR12 + 5] = VAR22 -= VAR11[VAR12 + 5];
                    VAR12 += 6;
                }
            }
            break;
        default:
            FUN4(VAR2, VAR32, "");
            return -1;
        }
    }
    switch (VAR9->VAR44)
    {
    case VAR56:
        for (VAR13 = VAR17 - 1; VAR13 >= 0; VAR13--)
        {
            VAR12 = VAR13 * VAR9->VAR28.VAR61[0];
            for (VAR14 = 0; VAR14 < VAR16; VAR14++)
            {
                VAR15[VAR12++] = FUN8(VAR11[0], VAR11[1]);
                VAR15[VAR12++] = FUN9(VAR11[0], VAR11[1], VAR11[2]);
                VAR15[VAR12++] = FUN10(VAR11[0], VAR11[2]);
                VAR11 += 3;
            }
        }
        break;
    case VAR57:
        for (VAR13 = VAR17 - 1; VAR13 >= 0; VAR13--)
        {
            VAR12 = VAR13 * VAR9->VAR28.VAR61[0];
            for (VAR14 = 0; VAR14 < VAR16 / 4; VAR14++)
            {
                VAR15[VAR12++] = FUN8(VAR11[0], VAR11[4]);
                VAR15[VAR12++] = FUN9(VAR11[0], VAR11[4], VAR11[6]);
                VAR15[VAR12++] = FUN10(VAR11[0], VAR11[6]);
                VAR15[VAR12++] = FUN8(VAR11[1], VAR11[4]);
                VAR15[VAR12++] = FUN9(VAR11[1], VAR11[4], VAR11[6]);
                VAR15[VAR12++] = FUN10(VAR11[1], VAR11[6]);
                VAR15[VAR12++] = FUN8(VAR11[2], VAR11[5]);
                VAR15[VAR12++] = FUN9(VAR11[2], VAR11[5], VAR11[7]);
                VAR15[VAR12++] = FUN10(VAR11[2], VAR11[7]);
                VAR15[VAR12++] = FUN8(VAR11[3], VAR11[5]);
                VAR15[VAR12++] = FUN9(VAR11[3], VAR11[5], VAR11[7]);
                VAR15[VAR12++] = FUN10(VAR11[3], VAR11[7]);
                VAR11 += 8;
            }
        }
        break;
    case VAR45:
        for (VAR13 = VAR17 - 1; VAR13 >= 0; VAR13--)
        {
            VAR12 = VAR13 * VAR9->VAR28.VAR61[0];
            for (VAR14 = 0; VAR14 < VAR16; VAR14++)
            {
                VAR15[VAR12++] = VAR11[0];
                VAR15[VAR12++] = VAR11[1];
                VAR15[VAR12++] = VAR11[2];
                VAR11 += 3;
            }
        }
        break;
    case VAR58:
        for (VAR13 = VAR17 - 1; VAR13 >= 0; VAR13--)
        {
            VAR12 = VAR13 * VAR9->VAR28.VAR61[0];
            for (VAR14 = 0; VAR14 < VAR16 / 4; VAR14++)
            {
                VAR15[VAR12++] = FUN8(VAR11[0], VAR11[4]);
                VAR15[VAR12++] = FUN9(VAR11[0], VAR11[4], VAR11[5]);
                VAR15[VAR12++] = FUN10(VAR11[0], VAR11[5]);
                VAR15[VAR12++] = FUN8(VAR11[1], VAR11[4]);
                VAR15[VAR12++] = FUN9(VAR11[1], VAR11[4], VAR11[5]);
                VAR15[VAR12++] = FUN10(VAR11[1], VAR11[5]);
                VAR15[VAR12++] = FUN8(VAR11[2], VAR11[4]);
                VAR15[VAR12++] = FUN9(VAR11[2], VAR11[4], VAR11[5]);
                VAR15[VAR12++] = FUN10(VAR11[2], VAR11[5]);
                VAR15[VAR12++] = FUN8(VAR11[3], VAR11[4]);
                VAR15[VAR12++] = FUN9(VAR11[3], VAR11[4], VAR11[5]);
                VAR15[VAR12++] = FUN10(VAR11[3], VAR11[5]);
                VAR11 += 6;
            }
        }
        break;
    case VAR59:
        for (VAR13 = VAR17 - 1; VAR13 >= 0; VAR13--)
        {
            VAR12 = VAR13 * VAR9->VAR28.VAR61[0];
            for (VAR14 = 0; VAR14 < VAR16 / 2; VAR14++)
            {
                VAR15[VAR12++] = FUN8(VAR11[0], VAR11[2]);
                VAR15[VAR12++] = FUN9(VAR11[0], VAR11[2], VAR11[3]);
                VAR15[VAR12++] = FUN10(VAR11[0], VAR11[3]);
                VAR15[VAR12++] = FUN8(VAR11[1], VAR11[2]);
                VAR15[VAR12++] = FUN9(VAR11[1], VAR11[2], VAR11[3]);
                VAR15[VAR12++] = FUN10(VAR11[1], VAR11[3]);
                VAR11 += 4;
            }
        }
        break;
    case VAR60:
        for (VAR13 = VAR17 / 2 - 1; VAR13 >= 0; VAR13--)
        {
            VAR12 = 2 * VAR13 * VAR9->VAR28.VAR61[0];
            for (VAR14 = 0; VAR14 < VAR16 / 2; VAR14++)
            {
                VAR15[VAR12] = FUN8(VAR11[0], VAR11[4]);
                VAR15[VAR12 + 1] = FUN9(VAR11[0], VAR11[4], VAR11[5]);
                VAR15[VAR12 + 2] = FUN10(VAR11[0], VAR11[5]);
                VAR15[VAR12 + 3] = FUN8(VAR11[1], VAR11[4]);
                VAR15[VAR12 + 4] = FUN9(VAR11[1], VAR11[4], VAR11[5]);
                VAR15[VAR12 + 5] = FUN10(VAR11[1], VAR11[5]);
                VAR15[VAR12 - VAR9->VAR28.VAR61[0]] = FUN8(VAR11[2], VAR11[4]);
                VAR15[VAR12 - VAR9->VAR28.VAR61[0] + 1] = FUN9(VAR11[2], VAR11[4], VAR11[5]);
                VAR15[VAR12 - VAR9->VAR28.VAR61[0] + 2] = FUN10(VAR11[2], VAR11[5]);
                VAR15[VAR12 - VAR9->VAR28.VAR61[0] + 3] = FUN8(VAR11[3], VAR11[4]);
                VAR15[VAR12 - VAR9->VAR28.VAR61[0] + 4] = FUN9(VAR11[3], VAR11[4], VAR11[5]);
                VAR15[VAR12 - VAR9->VAR28.VAR61[0] + 5] = FUN10(VAR11[3], VAR11[5]);
                VAR12 += 6;
                VAR11 += 6;
            }
        }
        break;
    default:
        FUN4(VAR2, VAR32, "");
        return -1;
    }
    *VAR4 = sizeof(VAR62);
    *(VAR62 *)VAR3 = VAR9->VAR28;
    return VAR7;
}
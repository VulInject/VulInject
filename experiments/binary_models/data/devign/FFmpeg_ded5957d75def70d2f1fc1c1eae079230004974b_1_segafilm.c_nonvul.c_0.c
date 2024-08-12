static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    unsigned char VAR10[256];
    int VAR11, VAR12;
    unsigned int VAR13;
    unsigned int VAR14;
    VAR4->VAR15 = NULL;
    if (FUN2(VAR7, VAR10, 16) != 16)
        return FUN3(VAR16);
    VAR13 = FUN4(&VAR10[4]);
    VAR4->VAR17 = FUN4(&VAR10[8]);
    if (VAR4->VAR17 == 0)
    {
        if (FUN2(VAR7, VAR10, 20) != 20)
            return FUN3(VAR16);
        VAR4->VAR18 = VAR19;
        VAR4->VAR20 = 22050;
        VAR4->VAR21 = 1;
        VAR4->VAR22 = 8;
    }
    else
    {
        if (FUN2(VAR7, VAR10, 32) != 32)
            return FUN3(VAR16);
        VAR4->VAR20 = FUN5(&VAR10[24]);
        VAR4->VAR21 = VAR10[21];
        if (!VAR4->VAR21 || VAR4->VAR21 > 2)
        {
            FUN6(VAR2, VAR23, "", VAR4->VAR21);
            return VAR24;
        }
        VAR4->VAR22 = VAR10[22];
        if (VAR10[23] == 2)
            VAR4->VAR18 = VAR25;
        else if (VAR4->VAR21 > 0)
        {
            if (VAR4->VAR22 == 8)
                VAR4->VAR18 = VAR26;
            else if (VAR4->VAR22 == 16)
                VAR4->VAR18 = VAR27;
            else
                VAR4->VAR18 = VAR28;
        }
        else
            VAR4->VAR18 = VAR28;
    }
    if (FUN4(&VAR10[0]) != VAR29)
        return VAR24;
    if (FUN4(&VAR10[8]) == VAR30)
    {
        VAR4->VAR31 = VAR32;
    }
    else if (FUN4(&VAR10[8]) == VAR33)
    {
        VAR4->VAR31 = VAR34;
    }
    else
    {
        VAR4->VAR31 = VAR28;
    }
    if (VAR4->VAR31)
    {
        VAR9 = FUN7(VAR2, NULL);
        if (!VAR9)
            return FUN3(VAR35);
        VAR4->VAR36 = VAR9->VAR37;
        VAR9->VAR38->VAR39 = VAR40;
        VAR9->VAR38->VAR41 = VAR4->VAR31;
        VAR9->VAR38->VAR42 = 0;
        VAR9->VAR38->VAR43 = FUN4(&VAR10[16]);
        VAR9->VAR38->VAR44 = FUN4(&VAR10[12]);
        if (VAR4->VAR31 == VAR34)
        {
            if (VAR10[20] == 24)
            {
                VAR9->VAR38->VAR45 = VAR46;
            }
            else
            {
                FUN6(VAR2, VAR23, "", VAR10[20]);
                return -1;
            }
        }
    }
    if (VAR4->VAR18)
    {
        VAR9 = FUN7(VAR2, NULL);
        if (!VAR9)
            return FUN3(VAR35);
        VAR4->VAR47 = VAR9->VAR37;
        VAR9->VAR38->VAR39 = VAR48;
        VAR9->VAR38->VAR41 = VAR4->VAR18;
        VAR9->VAR38->VAR42 = 1;
        VAR9->VAR38->VAR49 = VAR4->VAR21;
        VAR9->VAR38->VAR50 = VAR4->VAR20;
        if (VAR4->VAR18 == VAR25)
        {
            VAR9->VAR38->VAR51 = 18 * 8 / 32;
            VAR9->VAR38->VAR52 = VAR9->VAR38->VAR49 * 18;
            VAR9->VAR53 = VAR54;
        }
        else
        {
            VAR9->VAR38->VAR51 = VAR4->VAR22;
            VAR9->VAR38->VAR52 = VAR9->VAR38->VAR49 * VAR9->VAR38->VAR51 / 8;
        }
        VAR9->VAR38->VAR55 = VAR9->VAR38->VAR49 * VAR9->VAR38->VAR50 * VAR9->VAR38->VAR51;
    }
    if (FUN2(VAR7, VAR10, 16) != 16)
        return FUN3(VAR16);
    if (FUN4(&VAR10[0]) != VAR56)
        return VAR24;
    VAR4->VAR57 = FUN4(&VAR10[8]);
    VAR4->VAR58 = FUN4(&VAR10[12]);
    if (VAR4->VAR58 >= VAR59 / sizeof(VAR60))
        return -1;
    VAR4->VAR15 = FUN8(VAR4->VAR58 * sizeof(VAR60));
    if (!VAR4->VAR15)
        return FUN3(VAR35);
    for (VAR11 = 0; VAR11 < VAR2->VAR61; VAR11++)
    {
        VAR9 = VAR2->VAR62[VAR11];
        if (VAR9->VAR38->VAR39 == VAR40)
            FUN9(VAR9, 33, 1, VAR4->VAR57);
        else
            FUN9(VAR9, 64, 1, VAR4->VAR20);
    }
    VAR14 = 0;
    for (VAR11 = 0; VAR11 < VAR4->VAR58; VAR11++)
    {
        if (FUN2(VAR7, VAR10, 16) != 16)
        {
            VAR12 = FUN3(VAR16);
            goto VAR63;
        }
        VAR4->VAR15[VAR11].VAR64 = VAR13 + FUN4(&VAR10[0]);
        VAR4->VAR15[VAR11].VAR65 = FUN4(&VAR10[4]);
        if (VAR4->VAR15[VAR11].VAR65 > VAR66 / 4)
        {
            VAR12 = VAR24;
            goto VAR63;
        }
        if (FUN4(&VAR10[8]) == 0xFFFFFFFF)
        {
            VAR4->VAR15[VAR11].VAR67 = VAR4->VAR47;
            VAR4->VAR15[VAR11].VAR68 = VAR14;
            if (VAR4->VAR18 == VAR25)
                VAR14 += (VAR4->VAR15[VAR11].VAR65 * 32 / (18 * VAR4->VAR21));
            else if (VAR4->VAR18 != VAR28)
                VAR14 += (VAR4->VAR15[VAR11].VAR65 / (VAR4->VAR21 * VAR4->VAR22 / 8));
        }
        else
        {
            VAR4->VAR15[VAR11].VAR67 = VAR4->VAR36;
            VAR4->VAR15[VAR11].VAR68 = FUN4(&VAR10[8]) & 0x7FFFFFFF;
            VAR4->VAR15[VAR11].VAR69 = (VAR10[8] & 0x80) ? 0 : 1;
        }
    }
    VAR4->VAR70 = 0;
    return 0;
VAR63:
    FUN10(VAR2);
    return VAR12;
}
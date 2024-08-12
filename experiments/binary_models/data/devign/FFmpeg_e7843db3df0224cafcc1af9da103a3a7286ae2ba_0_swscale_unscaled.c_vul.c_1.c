static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    const enum PixelFormat VAR10 = VAR2->VAR10;
    const enum PixelFormat VAR11 = VAR2->VAR11;
    const int VAR12 = (VAR2->VAR13 + 7) >> 3;
    const int VAR14 = (VAR2->VAR15 + 7) >> 3;
    const int VAR16 = VAR2->VAR13;
    const int VAR17 = VAR2->VAR15;
    void (*VAR18)(const VAR3 *VAR4, VAR3 *VAR8, int VAR19) = NULL;
    if (FUN2(VAR10) && FUN2(VAR11))
    {
        if (FUN3(VAR20, VAR21) || FUN3(VAR22, VAR23) || FUN3(VAR23, VAR22) || FUN3(VAR21, VAR20))
            VAR18 = VAR24;
        else if (FUN3(VAR20, VAR22) || FUN3(VAR22, VAR20))
            VAR18 = VAR25;
        else if (FUN3(VAR20, VAR23) || FUN3(VAR22, VAR21))
            VAR18 = VAR26;
        else if (FUN3(VAR23, VAR21) || FUN3(VAR21, VAR23))
            VAR18 = VAR27;
        else if (FUN3(VAR23, VAR20) || FUN3(VAR21, VAR22))
            VAR18 = VAR28;
    }
    else if ((FUN4(VAR10) && FUN4(VAR11)) || (FUN5(VAR10) && FUN5(VAR11)))
    {
        switch (VAR16 | (VAR17 << 16))
        {
        case 0x000F0010:
            VAR18 = VAR29;
            break;
        case 0x000F0018:
            VAR18 = VAR30;
            break;
        case 0x000F0020:
            VAR18 = VAR31;
            break;
        case 0x0010000F:
            VAR18 = VAR32;
            break;
        case 0x00100018:
            VAR18 = VAR33;
            break;
        case 0x00100020:
            VAR18 = VAR34;
            break;
        case 0x0018000F:
            VAR18 = VAR35;
            break;
        case 0x00180010:
            VAR18 = VAR36;
            break;
        case 0x00180020:
            VAR18 = VAR37;
            break;
        case 0x0020000F:
            VAR18 = VAR38;
            break;
        case 0x00200010:
            VAR18 = VAR39;
            break;
        case 0x00200018:
            VAR18 = VAR40;
            break;
        }
    }
    else if ((FUN4(VAR10) && FUN5(VAR11)) || (FUN5(VAR10) && FUN4(VAR11)))
    {
        switch (VAR16 | (VAR17 << 16))
        {
        case 0x000C000C:
            VAR18 = VAR41;
            break;
        case 0x000F000F:
            VAR18 = VAR42;
            break;
        case 0x000F0010:
            VAR18 = VAR43;
            break;
        case 0x000F0018:
            VAR18 = VAR44;
            break;
        case 0x000F0020:
            VAR18 = VAR45;
            break;
        case 0x0010000F:
            VAR18 = VAR46;
            break;
        case 0x00100010:
            VAR18 = VAR47;
            break;
        case 0x00100018:
            VAR18 = VAR48;
            break;
        case 0x00100020:
            VAR18 = VAR49;
            break;
        case 0x0018000F:
            VAR18 = VAR50;
            break;
        case 0x00180010:
            VAR18 = VAR51;
            break;
        case 0x00180018:
            VAR18 = VAR52;
            break;
        case 0x00180020:
            VAR18 = VAR53;
            break;
        case 0x0020000F:
            VAR18 = VAR54;
            break;
        case 0x00200010:
            VAR18 = VAR55;
            break;
        case 0x00200018:
            VAR18 = VAR56;
            break;
        }
    }
    if (!VAR18)
    {
        FUN6(VAR2, VAR57, "", FUN7(VAR10), FUN7(VAR11));
    }
    else
    {
        const VAR3 *VAR58 = VAR4[0];
        VAR3 *VAR59 = VAR8[0];
        if ((VAR10 == VAR60 || VAR10 == VAR61) && !FUN2(VAR11))
            VAR58 += VAR62;
        if ((VAR11 == VAR60 || VAR11 == VAR61) && !FUN2(VAR10))
            VAR59 += VAR62;
        if (VAR9[0] * VAR12 == VAR5[0] * VAR14 && VAR5[0] > 0 && !(VAR5[0] % VAR12))
            FUN8(VAR58, VAR59 + VAR9[0] * VAR6, VAR7 * VAR5[0]);
        else
        {
            int VAR63;
            VAR59 += VAR9[0] * VAR6;
            for (VAR63 = 0; VAR63 < VAR7; VAR63++)
            {
                FUN8(VAR58, VAR59, VAR2->VAR64 * VAR12);
                VAR58 += VAR5[0];
                VAR59 += VAR9[0];
            }
        }
    }
    return VAR7;
}
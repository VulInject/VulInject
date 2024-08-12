int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14, *VAR15;
    const VAR7 *VAR16;
    int VAR17;
    int VAR18;
    int VAR19, VAR20;
    int VAR21 = 0;
    VAR22 *VAR23 = VAR3;
    VAR12->VAR24 = 0;
    VAR15 = VAR8;
    VAR14 = VAR8 + VAR9;
    while (VAR15 < VAR14)
    {
        VAR18 = FUN2(VAR12, &VAR15, VAR14, &VAR16, &VAR17);
        if (VAR18 < 0)
        {
            goto VAR25;
        }
        else if (VAR17 > (1U << 29))
        {
            FUN3(VAR2, VAR26, "", VAR18, VAR17, VAR9);
            return VAR27;
        }
        else
        {
            FUN3(VAR2, VAR28, "", VAR18, VAR14 - VAR15);
            FUN4(&VAR12->VAR29, VAR16, VAR17 * 8);
            VAR12->VAR18 = VAR18;
            if (VAR12->VAR2->VAR30 & VAR31)
                FUN3(VAR2, VAR28, "", VAR18);
            if (VAR18 >= 0xd0 && VAR18 <= 0xd7)
                FUN3(VAR2, VAR28, "", VAR18 & 0x0f);
            else if (VAR18 >= VAR32 && VAR18 <= VAR33)
                FUN5(VAR12);
            else if (VAR18 == VAR34)
                FUN6(VAR12);
            switch (VAR18)
            {
            case VAR35:
                VAR12->VAR36 = 0;
                VAR12->VAR37 = 0;
                break;
            case VAR38:
                FUN7(VAR12);
                break;
            case VAR39:
                if ((VAR21 = FUN8(VAR12)) < 0)
                {
                    FUN3(VAR2, VAR26, "");
                    return VAR21;
                }
                break;
            case VAR40:
            case VAR41:
                VAR12->VAR42 = 0;
                VAR12->VAR43 = 0;
                VAR12->VAR44 = 0;
                if ((VAR21 = FUN9(VAR12)) < 0)
                    return VAR21;
                break;
            case VAR45:
                VAR12->VAR42 = 0;
                VAR12->VAR43 = 0;
                VAR12->VAR44 = 1;
                if ((VAR21 = FUN9(VAR12)) < 0)
                    return VAR21;
                break;
            case VAR46:
                VAR12->VAR42 = 1;
                VAR12->VAR43 = 0;
                VAR12->VAR44 = 0;
                if ((VAR21 = FUN9(VAR12)) < 0)
                    return VAR21;
                break;
            case VAR47:
                VAR12->VAR42 = 1;
                VAR12->VAR43 = 1;
                VAR12->VAR44 = 0;
                if ((VAR21 = FUN9(VAR12)) < 0)
                    return VAR21;
                break;
            case VAR48:
                if (!VAR49 || (VAR21 = FUN10(VAR12)) < 0)
                    return VAR21;
                break;
            case VAR50:
            VAR51:
                VAR12->VAR52 = 0;
                if (!VAR12->VAR24)
                {
                    FUN3(VAR2, VAR53, "");
                    break;
                }
                if (VAR12->VAR54)
                {
                    VAR12->VAR55 ^= 1;
                    if (VAR12->VAR55 == !VAR12->VAR56)
                        break;
                }
                *VAR23 = *VAR12->VAR57;
                *VAR4 = sizeof(VAR22);
                if (!VAR12->VAR42)
                {
                    VAR23->VAR58 = FUN11(VAR12->VAR59[0], VAR12->VAR59[1], VAR12->VAR59[2]);
                    VAR23->VAR60 = 0;
                    VAR23->VAR61 = VAR12->VAR61;
                    memset(VAR23->VAR61, VAR23->VAR58, (VAR12->VAR62 + 15) / 16);
                    if (VAR2->VAR30 & VAR63)
                        FUN3(VAR2, VAR28, "", VAR23->VAR58);
                    VAR23->VAR58 *= VAR64;
                }
                goto VAR25;
            case VAR65:
                if ((VAR21 = FUN12(VAR12, NULL, NULL)) < 0 && (VAR2->VAR66 & VAR67))
                    return VAR21;
                break;
            case VAR68:
                FUN13(VAR12);
                break;
            case VAR69:
            case VAR70:
            case VAR71:
            case VAR72:
            case VAR73:
            case VAR74:
            case VAR75:
            case VAR76:
            case VAR77:
            case VAR78:
                FUN3(VAR2, VAR26, "", VAR18);
                break;
            }
            VAR15 += (FUN14(&VAR12->VAR29) + 7) / 8;
            FUN3(VAR2, VAR28, "", (FUN14(&VAR12->VAR29) + 7) / 8, FUN14(&VAR12->VAR29));
        }
    }
    if (VAR12->VAR24)
    {
        FUN3(VAR2, VAR53, "");
        goto VAR51;
    }
    FUN3(VAR2, VAR79, "");
    return VAR27;
VAR25:
    if (VAR12->VAR80)
    {
        VAR7 *VAR81 = VAR12->VAR57->VAR3[VAR12->VAR80];
        FUN15(VAR2->VAR82 == VAR83 || VAR2->VAR82 == VAR84 || VAR2->VAR82 == VAR85 || VAR2->VAR82 == VAR86);
        for (VAR19 = 0; VAR19 < VAR12->VAR87; VAR19++)
        {
            for (VAR20 = VAR12->VAR62 - 1; VAR20; VAR20--)
                VAR81[VAR20] = (VAR81[VAR20 / 2] + VAR81[(VAR20 + 1) / 2]) >> 1;
            VAR81 += VAR12->VAR88[VAR12->VAR80];
        }
    }
    if (VAR12->VAR89)
    {
        VAR7 *VAR90 = &((VAR7 *)VAR12->VAR57->VAR3[VAR12->VAR89])[(VAR12->VAR91 - 1) * VAR12->VAR88[VAR12->VAR89]];
        FUN15(VAR2->VAR82 == VAR83 || VAR2->VAR82 == VAR84 || VAR2->VAR82 == VAR92 || VAR2->VAR82 == VAR93);
        for (VAR19 = VAR12->VAR91 - 1; VAR19; VAR19--)
        {
            VAR7 *VAR94 = &((VAR7 *)VAR12->VAR57->VAR3[VAR12->VAR89])[VAR19 / 2 * VAR12->VAR88[VAR12->VAR89]];
            VAR7 *VAR95 = &((VAR7 *)VAR12->VAR57->VAR3[VAR12->VAR89])[(VAR19 + 1) / 2 * VAR12->VAR88[VAR12->VAR89]];
            if (VAR94 == VAR95)
            {
                memcpy(VAR90, VAR94, VAR12->VAR62);
            }
            else
            {
                for (VAR20 = 0; VAR20 < VAR12->VAR62; VAR20++)
                    VAR90[VAR20] = (VAR94[VAR20] + VAR95[VAR20]) >> 1;
            }
            VAR90 -= VAR12->VAR88[VAR12->VAR89];
        }
    }
    if (VAR12->VAR96 && (VAR12->VAR2->VAR97 & VAR98))
    {
        int VAR99, VAR100, VAR101;
        FUN16(VAR12->VAR2->VAR82, &VAR99, &VAR100);
        for (VAR20 = 0; VAR20 < 4; VAR20++)
        {
            VAR7 *VAR90 = VAR12->VAR57->VAR3[VAR20];
            int VAR102 = VAR12->VAR62;
            int VAR103 = VAR12->VAR91;
            if (VAR20 && VAR20 < 3)
            {
                VAR102 = -((-VAR102) >> VAR99);
                VAR103 = -((-VAR103) >> VAR100);
            }
            if (VAR90)
            {
                VAR7 *VAR104 = VAR90 + VAR12->VAR88[VAR20] * (VAR103 - 1);
                for (VAR19 = 0; VAR19 < VAR103 / 2; VAR19++)
                {
                    for (VAR101 = 0; VAR101 < VAR102; VAR101++)
                        FUN17(int, VAR90[VAR101], VAR104[VAR101]);
                    VAR90 += VAR12->VAR88[VAR20];
                    VAR104 -= VAR12->VAR88[VAR20];
                }
            }
        }
    }
    FUN3(VAR2, VAR28, "", VAR14 - VAR15);
    return VAR15 - VAR8;
}
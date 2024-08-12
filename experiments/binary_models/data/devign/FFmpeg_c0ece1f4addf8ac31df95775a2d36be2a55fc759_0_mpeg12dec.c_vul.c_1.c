static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    uint8_t VAR9[64];
    int VAR10;
    if (VAR2->VAR11 == VAR12)
    {
        VAR2->VAR13 = FUN2(1.0 / VAR14[VAR7->VAR15], 255);
    }
    else
    {
        if (VAR7->VAR15 > 1)
        {
            AVRational VAR16 = FUN3(FUN4(VAR17[VAR7->VAR15], (VAR18){VAR4->VAR19.VAR20, VAR4->VAR19.VAR21}), (VAR18){VAR7->VAR20, VAR7->VAR21});
            if ((VAR4->VAR19.VAR20 == 0) || (VAR4->VAR19.VAR21 == 0) || (FUN5(VAR16, (VAR18){4, 3}) && FUN5(VAR16, (VAR18){16, 9})))
            {
                VAR7->VAR2->VAR13 = FUN4(VAR17[VAR7->VAR15], (VAR18){VAR7->VAR20, VAR7->VAR21});
            }
            else
            {
                VAR7->VAR2->VAR13 = FUN4(VAR17[VAR7->VAR15], (VAR18){VAR4->VAR19.VAR20, VAR4->VAR19.VAR21});
                FUN6(VAR2, "", VAR17[VAR7->VAR15].VAR22, VAR17[VAR7->VAR15].VAR23);
                FUN6(VAR2, "", VAR7->VAR2->VAR13.VAR22, VAR7->VAR2->VAR13.VAR23);
            }
        }
        else
        {
            VAR7->VAR2->VAR13 = VAR17[VAR7->VAR15];
        }
    }
    if (FUN7(VAR7->VAR20, VAR7->VAR21, VAR2->VAR13) < 0)
    {
        FUN8(VAR2, VAR24, "", VAR2->VAR13.VAR22, VAR2->VAR13.VAR23);
        VAR2->VAR13 = (VAR18){0, 1};
    }
    if ((VAR4->VAR25 == 0) || VAR2->VAR26 != VAR7->VAR20 || VAR2->VAR27 != VAR7->VAR21 || VAR4->VAR28 != VAR7->VAR20 || VAR4->VAR29 != VAR7->VAR21 || FUN5(VAR4->VAR30, VAR7->VAR2->VAR13) || (VAR4->VAR31 != VAR7->VAR32 && FUN9(VAR7->VAR21, 16) != FUN9(VAR7->VAR21, 32)) || 0)
    {
        if (VAR4->VAR25)
        {
            ParseContext VAR33 = VAR7->VAR34;
            VAR7->VAR34.VAR35 = 0;
            FUN10(VAR7);
            VAR7->VAR34 = VAR33;
            VAR4->VAR25 = 0;
        }
        VAR10 = FUN11(VAR2, VAR7->VAR20, VAR7->VAR21);
        if (VAR10 < 0)
            return VAR10;
        if (VAR2->VAR11 == VAR36 && VAR7->VAR37)
        {
            VAR2->VAR38 = VAR7->VAR37;
        }
        else if (VAR2->VAR11 == VAR12 && VAR7->VAR37 && (VAR7->VAR37 != 0x3FFFF * 400 || VAR7->VAR39 != 0xFFFF))
        {
            VAR2->VAR37 = VAR7->VAR37;
        }
        VAR4->VAR30 = VAR7->VAR2->VAR13;
        VAR4->VAR28 = VAR7->VAR20;
        VAR4->VAR29 = VAR7->VAR21;
        VAR4->VAR31 = VAR7->VAR32;
        VAR2->VAR40 = !VAR7->VAR41;
        if (VAR2->VAR11 == VAR12)
        {
            VAR2->VAR42 = VAR43[VAR7->VAR44];
            VAR2->VAR45 = 1;
            VAR2->VAR46 = VAR47;
        }
        else
        {
            FUN12(&VAR7->VAR2->VAR42.VAR22, &VAR7->VAR2->VAR42.VAR23, VAR43[VAR7->VAR44].VAR22 * VAR4->VAR48.VAR22, VAR43[VAR7->VAR44].VAR23 * VAR4->VAR48.VAR23, 1 << 30);
            VAR2->VAR45 = 2;
            switch (VAR7->VAR49)
            {
            case 1:
                VAR2->VAR46 = VAR50;
                break;
            case 2:
            case 3:
                VAR2->VAR46 = VAR51;
                break;
            default:
                FUN13(0);
            }
        }
        VAR2->VAR52 = FUN14(VAR2);
        FUN15(VAR2);
        memcpy(VAR9, VAR7->VAR53.VAR54, 64 * sizeof(VAR55));
        FUN16(VAR7);
        if ((VAR10 = FUN17(VAR7)) < 0)
            return VAR10;
        FUN18(VAR7->VAR56, VAR9, VAR7->VAR53.VAR54);
        FUN18(VAR7->VAR57, VAR9, VAR7->VAR53.VAR54);
        FUN18(VAR7->VAR58, VAR9, VAR7->VAR53.VAR54);
        FUN18(VAR7->VAR59, VAR9, VAR7->VAR53.VAR54);
        VAR4->VAR25 = 1;
    }
    return 0;
}
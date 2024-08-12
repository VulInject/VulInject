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
    FUN7(VAR7->VAR2, VAR7->VAR2->VAR13);
    if ((VAR4->VAR24 == 0) || VAR2->VAR25 != VAR7->VAR20 || VAR2->VAR26 != VAR7->VAR21 || VAR4->VAR27 != VAR7->VAR20 || VAR4->VAR28 != VAR7->VAR21 || FUN5(VAR4->VAR29, VAR7->VAR2->VAR13) || (VAR4->VAR30 != VAR7->VAR31 && FUN8(VAR7->VAR21, 16) != FUN8(VAR7->VAR21, 32)) || 0)
    {
        if (VAR4->VAR24)
        {
            ParseContext VAR32 = VAR7->VAR33;
            VAR7->VAR33.VAR34 = 0;
            FUN9(VAR7);
            VAR7->VAR33 = VAR32;
            VAR4->VAR24 = 0;
        }
        VAR10 = FUN10(VAR2, VAR7->VAR20, VAR7->VAR21);
        if (VAR10 < 0)
            return VAR10;
        if (VAR2->VAR11 == VAR35 && VAR7->VAR36)
        {
            VAR2->VAR37 = VAR7->VAR36;
        }
        else if (VAR2->VAR11 == VAR12 && VAR7->VAR36 && (VAR7->VAR36 != 0x3FFFF * 400 || VAR7->VAR38 != 0xFFFF))
        {
            VAR2->VAR36 = VAR7->VAR36;
        }
        VAR4->VAR29 = VAR7->VAR2->VAR13;
        VAR4->VAR27 = VAR7->VAR20;
        VAR4->VAR28 = VAR7->VAR21;
        VAR4->VAR30 = VAR7->VAR31;
        VAR2->VAR39 = !VAR7->VAR40;
        if (VAR2->VAR11 == VAR12)
        {
            VAR2->VAR41 = VAR42[VAR7->VAR43];
            VAR2->VAR44 = 1;
        }
        else
        {
            FUN11(&VAR7->VAR2->VAR41.VAR22, &VAR7->VAR2->VAR41.VAR23, VAR42[VAR7->VAR43].VAR22 * VAR4->VAR45.VAR22, VAR42[VAR7->VAR43].VAR23 * VAR4->VAR45.VAR23, 1 << 30);
            VAR2->VAR44 = 2;
        }
        VAR2->VAR46 = FUN12(VAR2);
        FUN13(VAR2);
        memcpy(VAR9, VAR7->VAR47.VAR48, 64 * sizeof(VAR49));
        FUN14(VAR7);
        if ((VAR10 = FUN15(VAR7)) < 0)
            return VAR10;
        FUN16(VAR7->VAR50, VAR9, VAR7->VAR47.VAR48);
        FUN16(VAR7->VAR51, VAR9, VAR7->VAR47.VAR48);
        FUN16(VAR7->VAR52, VAR9, VAR7->VAR47.VAR48);
        FUN16(VAR7->VAR53, VAR9, VAR7->VAR47.VAR48);
        VAR4->VAR24 = 1;
    }
    return 0;
}
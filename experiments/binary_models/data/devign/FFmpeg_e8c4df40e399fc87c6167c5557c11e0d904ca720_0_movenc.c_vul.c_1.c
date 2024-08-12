static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR6->VAR12[VAR4->VAR13];
    VAR14 *VAR15 = VAR11->VAR15;
    unsigned int VAR16 = 0;
    int VAR17 = VAR4->VAR17;
    if (FUN2(VAR2->VAR9))
        return 0;
    if (!VAR17)
        return 0;
    if (VAR15->VAR18 == VAR19)
    {
        static uint16_t VAR20[16] = {13, 14, 16, 18, 20, 21, 27, 32, 6, 0, 0, 0, 0, 0, 0, 0};
        int VAR21 = 0;
        while (VAR21 < VAR17 && VAR16 < 100)
        {
            VAR21 += VAR20[(VAR4->VAR22[VAR21] >> 3) & 0x0F];
            VAR16++;
        }
        if (VAR16 > 1)
        {
            FUN3(VAR2, VAR23, "");
            return -1;
        }
    }
    else if (VAR11->VAR24)
        VAR16 = VAR17 / VAR11->VAR24;
    else
        VAR16 = 1;
    if (VAR11->VAR25 == 0 && VAR15->VAR26 > 0)
    {
        VAR11->VAR25 = VAR15->VAR26;
        VAR11->VAR27 = FUN4(VAR11->VAR25);
        memcpy(VAR11->VAR27, VAR15->VAR28, VAR11->VAR25);
    }
    if (VAR15->VAR18 == VAR29 && VAR11->VAR25 > 0 && *(VAR30 *)VAR11->VAR27 != 1)
    {
        int VAR31 = FUN5(VAR4->VAR22, &VAR4->VAR22, &VAR4->VAR17);
        if (VAR31 < 0)
            return VAR31;
        assert(VAR4->VAR17);
        VAR17 = VAR4->VAR17;
    }
    else if (VAR15->VAR18 == VAR32 && !VAR11->VAR25)
    {
        VAR11->VAR25 = VAR17;
        VAR11->VAR27 = FUN4(VAR17);
        memcpy(VAR11->VAR27, VAR4->VAR22, VAR17);
    }
    if (!(VAR11->VAR33 % VAR34))
    {
        VAR11->VAR35 = FUN6(VAR11->VAR35, (VAR11->VAR33 + VAR34) * sizeof(*VAR11->VAR35));
        if (!VAR11->VAR35)
            return -1;
    }
    VAR11->VAR35[VAR11->VAR33].VAR36 = FUN7(VAR9);
    VAR11->VAR35[VAR11->VAR33].VAR16 = VAR16;
    VAR11->VAR35[VAR11->VAR33].VAR17 = VAR17;
    VAR11->VAR35[VAR11->VAR33].VAR37 = VAR16;
    VAR11->VAR35[VAR11->VAR33].VAR38 = VAR4->VAR38;
    VAR11->VAR39 = VAR4->VAR38 - VAR11->VAR35[0].VAR38 + VAR4->VAR40;
    if (VAR4->VAR41 == VAR42)
    {
        FUN3(VAR2, VAR43, "");
        VAR4->VAR41 = VAR4->VAR38;
    }
    if (VAR4->VAR38 != VAR4->VAR41)
        VAR11->VAR44 = 1;
    VAR11->VAR35[VAR11->VAR33].VAR45 = VAR4->VAR41 - VAR4->VAR38;
    VAR11->VAR35[VAR11->VAR33].VAR46 = !!(VAR4->VAR47 & VAR48);
    if (VAR11->VAR35[VAR11->VAR33].VAR46)
        VAR11->VAR49++;
    VAR11->VAR33++;
    VAR11->VAR50 += VAR16;
    VAR6->VAR51 += VAR17;
    FUN8(VAR9, VAR4->VAR22, VAR17);
    FUN9(VAR9);
    return 0;
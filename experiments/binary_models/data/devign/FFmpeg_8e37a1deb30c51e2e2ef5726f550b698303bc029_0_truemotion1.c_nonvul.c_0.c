static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = 0;
    int VAR5;
    struct frame_header VAR6;
    uint8_t VAR7[128];
    const VAR8 *VAR9;
    VAR6.VAR10 = ((VAR2->VAR11[0] >> 5) | (VAR2->VAR11[0] << 3)) & 0x7f;
    if (VAR2->VAR11[0] < 0x10)
    {
        FUN2(VAR2->VAR12, VAR13, "", VAR2->VAR11[0]);
        return -1;
    }
    memset(VAR7, 0, 128);
    for (VAR3 = 1; VAR3 < VAR6.VAR10; VAR3++)
        VAR7[VAR3 - 1] = VAR2->VAR11[VAR3] ^ VAR2->VAR11[VAR3 + 1];
    VAR6.VAR14 = VAR7[0];
    VAR6.VAR15 = VAR7[1];
    VAR6.VAR16 = VAR7[2];
    VAR6.VAR17 = FUN3(&VAR7[3]);
    VAR6.VAR18 = FUN3(&VAR7[5]);
    VAR6.VAR19 = FUN3(&VAR7[7]);
    VAR6.VAR20 = VAR7[9];
    VAR6.VAR21 = VAR7[10];
    VAR6.VAR22 = VAR7[11];
    VAR6.VAR23 = VAR7[12];
    if (VAR6.VAR20 >= 2)
    {
        if (VAR6.VAR21 > 3)
        {
            FUN2(VAR2->VAR12, VAR13, "", VAR6.VAR21);
            return -1;
        }
        else if ((VAR6.VAR21 == 2) || (VAR6.VAR21 == 3))
        {
            VAR2->VAR22 = VAR6.VAR22;
            if (!(VAR2->VAR22 & VAR24))
                VAR2->VAR22 |= VAR25;
        }
        else
            VAR2->VAR22 = VAR25;
    }
    else
        VAR2->VAR22 = VAR25;
    if (VAR2->VAR22 & VAR26)
    {
        FUN2(VAR2->VAR12, VAR27, "");
        VAR2->VAR28 = VAR6.VAR29;
        VAR2->VAR30 = VAR6.VAR31;
        VAR2->VAR32 = VAR6.VAR33;
        VAR2->VAR34 = VAR6.VAR35;
        return -1;
    }
    else
    {
        VAR2->VAR28 = VAR6.VAR18;
        VAR2->VAR30 = VAR6.VAR17;
        if (VAR6.VAR21 < 2)
        {
            if ((VAR2->VAR28 < 213) && (VAR2->VAR30 >= 176))
            {
                VAR2->VAR22 |= VAR36;
                FUN2(VAR2->VAR12, VAR27, "");
            }
        }
    }
    if (VAR6.VAR14 >= 17)
    {
        FUN2(VAR2->VAR12, VAR13, "", VAR6.VAR14);
        return -1;
    }
    if ((VAR6.VAR15 != VAR2->VAR37) || (VAR6.VAR16 != VAR2->VAR38))
        FUN4(VAR2, VAR6.VAR15);
    if ((VAR6.VAR14 & 1) && VAR6.VAR21)
        VAR9 = VAR39;
    else
    {
        if (VAR6.VAR16 > 0 && VAR6.VAR16 < 4)
            VAR9 = VAR40[VAR6.VAR16 - 1];
        else
        {
            FUN2(VAR2->VAR12, VAR13, "", VAR6.VAR16);
            return -1;
        }
    }
    if (VAR41[VAR6.VAR14].VAR42 == VAR43)
    {
        VAR5 = VAR44;
        VAR4 = 1;
    }
    else
        VAR5 = VAR45;
    VAR2->VAR28 >>= VAR4;
    if (FUN5(VAR2->VAR28, VAR2->VAR30, 0, VAR2->VAR12) < 0)
        return -1;
    if (VAR2->VAR28 != VAR2->VAR12->VAR29 || VAR2->VAR30 != VAR2->VAR12->VAR31 || VAR5 != VAR2->VAR12->VAR46)
    {
        if (VAR2->VAR47.VAR48[0])
            VAR2->VAR12->FUN6(VAR2->VAR12, &VAR2->VAR47);
        VAR2->VAR12->VAR49 = (VAR50){1 << VAR4, 1};
        VAR2->VAR12->VAR46 = VAR5;
        FUN7(VAR2->VAR12, VAR2->VAR28, VAR2->VAR30);
        FUN8(&VAR2->VAR51, &VAR2->VAR52, VAR2->VAR12->VAR29 * sizeof(unsigned int));
    }
    VAR2->VAR53 = ((VAR2->VAR12->VAR29 >> (2 - VAR4)) + 7) >> 3;
    if ((VAR6.VAR15 != VAR2->VAR37) || (VAR6.VAR16 != VAR2->VAR38))
    {
        if (VAR41[VAR6.VAR14].VAR42 == VAR43)
            FUN9(VAR2, VAR9);
        else if (VAR2->VAR12->VAR46 == VAR45)
            FUN10(VAR2, VAR9);
        else
            FUN11(VAR2, VAR9);
    }
    VAR2->VAR54 = VAR2->VAR11 + VAR6.VAR10;
    if (VAR2->VAR22 & VAR25)
    {
        VAR2->VAR55 = VAR2->VAR54;
    }
    else
    {
        VAR2->VAR55 = VAR2->VAR54 + (VAR2->VAR53 * (VAR2->VAR12->VAR31 >> 2));
    }
    VAR2->VAR56 = VAR2->VAR57 - (VAR2->VAR55 - VAR2->VAR11);
    VAR2->VAR37 = VAR6.VAR15;
    VAR2->VAR38 = VAR6.VAR16;
    VAR2->VAR14 = VAR6.VAR14;
    VAR2->VAR58 = VAR41[VAR6.VAR14].VAR58;
    VAR2->VAR59 = VAR41[VAR6.VAR14].VAR59;
    VAR2->VAR60 = VAR41[VAR6.VAR14].VAR60;
    if (VAR2->VAR12->VAR61 & VAR62)
        FUN2(VAR2->VAR12, VAR27, "", VAR2->VAR37, VAR2->VAR38, VAR2->VAR14, VAR2->VAR58, VAR2->VAR59, VAR2->VAR60, VAR2->VAR22 & VAR25 ? "" : "", VAR2->VAR22 & VAR24 ? "" : "", VAR2->VAR22 & VAR26 ? "" : "", VAR2->VAR22 & VAR36 ? "" : "");
    return VAR6.VAR10;
}
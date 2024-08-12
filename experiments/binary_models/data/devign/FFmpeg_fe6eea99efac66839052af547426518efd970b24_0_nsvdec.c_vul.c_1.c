static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10[2] = {NULL, NULL};
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16 = 0;
    uint8_t VAR17;
    uint32_t VAR18;
    uint16_t VAR19;
    uint16_t VAR20;
    if (VAR5->VAR21[0].VAR22 || VAR5->VAR21[1].VAR22)
        return 0;
VAR23:
    if (VAR8->VAR24)
        return -1;
    for (VAR15 = 0; VAR15 < VAR25 && VAR5->VAR26 < VAR27 && !VAR16; VAR15++)
        VAR16 = FUN2(VAR2);
    if (VAR16 < 0)
        return VAR16;
    if (VAR5->VAR26 == VAR27)
        VAR16 = FUN3(VAR2);
    if (VAR16 < 0)
        return VAR16;
    if (VAR5->VAR26 != VAR28 && VAR5->VAR26 != VAR29)
        return -1;
    VAR17 = FUN4(VAR8);
    VAR18 = FUN5(VAR8);
    VAR19 = FUN5(VAR8);
    VAR18 = (VAR18 << 4) | (VAR17 >> 4);
    VAR17 &= 0x0f;
    FUN6(VAR2, VAR30, "" VAR31 "" VAR32 "" VAR33 "", VAR17, VAR18, VAR19);
    for (VAR15 = 0; VAR15 < VAR17; VAR15++)
    {
        uint32_t av_unused VAR34;
        VAR20 = FUN5(VAR8);
        VAR34 = FUN7(VAR8);
        FUN8(VAR8, VAR20);
        VAR18 -= VAR20 + sizeof(VAR35) + sizeof(VAR36);
    }
    if (VAR8->VAR24)
        return -1;
    if (!VAR18 && !VAR19)
    {
        VAR5->VAR26 = VAR37;
        goto VAR23;
    }
    if (VAR2->VAR38 > 0)
        VAR10[VAR2->VAR39[0]->VAR40] = VAR2->VAR39[0];
    if (VAR2->VAR38 > 1)
        VAR10[VAR2->VAR39[1]->VAR40] = VAR2->VAR39[1];
    if (VAR18 && VAR10[VAR41])
    {
        VAR12 = VAR10[VAR41]->VAR6;
        VAR14 = &VAR5->VAR21[VAR41];
        FUN9(VAR8, VAR14, VAR18);
        VAR14->VAR42 = VAR10[VAR41]->VAR43;
        VAR14->VAR44 = VAR12->VAR45;
        VAR14->VAR46 |= VAR5->VAR26 == VAR28 ? VAR47 : 0;
        for (VAR15 = 0; VAR15 < FUN10(8, VAR18); VAR15++)
            FUN6(VAR2, VAR30, "" VAR48 "", VAR15, VAR14->VAR22[VAR15]);
    }
    if (VAR10[VAR41])
        ((VAR11 *)VAR10[VAR41]->VAR6)->VAR45++;
    if (VAR19 && VAR10[VAR49])
    {
        VAR12 = VAR10[VAR49]->VAR6;
        VAR14 = &VAR5->VAR21[VAR49];
        if (VAR19 && VAR10[VAR49]->VAR50->VAR51 == FUN11('', '', '', ''))
        {
            uint8_t VAR52;
            uint8_t VAR53;
            uint16_t VAR54;
            VAR52 = FUN4(VAR8);
            VAR53 = FUN4(VAR8);
            VAR54 = FUN5(VAR8);
            if (!VAR53 || !VAR54)
                return VAR55;
            VAR19 -= 4;
            FUN6(VAR2, VAR30, "" VAR31 "" VAR31 "" VAR33 "", VAR52, VAR53, VAR54);
            if (VAR3)
            {
                VAR10[VAR49]->VAR56 = VAR57;
                if (VAR52 != 16)
                {
                    FUN6(VAR2, VAR30, "" VAR31 "", VAR52);
                }
                VAR52 /= VAR53;
                if (VAR52 == 8)
                    VAR10[VAR49]->VAR50->VAR58 = VAR59;
                VAR54 /= 4;
                VAR53 = 1;
                VAR10[VAR49]->VAR50->VAR53 = VAR53;
                VAR10[VAR49]->VAR50->VAR60 = VAR54;
                FUN6(VAR2, VAR30, "" VAR31 "" VAR31 "" VAR33 "", VAR52, VAR53, VAR54);
            }
        }
        FUN9(VAR8, VAR14, VAR19);
        VAR14->VAR42 = VAR10[VAR49]->VAR43;
        VAR14->VAR46 |= VAR5->VAR26 == VAR28 ? VAR47 : 0;
        if (VAR5->VAR26 == VAR28 && VAR10[VAR41])
        {
            VAR14->VAR44 = (((VAR11 *)VAR10[VAR41]->VAR6)->VAR45 - 1);
            VAR14->VAR44 *= (VAR61)1000 * VAR5->VAR62.VAR63;
            VAR14->VAR44 += (VAR61)VAR5->VAR64 * VAR5->VAR62.VAR65;
            FUN6(VAR2, VAR30, "" VAR66 "" VAR67, VAR5->VAR64, VAR14->VAR44);
        }
        VAR12->VAR45++;
    }
    VAR5->VAR26 = VAR37;
    return 0;
}
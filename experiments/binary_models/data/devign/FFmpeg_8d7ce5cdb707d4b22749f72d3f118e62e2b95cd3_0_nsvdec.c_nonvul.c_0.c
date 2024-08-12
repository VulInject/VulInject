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
    int VAR21;
    FUN2(VAR2, "", VAR22, VAR3);
    if (VAR5->VAR23[0].VAR24 || VAR5->VAR23[1].VAR24)
        return 0;
VAR25:
    if (FUN3(VAR8))
        return -1;
    for (VAR15 = 0; VAR15 < VAR26 && VAR5->VAR27 < VAR28 && !VAR16; VAR15++)
        VAR16 = FUN4(VAR2);
    if (VAR16 < 0)
        return VAR16;
    if (VAR5->VAR27 == VAR28)
        VAR16 = FUN5(VAR2);
    if (VAR16 < 0)
        return VAR16;
    if (VAR5->VAR27 != VAR29 && VAR5->VAR27 != VAR30)
        return -1;
    VAR17 = FUN6(VAR8);
    VAR18 = FUN7(VAR8);
    VAR19 = FUN7(VAR8);
    VAR18 = (VAR18 << 4) | (VAR17 >> 4);
    VAR17 &= 0x0f;
    FUN2(VAR2, "", VAR17, VAR18, VAR19);
    for (VAR15 = 0; VAR15 < VAR17; VAR15++)
    {
        uint32_t av_unused VAR31;
        VAR20 = FUN7(VAR8);
        VAR31 = FUN8(VAR8);
        FUN2(VAR2, "", (VAR31 & 0x0ff), ((VAR31 >> 8) & 0x0ff), ((VAR31 >> 16) & 0x0ff), ((VAR31 >> 24) & 0x0ff), VAR20);
        FUN9(VAR8, VAR20);
        VAR18 -= VAR20 + sizeof(VAR32) + sizeof(VAR33);
    }
    if (FUN3(VAR8))
        return -1;
    if (!VAR18 && !VAR19)
    {
        VAR5->VAR27 = VAR34;
        goto VAR25;
    }
    if (VAR2->VAR35 > 0)
        VAR10[VAR2->VAR36[0]->VAR37] = VAR2->VAR36[0];
    if (VAR2->VAR35 > 1)
        VAR10[VAR2->VAR36[1]->VAR37] = VAR2->VAR36[1];
    if (VAR18 && VAR10[VAR38])
    {
        VAR12 = VAR10[VAR38]->VAR6;
        VAR14 = &VAR5->VAR23[VAR38];
        if ((VAR21 = FUN10(VAR8, VAR14, VAR18)) < 0)
            return VAR21;
        VAR14->VAR39 = VAR10[VAR38]->VAR40;
        VAR14->VAR41 = VAR12->VAR42;
        VAR14->VAR43 |= VAR5->VAR27 == VAR29 ? VAR44 : 0;
        for (VAR15 = 0; VAR15 < FUN11(8, VAR18); VAR15++)
            FUN2(VAR2, "", VAR15, VAR14->VAR24[VAR15]);
    }
    if (VAR10[VAR38])
        ((VAR11 *)VAR10[VAR38]->VAR6)->VAR42++;
    if (VAR19 && VAR10[VAR45])
    {
        VAR12 = VAR10[VAR45]->VAR6;
        VAR14 = &VAR5->VAR23[VAR45];
        if (VAR19 && VAR10[VAR45]->VAR46->VAR47 == FUN12('', '', '', ''))
        {
            uint8_t VAR48;
            uint8_t VAR49;
            uint16_t VAR50;
            VAR48 = FUN6(VAR8);
            VAR49 = FUN6(VAR8);
            VAR50 = FUN7(VAR8);
            VAR19 -= 4;
            FUN2(VAR2, "", VAR48, VAR49, VAR50);
            if (VAR3)
            {
                VAR10[VAR45]->VAR51 = VAR52;
                if (VAR48 != 16)
                {
                    FUN2(VAR2, "", VAR48);
                }
                if (VAR49)
                    VAR48 /= VAR49;
                else
                    FUN13(VAR2, VAR53, "");
                if (VAR48 == 8)
                    VAR10[VAR45]->VAR46->VAR54 = VAR55;
                VAR50 /= 4;
                VAR49 = 1;
                VAR10[VAR45]->VAR46->VAR49 = VAR49;
                VAR10[VAR45]->VAR46->VAR56 = VAR50;
                FUN2(VAR2, "", VAR48, VAR49, VAR50);
            }
        }
        if ((VAR21 = FUN10(VAR8, VAR14, VAR19)) < 0)
            return VAR21;
        VAR14->VAR39 = VAR10[VAR45]->VAR40;
        VAR14->VAR43 |= VAR5->VAR27 == VAR29 ? VAR44 : 0;
        if (VAR5->VAR27 == VAR29 && VAR10[VAR38])
        {
            VAR14->VAR41 = (((VAR11 *)VAR10[VAR38]->VAR6)->VAR42 - 1);
            VAR14->VAR41 *= (VAR57)1000 * VAR5->VAR58.VAR59;
            VAR14->VAR41 += (VAR57)VAR5->VAR60 * VAR5->VAR58.VAR61;
            FUN2(VAR2, "" VAR62, VAR5->VAR60, VAR14->VAR41);
        }
        VAR12->VAR42++;
    }
    VAR5->VAR27 = VAR34;
    return 0;
}
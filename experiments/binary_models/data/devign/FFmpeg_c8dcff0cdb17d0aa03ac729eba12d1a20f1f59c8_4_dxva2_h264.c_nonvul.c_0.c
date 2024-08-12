static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, VAR7 *VAR8)
{
    const VAR9 *VAR10 = VAR6->VAR11;
    const VAR12 *VAR13 = VAR6->VAR14.VAR13;
    const VAR15 *VAR16 = VAR6->VAR14.VAR16;
    int VAR17, VAR18;
    memset(VAR8, 0, sizeof(*VAR8));
    FUN2(&VAR8->VAR19, FUN3(VAR2, VAR4, VAR10->VAR20), VAR6->VAR21 == VAR22);
    VAR8->VAR23 = 0;
    VAR8->VAR24 = 0;
    for (VAR17 = 0, VAR18 = 0; VAR17 < FUN4(VAR8->VAR25); VAR17++)
    {
        const VAR9 *VAR26;
        if (VAR18 < VAR6->VAR27)
        {
            VAR26 = VAR6->VAR28[VAR18++];
        }
        else
        {
            VAR26 = NULL;
            while (!VAR26 && VAR18 < VAR6->VAR27 + 16)
                VAR26 = VAR6->VAR29[VAR18++ - VAR6->VAR27];
        }
        if (VAR26)
        {
            FUN2(&VAR8->VAR25[VAR17], FUN3(VAR2, VAR4, VAR26->VAR20), VAR26->VAR29 != 0);
            if ((VAR26->VAR30 & VAR31) && VAR26->VAR32[0] != VAR33)
                VAR8->VAR34[VAR17][0] = VAR26->VAR32[0];
            if ((VAR26->VAR30 & VAR22) && VAR26->VAR32[1] != VAR33)
                VAR8->VAR34[VAR17][1] = VAR26->VAR32[1];
            VAR8->VAR35[VAR17] = VAR26->VAR29 ? VAR26->VAR36 : VAR26->VAR37;
            if (VAR26->VAR30 & VAR31)
                VAR8->VAR23 |= 1 << (2 * VAR17 + 0);
            if (VAR26->VAR30 & VAR22)
                VAR8->VAR23 |= 1 << (2 * VAR17 + 1);
        }
        else
        {
            VAR8->VAR25[VAR17].VAR38 = 0xff;
            VAR8->VAR34[VAR17][0] = 0;
            VAR8->VAR34[VAR17][1] = 0;
            VAR8->VAR35[VAR17] = 0;
        }
    }
    VAR8->VAR39 = VAR6->VAR40 - 1;
    VAR8->VAR41 = VAR6->VAR42 - 1;
    VAR8->VAR43 = VAR13->VAR44;
    VAR8->VAR45 = ((VAR6->VAR21 != VAR46) << 0) | ((VAR13->VAR47 && (VAR6->VAR21 == VAR46)) << 1) | (VAR13->VAR48 << 2) | (0 << 3) | (VAR13->VAR49 << 4) | ((VAR6->VAR50 != 0) << 6) | (VAR16->VAR51 << 7) | (VAR16->VAR52 << 8) | (VAR16->VAR53 << 9) | (1 << 11) | (VAR13->VAR54 << 12) | (VAR16->VAR55 << 13) | ((VAR13->VAR56 >= 31) << 14) | (1 << 15);
    VAR8->VAR57 = VAR13->VAR58 - 8;
    VAR8->VAR59 = VAR13->VAR60 - 8;
    if (FUN5(VAR2, VAR4) & VAR61)
        VAR8->VAR62 = 0;
    else if (FUN5(VAR2, VAR4) & VAR63)
        VAR8->VAR62 = 0x34c;
    else
        VAR8->VAR62 = 3;
    VAR8->VAR64 = 1 + FUN6(VAR2, VAR4)++;
    VAR8->VAR65[0] = 0;
    if ((VAR6->VAR21 & VAR31) && VAR10->VAR32[0] != VAR33)
        VAR8->VAR65[0] = VAR10->VAR32[0];
    VAR8->VAR65[1] = 0;
    if ((VAR6->VAR21 & VAR22) && VAR10->VAR32[1] != VAR33)
        VAR8->VAR65[1] = VAR10->VAR32[1];
    VAR8->VAR66 = VAR16->VAR67 - 26;
    VAR8->VAR68 = VAR16->VAR68[0];
    VAR8->VAR69 = VAR16->VAR68[1];
    VAR8->VAR70 = 1;
    VAR8->VAR71 = VAR16->VAR72 - 26;
    VAR8->VAR73 = VAR16->VAR74[0] - 1;
    VAR8->VAR75 = VAR16->VAR74[1] - 1;
    VAR8->VAR76 = 0;
    VAR8->VAR37 = VAR6->VAR77.VAR37;
    VAR8->VAR78 = VAR13->VAR79 - 4;
    VAR8->VAR80 = VAR13->VAR81;
    if (VAR13->VAR81 == 0)
        VAR8->VAR82 = VAR13->VAR83 - 4;
    else if (VAR13->VAR81 == 1)
        VAR8->VAR84 = VAR13->VAR84;
    VAR8->VAR85 = VAR13->VAR85;
    VAR8->VAR86 = VAR16->VAR87;
    VAR8->VAR88 = VAR16->VAR89;
    VAR8->VAR90 = VAR16->VAR91 - 1;
    VAR8->VAR92 = VAR16->VAR93;
    VAR8->VAR94 = VAR16->VAR95;
    VAR8->VAR96 = VAR16->VAR97;
    VAR8->VAR98 = 0;
    VAR8->VAR99 = 0;
}
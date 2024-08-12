static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, const VAR5 *VAR6, VAR7 *VAR8)
{
    const VAR9 *VAR10 = &VAR6->VAR10;
    const VAR11 *VAR12 = VAR10->VAR13;
    memset(VAR8, 0, sizeof(*VAR8));
    VAR8->VAR14 = VAR8->VAR15 = FUN2(VAR4, &VAR12->VAR16);
    if (VAR10->VAR17 != VAR18 && !VAR6->VAR19)
        VAR8->VAR20 = FUN2(VAR4, &VAR10->VAR21.VAR16);
    else
        VAR8->VAR20 = 0xffff;
    if (VAR10->VAR17 == VAR22 && !VAR6->VAR19)
        VAR8->VAR23 = FUN2(VAR4, &VAR10->VAR24.VAR16);
    else
        VAR8->VAR23 = 0xffff;
    if (VAR6->VAR25 == VAR26)
    {
        VAR8->VAR27 = VAR2->VAR28 - 1;
        VAR8->VAR29 = VAR2->VAR30 - 1;
    }
    else
    {
        VAR8->VAR27 = VAR10->VAR31 - 1;
        VAR8->VAR29 = VAR10->VAR32 - 1;
    }
    VAR8->VAR33 = 15;
    VAR8->VAR34 = 15;
    VAR8->VAR35 = 7;
    VAR8->VAR36 = 7;
    VAR8->VAR37 = 7;
    if (VAR10->VAR38 & VAR39)
        VAR8->VAR40 |= 0x01;
    if (VAR10->VAR38 & VAR41)
        VAR8->VAR40 |= 0x02;
    VAR8->VAR42 = VAR6->VAR43 && VAR6->VAR44 != VAR45 && !VAR10->VAR46;
    VAR8->VAR47 = VAR10->VAR17 == VAR18 || VAR6->VAR19;
    VAR8->VAR48 = VAR10->VAR17 == VAR22 && !VAR6->VAR19;
    VAR8->VAR49 = (1 << 7) | ((VAR4->VAR50->VAR51 != 0) << 6) | ((VAR4->VAR50->VAR52 != 0) << 5) | ((VAR6->VAR53 != 32 || VAR6->VAR54 != 0) << 4) | ((VAR6->VAR25 == VAR26) << 3);
    VAR8->VAR55 = ((VAR6->VAR56 == VAR57) << 3) | (1 << 2) | (0 << 1) | (!VAR10->VAR58);
    VAR8->VAR59 = VAR6->VAR60;
    VAR4->VAR61++;
    if (VAR4->VAR61 >= (1 << 16))
        VAR4->VAR61 = 1;
    VAR8->VAR62 = VAR4->VAR61 >> 8;
    VAR8->VAR63 = VAR4->VAR61 & 0xff;
    VAR8->VAR64 = 0;
    VAR8->VAR65 = VAR6->VAR66;
    VAR8->VAR67 = (VAR6->VAR68 << 7) | (VAR6->VAR69 << 6) | (VAR10->VAR70 << 5) | (VAR6->VAR71 << 4) | (VAR6->VAR72 << 3) | (VAR6->VAR73 << 1) | (VAR6->VAR74);
    VAR8->VAR75 = (VAR6->VAR76 << 6) | (VAR6->VAR77 << 5) | (VAR6->VAR78 << 4) | (VAR6->VAR79 << 3) | (VAR10->VAR80);
    VAR8->VAR81 = (!VAR6->VAR43 || VAR6->VAR44 == VAR82) ? 1 : 2;
    VAR8->VAR83 = ((!VAR8->VAR48 && VAR6->VAR84) << 6) | ((VAR6->VAR25 != VAR26 && VAR6->VAR85) << 5) | (VAR10->VAR70 << 1);
    VAR8->VAR86 = (VAR6->VAR87 << 7) | (VAR6->VAR88 << 6) | (VAR6->VAR43 << 5) | (VAR6->VAR89 << 4) | (VAR6->VAR90 << 3) | ((VAR10->VAR17 != VAR22) << 2) | (VAR6->VAR91 << 1) | (VAR6->VAR92);
    if (VAR10->VAR17 != VAR18)
        VAR8->VAR93 = VAR6->VAR56 == VAR94 || (VAR6->VAR56 == VAR95 && VAR6->VAR96 == VAR94);
    if (VAR6->VAR25 == VAR26)
        VAR8->VAR97 = (VAR6->VAR98 << 7) | (VAR6->VAR99 << 4) | (VAR6->VAR100 << 3) | (VAR6->VAR101);
    VAR8->VAR102 = 0;
    VAR8->VAR103 = 0;
    VAR8->VAR104 = 0;
    if (VAR10->VAR38 == VAR105)
    {
        VAR8->VAR106 = VAR6->VAR53;
        VAR8->VAR107 = VAR6->VAR54;
    }
    else
    {
        VAR8->VAR106 = (VAR6->VAR53 << 8) | VAR6->VAR53;
        VAR8->VAR107 = (VAR6->VAR54 << 8) | VAR6->VAR54;
    }
    VAR8->VAR108 = 0;
    VAR8->VAR109 = 0;
}
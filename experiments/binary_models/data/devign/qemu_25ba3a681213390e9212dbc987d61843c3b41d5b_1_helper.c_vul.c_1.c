int FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    int VAR4;
    VAR3 &= VAR2->VAR5;
    if (((VAR3 >> VAR6) & 1) != VAR7 || ((VAR3 >> VAR8) & 1) != VAR9)
    {
        FUN2(VAR2, 1);
        VAR2->VAR10 |= VAR11;
    }
    if (FUN3((VAR2->VAR12 & VAR13) && ((VAR3 >> VAR14) & 1) != VAR15))
    {
        FUN4(VAR2);
    }
    if (FUN3((VAR3 >> VAR16) & 1) != VAR17)
    {
        VAR2->VAR18 = ((VAR3 >> VAR16) & 1) * 0xFFF00000;
    }
    VAR19 = (VAR3 >> VAR20) & 1;
    VAR21 = (VAR3 >> VAR22) & 1;
    VAR23 = (VAR3 >> VAR24) & 1;
    VAR25 = (VAR3 >> VAR26) & 1;
    VAR27 = (VAR3 >> VAR28) & 1;
    VAR29 = (VAR3 >> VAR30) & 1;
    VAR31 = (VAR3 >> VAR32) & 1;
    VAR33 = (VAR3 >> VAR34) & 1;
    VAR35 = (VAR3 >> VAR36) & 1;
    VAR15 = (VAR3 >> VAR14) & 1;
    VAR37 = (VAR3 >> VAR38) & 1;
    VAR39 = (VAR3 >> VAR40) & 1;
    VAR41 = (VAR3 >> VAR42) & 1;
    VAR43 = (VAR3 >> VAR44) & 1;
    VAR45 = (VAR3 >> VAR46) & 1;
    VAR47 = (VAR3 >> VAR48) & 1;
    VAR49 = (VAR3 >> VAR50) & 1;
    VAR51 = (VAR3 >> VAR52) & 1;
    VAR53 = (VAR3 >> VAR54) & 1;
    VAR55 = (VAR3 >> VAR56) & 1;
    VAR57 = (VAR3 >> VAR58) & 1;
    VAR7 = (VAR3 >> VAR6) & 1;
    VAR9 = (VAR3 >> VAR8) & 1;
    VAR59 = (VAR3 >> VAR60) & 1;
    VAR61 = (VAR3 >> VAR62) & 1;
    VAR63 = (VAR3 >> VAR64) & 1;
    VAR65 = (VAR3 >> VAR66) & 1;
    FUN5(VAR2);
    VAR4 = 0;
    switch (VAR2->VAR67)
    {
    case VAR68:
    case VAR69:
    case VAR70:
        if (VAR35 == 1 && (VAR2->VAR71[VAR72] & 0x00C00000) != 0)
            VAR4 = 1;
        break;
    case VAR73:
        if (VAR35 == 1)
            VAR4 = 1;
        break;
    case VAR74:
        if (VAR35 == 1 && (VAR2->VAR71[VAR72] & 0x00E00000) != 0)
            VAR4 = 1;
        break;
    default:
        break;
    }
    return VAR4;
}
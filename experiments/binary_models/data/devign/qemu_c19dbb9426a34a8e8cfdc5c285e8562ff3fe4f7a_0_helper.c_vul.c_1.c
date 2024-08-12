void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    int VAR4;
    VAR3 &= VAR2->VAR5;
    if (((VAR3 >> VAR6) & 1) != VAR7 || ((VAR3 >> VAR8) & 1) != VAR9)
    {
        FUN2(VAR2, 1);
        VAR2->VAR10 |= VAR11;
    }
    if (VAR12 != 0)
    {
        fprintf(VAR13, "", VAR14, VAR3);
    }
    switch (FUN3(VAR2))
    {
    case VAR15:
    case VAR16:
        if (((VAR3 >> VAR17) & 1) != VAR18)
        {
            FUN4(VAR2);
        }
        break;
    default:
        break;
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
    VAR59 = (VAR3 >> VAR60) & 1;
    VAR7 = (VAR3 >> VAR6) & 1;
    VAR9 = (VAR3 >> VAR8) & 1;
    VAR61 = (VAR3 >> VAR62) & 1;
    VAR63 = (VAR3 >> VAR64) & 1;
    VAR65 = (VAR3 >> VAR66) & 1;
    VAR67 = (VAR3 >> VAR68) & 1;
    FUN5(VAR2);
    VAR4 = 0;
    switch (FUN3(VAR2))
    {
    case VAR16:
        if (VAR35 == 1 && (VAR2->VAR69[VAR70] & 0x00C00000) != 0)
            VAR4 = 1;
        break;
    case VAR71:
        if (VAR35 == 1)
            VAR4 = 1;
        break;
    case VAR72:
        if (VAR35 == 1 && (VAR2->VAR69[VAR70] & 0x00E00000) != 0)
            VAR4 = 1;
        break;
    default:
        break;
    }
    if (VAR4)
    {
        VAR2->VAR73 = 1;
        VAR2->VAR74 = VAR75;
        FUN6();
    }
}
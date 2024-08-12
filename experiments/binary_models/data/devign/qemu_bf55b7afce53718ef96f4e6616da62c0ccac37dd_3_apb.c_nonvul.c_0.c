static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, IOMMUAccessFlags VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3, VAR6, VAR3);
    hwaddr VAR8, VAR9;
    uint64_t VAR10;
    uint32_t VAR11;
    IOMMUTLBEntry VAR12 = {
        .VAR13 = &VAR14,
        .VAR15 = 0,
        .VAR16 = 0,
        .VAR17 = ~(VAR18)0,
        .VAR19 = VAR20,
    };
    if (!(VAR7->VAR21[VAR22 >> 3] & VAR23))
    {
        VAR12.VAR15 = VAR4 & VAR24;
        VAR12.VAR16 = VAR4;
        VAR12.VAR17 = VAR24;
        VAR12.VAR19 = VAR25;
        return VAR12;
    }
    VAR8 = VAR7->VAR21[VAR26 >> 3];
    VAR11 = (VAR7->VAR21[VAR22 >> 3] >> VAR27) & 0x7;
    if (VAR7->VAR21[VAR22 >> 3] & VAR28)
    {
        switch (VAR11)
        {
        case 0:
            VAR9 = (VAR4 & VAR29) >> 13;
            break;
        case 1:
            VAR9 = (VAR4 & VAR30) >> 13;
            break;
        case 2:
            VAR9 = (VAR4 & VAR31) >> 13;
            break;
        case 3:
            VAR9 = (VAR4 & VAR32) >> 13;
            break;
        case 4:
            VAR9 = (VAR4 & VAR33) >> 13;
            break;
        case 5:
            VAR9 = (VAR4 & VAR34) >> 13;
            break;
        default:
            return VAR12;
        }
    }
    else
    {
        switch (VAR11)
        {
        case 0:
            VAR9 = (VAR4 & VAR35) >> 10;
            break;
        case 1:
            VAR9 = (VAR4 & VAR36) >> 10;
            break;
        case 2:
            VAR9 = (VAR4 & VAR37) >> 10;
            break;
        case 3:
            VAR9 = (VAR4 & VAR38) >> 10;
            break;
        case 4:
            VAR9 = (VAR4 & VAR39) >> 10;
            break;
        case 5:
            VAR9 = (VAR4 & VAR40) >> 10;
            break;
        case 6:
            VAR9 = (VAR4 & VAR41) >> 10;
            break;
        case 7:
            VAR9 = (VAR4 & VAR42) >> 10;
            break;
        }
    }
    VAR10 = FUN3(&VAR14, VAR8 + VAR9, VAR43, NULL);
    if (!(VAR10 & VAR44))
    {
        return VAR12;
    }
    if (VAR10 & VAR45)
    {
        VAR12.VAR19 = VAR25;
    }
    else
    {
        VAR12.VAR19 = VAR46;
    }
    if (VAR10 & VAR47)
    {
        VAR12.VAR15 = VAR4 & VAR48;
        VAR12.VAR16 = VAR10 & VAR49;
        VAR12.VAR17 = (VAR50 - 1);
    }
    else
    {
        VAR12.VAR15 = VAR4 & VAR24;
        VAR12.VAR16 = VAR10 & VAR51;
        VAR12.VAR17 = (VAR52 - 1);
    }
    return VAR12;
}
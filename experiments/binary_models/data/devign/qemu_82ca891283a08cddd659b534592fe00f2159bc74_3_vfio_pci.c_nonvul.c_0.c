static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    union
    {
        uint8_t VAR7;
        uint16_t VAR8;
        uint32_t VAR9;
        uint64_t VAR10;
    } VAR11;
    uint64_t VAR12 = 0;
    if (pread(VAR6->VAR13, &VAR11, VAR4, VAR6->VAR14 + VAR3) != VAR4)
    {
        FUN2("" VAR15 "", VAR16, VAR3, VAR4);
        return (VAR1)-1;
    }
    switch (VAR4)
    {
    case 1:
        VAR12 = VAR11.VAR7;
        break;
    case 2:
        VAR12 = FUN3(VAR11.VAR8);
        break;
    case 4:
        VAR12 = FUN4(VAR11.VAR9);
        break;
    default:
        FUN5("", VAR4);
        break;
    }
    {
        VAR17 *VAR18 = FUN6(VAR6, VAR17, VAR19[VAR6->VAR20]);
        FUN7("" VAR15 "" VAR21 "", VAR16, VAR18->VAR22.VAR23, VAR18->VAR22.VAR24, VAR18->VAR22.VAR25, VAR18->VAR22.VAR26, VAR6->VAR20, VAR3, VAR4, VAR12);
    }
    FUN8(FUN6(VAR6, VAR17, VAR19[VAR6->VAR20]));
    return VAR12;
}
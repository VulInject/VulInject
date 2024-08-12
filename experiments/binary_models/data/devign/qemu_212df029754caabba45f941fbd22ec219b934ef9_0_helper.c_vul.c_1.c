void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    int VAR4, VAR5;
    FUN2((VAR3 >> 52) & 0x3F, &VAR2->VAR6);
    VAR5 = 0;
    if (VAR3 & VAR7)
        VAR5 |= VAR8;
    if (VAR3 & VAR9)
        VAR5 |= VAR10;
    if (VAR3 & VAR11)
        VAR5 |= VAR12;
    if (VAR3 & VAR13)
        VAR5 |= VAR14;
    if (VAR3 & VAR15)
        VAR5 |= VAR16;
    VAR2->VAR6.VAR17 = VAR5;
    switch ((VAR3 >> VAR18) & 3)
    {
    case 0:
        VAR4 = VAR19;
        break;
    case 1:
        VAR4 = VAR20;
        break;
    case 2:
        VAR4 = VAR21;
        break;
    case 3:
        VAR4 = VAR22;
        break;
    }
    FUN3(VAR4, &VAR2->VAR6);
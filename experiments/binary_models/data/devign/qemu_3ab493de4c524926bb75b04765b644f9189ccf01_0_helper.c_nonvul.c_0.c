void FUN1(void)
{
    unsigned int VAR1, VAR2;
    uint32_t VAR3, VAR4;
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 = VAR10[VAR11].FUN2() & ~VAR12;
    VAR1 = VAR13 & 0xffff;
    if (FUN3(&VAR3, &VAR4, VAR1) != 0)
        return;
    VAR5 = VAR1 & 3;
    VAR6 = (VAR4 >> VAR14) & 3;
    VAR7 = VAR15->VAR16 & VAR17;
    if (VAR4 & VAR18)
    {
        if ((VAR4 & VAR19) && (VAR4 & VAR20))
        {
        }
        else
        {
            if (VAR6 < VAR7 || VAR6 < VAR5)
                return;
        }
    }
    else
    {
        VAR8 = (VAR4 >> VAR21) & 0xf;
        switch (VAR8)
        {
        case 1:
        case 2:
        case 3:
        case 9:
        case 11:
            break;
        default:
            return;
        }
        if (VAR6 < VAR7 || VAR6 < VAR5)
            return;
    }
    VAR2 = FUN4(VAR3, VAR4);
    VAR22 = VAR2;
    VAR9 |= VAR12;
}
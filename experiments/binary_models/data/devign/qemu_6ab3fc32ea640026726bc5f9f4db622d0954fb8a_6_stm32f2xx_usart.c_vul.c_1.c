static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR3;
    unsigned char VAR8;
    FUN2("" VAR9 "" VAR10 "", VAR7, VAR2);
    switch (VAR2)
    {
    case VAR11:
        if (VAR7 <= 0x3FF)
        {
            VAR6->VAR12 = VAR7;
        }
        else
        {
            VAR6->VAR12 &= VAR7;
        }
        if (!(VAR6->VAR12 & VAR13))
        {
            FUN3(VAR6->VAR14, 0);
        }
        return;
    case VAR15:
        if (VAR7 < 0xF000)
        {
            VAR8 = VAR7;
            if (VAR6->VAR16)
            {
                FUN4(VAR6->VAR16, &VAR8, 1);
            }
            VAR6->VAR12 |= VAR17;
            VAR6->VAR12 &= ~VAR18;
        }
        return;
    case VAR19:
        VAR6->VAR20 = VAR7;
        return;
    case VAR21:
        VAR6->VAR22 = VAR7;
        if (VAR6->VAR22 & VAR23 && VAR6->VAR12 & VAR13)
        {
            FUN3(VAR6->VAR14, 1);
        }
        return;
    case VAR24:
        VAR6->VAR25 = VAR7;
        return;
    case VAR26:
        VAR6->VAR27 = VAR7;
        return;
    case VAR28:
        VAR6->VAR29 = VAR7;
        return;
    default:
        FUN5(VAR30, "" VAR10 "", VAR31, VAR2);
    }
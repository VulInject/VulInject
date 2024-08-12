int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7.VAR8;
    VAR9 *VAR10 = &VAR2->VAR7.VAR11;
    uint16_t VAR12;
    uint16_t VAR13;
    uint16_t VAR14;
    IRB VAR15;
    int VAR16;
    if (!(VAR10->VAR17 & (VAR18 | VAR19)))
    {
        VAR16 = 3;
        goto VAR20;
    }
    VAR12 = VAR6->VAR21 & VAR22;
    VAR13 = VAR6->VAR21 & VAR23;
    VAR14 = VAR6->VAR21 & VAR24;
    memset(&VAR15, 0, sizeof(VAR3));
    memcpy(&VAR15.VAR8, VAR6, sizeof(VAR5));
    if (VAR12 & VAR25)
    {
        if (VAR6->VAR26 & (VAR27 | VAR28 | VAR29))
        {
            VAR15.VAR8.VAR17 |= VAR30;
            VAR15.VAR31[0] = 0x04804000;
        }
        else
        {
            VAR15.VAR31[0] = 0x00800000;
        }
        if ((VAR6->VAR32 & VAR33) && (VAR10->VAR34 & VAR35))
        {
            VAR15.VAR8.VAR17 |= VAR30 | VAR36;
            memcpy(VAR15.VAR37, VAR2->VAR38, sizeof(VAR2->VAR38));
            VAR15.VAR31[1] = 0x02000000 | (sizeof(VAR2->VAR38) << 8);
        }
    }
    FUN2(VAR4, &VAR15);
    if (VAR12 & VAR25)
    {
        VAR6->VAR21 &= ~VAR22;
        if ((VAR12 != (VAR39 | VAR25)) || ((VAR13 & VAR40) && (VAR14 & VAR41)))
        {
            VAR6->VAR21 &= ~VAR23;
        }
        if (VAR12 != (VAR39 | VAR25))
        {
            VAR6->VAR17 &= ~VAR42;
            VAR6->VAR21 &= ~(VAR43 | VAR44 | VAR45 | VAR46 | VAR41);
        }
        else
        {
            if ((VAR14 & VAR41) && (VAR13 & VAR47))
            {
                VAR6->VAR17 &= ~VAR42;
                if (VAR13 & VAR40)
                {
                    VAR6->VAR21 &= ~(VAR43 | VAR44 | VAR45 | VAR46 | VAR41);
                }
                else
                {
                    VAR6->VAR21 &= ~VAR43;
                }
            }
        }
        if (VAR10->VAR34 & VAR35)
        {
            memset(VAR2->VAR38, 0, sizeof(VAR2->VAR38));
        }
    }
    VAR16 = ((VAR12 & VAR25) == 0);
VAR20:
    return VAR16;
}
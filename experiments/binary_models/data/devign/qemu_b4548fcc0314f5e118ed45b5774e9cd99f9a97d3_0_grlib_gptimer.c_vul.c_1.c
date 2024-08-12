FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    target_phys_addr_t VAR6;
    int VAR7;
    VAR2 &= 0xff;
    switch (VAR2)
    {
    case VAR8:
        VAR3 &= 0xFFFF;
        VAR5->VAR9 = VAR3;
        FUN2(-1, "", VAR5->VAR9);
        return;
    case VAR10:
        VAR3 &= 0xFFFF;
        VAR5->VAR11 = VAR3;
        FUN2(-1, "", VAR5->VAR11);
        FUN3(VAR5, VAR3);
        return;
    case VAR12:
        FUN2(-1, "", 0);
        return;
    default:
        break;
    }
    VAR6 = (VAR2 % VAR13);
    VAR7 = (VAR2 - VAR13) / VAR13;
    if (VAR7 >= 0 && VAR7 < VAR5->VAR14)
    {
        switch (VAR6)
        {
        case VAR15:
            FUN2(VAR7, "", VAR3);
            VAR5->VAR16[VAR7].VAR17 = VAR3;
            FUN4(&VAR5->VAR16[VAR7]);
            return;
        case VAR18:
            FUN2(VAR7, "", VAR3);
            VAR5->VAR16[VAR7].VAR11 = VAR3;
            return;
        case VAR12:
            FUN2(VAR7, "", VAR3);
            if (VAR3 & VAR19)
            {
                VAR3 &= ~VAR19;
            }
            else
            {
                VAR3 |= VAR5->VAR16[VAR7].VAR20 & VAR19;
            }
            VAR5->VAR16[VAR7].VAR20 = VAR3;
            if (VAR3 & VAR21)
            {
                FUN5(&VAR5->VAR16[VAR7]);
            }
            else if (VAR3 & VAR22)
            {
                FUN4(&VAR5->VAR16[VAR7]);
            }
            VAR3 &= ~(VAR21 & VAR23);
            VAR5->VAR16[VAR7].VAR20 = VAR3;
            return;
        default:
            break;
        }
    }
    FUN6("", VAR2);
}
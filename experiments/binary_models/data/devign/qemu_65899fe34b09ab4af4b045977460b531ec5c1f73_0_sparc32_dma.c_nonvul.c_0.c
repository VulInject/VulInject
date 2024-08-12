static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    VAR6 = (VAR2 & VAR7) >> 2;
    FUN2("" VAR8 "", VAR2, VAR5->VAR9[VAR6], VAR3);
    switch (VAR6)
    {
    case 0:
        if (VAR3 & VAR10)
        {
            if (VAR5->VAR9[0] & VAR11)
            {
                FUN2("");
                FUN3(VAR5->VAR12);
            }
        }
        else
        {
            if (VAR5->VAR9[0] & (VAR11 | VAR10))
            {
                FUN2("");
                FUN4(VAR5->VAR12);
            }
        }
        if (VAR3 & VAR13)
        {
            FUN3(VAR5->VAR14);
            FUN4(VAR5->VAR14);
        }
        else if (VAR3 & VAR15)
        {
            VAR3 &= ~VAR15;
        }
        else if (VAR3 == 0)
            VAR3 = VAR15;
        VAR3 &= ~VAR16;
        VAR3 |= VAR17;
        VAR5->VAR9[0] = (VAR5->VAR9[0] & VAR16) | VAR3;
        break;
    case 1:
        VAR5->VAR9[0] |= VAR18;
    default:
        VAR5->VAR9[VAR6] = VAR3;
        break;
    }
}
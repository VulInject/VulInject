static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7;
    FUN2(VAR6->VAR8, VAR2, VAR3);
    switch (VAR2)
    {
    case 0x00:
        VAR7 = VAR6->VAR7;
        VAR7 &= ~(VAR3 & (VAR9 | VAR10 | VAR11 | VAR12 | VAR13 | VAR14 | VAR15));
        if (VAR3 & VAR16)
        {
            uint32_t VAR17 = FUN3(VAR3, VAR18);
            FUN4(&VAR7, VAR17, VAR18);
            FUN5(VAR6->VAR8, VAR17);
        }
        VAR7 &= ~(VAR19 | VAR20 | VAR21 | VAR22);
        VAR7 |= (VAR3 & (VAR19 | VAR20 | VAR21 | VAR22));
        VAR6->VAR7 = VAR7;
        if (VAR3 & VAR23)
        {
            FUN6(VAR6);
        }
        break;
    case 0x04:
    case 0x08:
    default:
        FUN7("", VAR2);
    }
}
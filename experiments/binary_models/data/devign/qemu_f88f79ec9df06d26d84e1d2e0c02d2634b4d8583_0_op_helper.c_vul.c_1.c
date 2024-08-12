void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    uint32_t VAR6, VAR7;
    uint32_t VAR8 = VAR2->VAR9;
    if (VAR2->VAR10 & VAR11)
    {
        if (FUN3(VAR2->VAR12, VAR13, 2) == 0x3)
        {
            VAR8 &= ~(3 << VAR13);
        }
        VAR8 &= ~(0x00180000 & VAR3);
    }
    VAR6 = VAR3 & VAR8;
    VAR7 = VAR2->VAR12;
    VAR2->VAR12 = (VAR2->VAR12 & ~VAR8) | VAR6;
    if (VAR2->VAR14 & (1 << VAR15))
    {
        FUN4(VAR2, VAR2, VAR2->VAR16);
    }
    else
    {
        FUN5(VAR2);
    }
    if (FUN6(VAR17))
    {
        FUN7("", VAR7, VAR7 & VAR2->VAR18 & VAR19, VAR6, VAR6 & VAR2->VAR18 & VAR19, VAR2->VAR18);
        switch (VAR2->VAR20 & VAR21)
        {
        case VAR22:
            FUN7("");
            break;
        case VAR23:
            FUN7("");
            break;
        case VAR24:
            FUN7("");
            break;
        default:
            FUN8(FUN9(VAR5), "");
            break;
        }
    }
}
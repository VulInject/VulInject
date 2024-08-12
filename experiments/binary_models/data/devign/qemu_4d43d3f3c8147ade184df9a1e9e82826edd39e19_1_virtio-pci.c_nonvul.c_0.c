static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = FUN2(&VAR5->VAR8);
    hwaddr VAR9;
    switch (VAR2)
    {
    case VAR10:
        if (VAR3 & (1 << VAR11))
        {
            VAR3 = FUN3(&VAR5->VAR8);
        }
        FUN4(VAR7, VAR3);
        break;
    case VAR12:
        VAR9 = (VAR13)VAR3 << VAR14;
        if (VAR9 == 0)
        {
            FUN5(VAR5);
            FUN6(VAR7);
            FUN7(&VAR5->VAR15);
        }
        else
            FUN8(VAR7, VAR7->VAR16, VAR9);
        break;
    case VAR17:
        if (VAR3 < VAR18)
            VAR7->VAR16 = VAR3;
        break;
    case VAR19:
        if (VAR3 < VAR18)
        {
            FUN9(VAR7, VAR3);
        }
        break;
    case VAR20:
        if (!(VAR3 & VAR21))
        {
            FUN5(VAR5);
        }
        FUN10(VAR7, VAR3 & 0xFF);
        if (VAR3 & VAR21)
        {
            FUN11(VAR5);
        }
        if (VAR7->VAR22 == 0)
        {
            FUN6(VAR7);
            FUN7(&VAR5->VAR15);
        }
        if (VAR3 == (VAR23 | VAR24))
        {
            FUN12(&VAR5->VAR15, VAR25, VAR5->VAR15.VAR26[VAR25] | VAR27, 1);
        }
        break;
    case VAR28:
        FUN13(&VAR5->VAR15, VAR7->VAR29);
        if (FUN14(&VAR5->VAR15, VAR3) < 0)
            VAR3 = VAR30;
        VAR7->VAR29 = VAR3;
        break;
    case VAR31:
        FUN13(&VAR5->VAR15, FUN15(VAR7, VAR7->VAR16));
        if (FUN14(&VAR5->VAR15, VAR3) < 0)
            VAR3 = VAR30;
        FUN16(VAR7, VAR7->VAR16, VAR3);
        break;
    default:
        FUN17("", VAR32, VAR2, VAR3);
        break;
    }
}
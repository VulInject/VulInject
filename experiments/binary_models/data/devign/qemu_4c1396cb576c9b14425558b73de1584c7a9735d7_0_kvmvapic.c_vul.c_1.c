static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR7;
    VAR8 *VAR9 = FUN2(VAR6);
    VAR10 *VAR11 = &VAR9->VAR11;
    hwaddr VAR12;
    VAR13 *VAR14 = VAR1;
    FUN3(VAR6);
    switch (VAR4)
    {
    case 2:
        if (VAR14->VAR15 == VAR16)
        {
            VAR12 = (VAR11->VAR17[VAR18].VAR19 + VAR11->VAR20) & VAR21;
            VAR14->VAR22 = VAR12 + VAR3;
            VAR14->VAR15 = VAR23;
        }
        if (FUN4(VAR14) < 0)
        {
            VAR14->VAR15 = VAR16;
            VAR14->VAR22 = 0;
            break;
        }
        break;
    case 1:
        if (FUN5())
        {
            FUN6();
            FUN7(VAR9, VAR11->VAR20 - 2, 0x66);
            FUN7(VAR9, VAR11->VAR20 - 1, 0x90);
            FUN8();
        }
        if (VAR14->VAR15 == VAR24)
        {
            break;
        }
        if (FUN9(VAR14, VAR11, VAR11->VAR20) < 0)
        {
            break;
        }
        if (FUN10(VAR14, VAR11) < 0)
        {
            break;
        }
        FUN11(VAR14, VAR9);
        break;
    default:
    case 4:
        if (!FUN12())
        {
            FUN13(VAR9->VAR25);
        }
        break;
    }
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10 = 0;
    while (!VAR10)
    {
        uint32_t VAR11, VAR12;
        if (FUN2(VAR9))
            return VAR13;
        VAR11 = FUN3(VAR9);
        VAR12 = FUN3(VAR9);
        switch (VAR11)
        {
        case FUN4('', '', '', ''):
            if (VAR6->VAR14)
                break;
            if (FUN5(VAR9, VAR4, VAR12) < 0)
                return FUN6(VAR15);
            VAR4->VAR16 = VAR6->VAR17;
            VAR10 = 1;
            break;
        case FUN4('', '', '', ''):
            if (FUN5(VAR9, VAR4, VAR12) < 0)
                return FUN6(VAR15);
            VAR4->VAR16 = VAR6->VAR17;
            VAR4->VAR18 = 1;
            VAR10 = 1;
            break;
        case FUN4('', '', '', ''):
            if (VAR12 < 13)
                return VAR19;
            if (FUN5(VAR9, VAR4, VAR12) < 0)
                return FUN6(VAR15);
            VAR4->VAR16 = VAR6->VAR20;
            VAR4->VAR21 |= VAR22;
            VAR4->VAR18 = FUN7(VAR4->VAR23);
            if (VAR4->VAR18 == 0xFFFFFFFFu)
                VAR4->VAR18 = FUN7(VAR4->VAR23 + 8);
            VAR10 = 1;
            break;
        default:
            FUN8(VAR9, VAR12);
            break;
        }
    }
    return 0;
}
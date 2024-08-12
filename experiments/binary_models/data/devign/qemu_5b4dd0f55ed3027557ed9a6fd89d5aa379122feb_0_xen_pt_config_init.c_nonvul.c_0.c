static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    uint32_t VAR9 = 0;
    int VAR10 = 0;
    VAR8 = FUN2(VAR7, 1);
    VAR8->VAR6 = VAR6;
    if (VAR6->VAR11)
    {
        uint32_t VAR12, VAR13;
        unsigned int VAR14;
        uint32_t VAR15;
        VAR10 = VAR6->FUN3(VAR2, VAR8->VAR6, VAR4->VAR16 + VAR6->VAR14, &VAR9);
        if (VAR10 < 0)
        {
            FUN4(VAR8);
            return VAR10;
        }
        if (VAR9 == VAR17)
        {
            FUN4(VAR8);
            return 0;
        }
        VAR14 = VAR4->VAR16 + VAR6->VAR14;
        VAR13 = 0xFFFFFFFF >> ((4 - VAR6->VAR18) << 3);
        switch (VAR6->VAR18)
        {
        case 1:
            VAR10 = FUN5(&VAR2->VAR19, VAR14, (VAR20 *)&VAR15);
            break;
        case 2:
            VAR10 = FUN6(&VAR2->VAR19, VAR14, (VAR21 *)&VAR15);
            break;
        case 4:
            VAR10 = FUN7(&VAR2->VAR19, VAR14, &VAR15);
            break;
        default:
            assert(1);
        }
        if (VAR10)
        {
            FUN4(VAR8);
            return VAR10;
        }
        VAR12 = VAR13 & ~VAR6->VAR22;
        if ((VAR9 & VAR12) != (VAR15 & VAR12))
        {
            uint32_t VAR23;
            VAR23 = VAR15 & VAR12;
            VAR23 |= VAR9 & VAR12;
            VAR23 |= ((VAR15 | VAR9)) & ~VAR13;
            FUN8(&VAR2->VAR24, "", VAR14, VAR9, VAR15, VAR23);
            VAR15 = VAR23;
        }
        else
            VAR15 = VAR9;
        if (VAR15 & ~VAR13)
        {
            FUN9(&VAR2->VAR24, "", VAR14, VAR15, VAR6->VAR18);
            FUN4(VAR8);
            return -VAR25;
        }
        switch (VAR6->VAR18)
        {
        case 1:
            FUN10(VAR2->VAR24.VAR26 + VAR14, (VAR20)VAR15);
            break;
        case 2:
            FUN11(VAR2->VAR24.VAR26 + VAR14, (VAR21)VAR15);
            break;
        case 4:
            FUN12(VAR2->VAR24.VAR26 + VAR14, VAR15);
            break;
        default:
            assert(1);
        }
        VAR8->VAR9 = VAR15;
    }
    FUN13(&VAR4->VAR27, VAR8, VAR28);
    return 0;
}
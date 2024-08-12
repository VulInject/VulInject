int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    uint32_t VAR10;
    if (VAR5 < VAR11)
    {
        if (VAR12 == 64 && VAR9->VAR13 & VAR14)
        {
            VAR9->VAR15[VAR16[VAR5]] = FUN3(VAR4);
            return sizeof(VAR17);
        }
        else if (VAR5 < VAR18)
        {
            VAR5 = VAR19[VAR5];
            VAR9->VAR15[VAR5] &= ~0xffffffffUL;
            VAR9->VAR15[VAR5] |= (VAR20)FUN4(VAR4);
            return 4;
        }
    }
    else if (VAR5 >= VAR21 && VAR5 < VAR21 + 8)
    {
        memcpy(&VAR9->VAR22[VAR5 - VAR21], VAR4, 10);
        return 10;
    }
    else if (VAR5 >= VAR23 && VAR5 < VAR23 + VAR11)
    {
        VAR5 -= VAR23;
        if (VAR5 < VAR18 || (VAR12 == 64 && VAR9->VAR13 & VAR14))
        {
            VAR9->VAR24[VAR5].FUN5(0) = FUN6(VAR4);
            VAR9->VAR24[VAR5].FUN5(1) = FUN6(VAR4 + 8);
            return 16;
        }
    }
    else
    {
        switch (VAR5)
        {
        case VAR25:
            if (VAR12 == 64 && VAR9->VAR13 & VAR14)
            {
                VAR9->VAR26 = FUN6(VAR4);
                return 8;
            }
            else
            {
                VAR9->VAR26 &= ~0xffffffffUL;
                VAR9->VAR26 |= (VAR20)FUN4(VAR4);
                return 4;
            }
        case VAR27:
            VAR9->VAR28 = FUN4(VAR4);
            return 4;
        case VAR29:
            return FUN7(VAR7, VAR30, VAR4);
        case VAR29 + 1:
            return FUN7(VAR7, VAR31, VAR4);
        case VAR29 + 2:
            return FUN7(VAR7, VAR32, VAR4);
        case VAR29 + 3:
            return FUN7(VAR7, VAR33, VAR4);
        case VAR29 + 4:
            return FUN7(VAR7, VAR34, VAR4);
        case VAR29 + 5:
            return FUN7(VAR7, VAR35, VAR4);
        case VAR21 + 8:
            VAR9->VAR36 = FUN4(VAR4);
            return 4;
        case VAR21 + 9:
            VAR10 = FUN4(VAR4);
            VAR9->VAR37 = (VAR10 >> 11) & 7;
            VAR9->VAR38 = VAR10 & ~0x3800;
            return 4;
        case VAR21 + 10:
            return 4;
        case VAR21 + 11:
            return 4;
        case VAR21 + 12:
            return 4;
        case VAR21 + 13:
            return 4;
        case VAR21 + 14:
            return 4;
        case VAR21 + 15:
            return 4;
        case VAR39:
            VAR9->VAR40 = FUN4(VAR4);
            return 4;
        }
    }
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    uint32_t VAR6;
    if (VAR5 < VAR7)
    {
        if (VAR8 == 64 && VAR2->VAR9 & VAR10)
        {
            VAR2->VAR11[VAR12[VAR5]] = FUN2(VAR4);
            return sizeof(VAR13);
        }
        else if (VAR5 < VAR14)
        {
            VAR5 = VAR15[VAR5];
            VAR2->VAR11[VAR5] &= ~0xffffffffUL;
            VAR2->VAR11[VAR5] |= (VAR16)FUN3(VAR4);
            return 4;
        }
    }
    else if (VAR5 >= VAR17 && VAR5 < VAR17 + 8)
    {
        memcpy(&VAR2->VAR18[VAR5 - VAR17], VAR4, 10);
        return 10;
    }
    else if (VAR5 >= VAR19 && VAR5 < VAR19 + VAR7)
    {
        VAR5 -= VAR19;
        if (VAR5 < VAR14 || (VAR8 == 64 && VAR2->VAR9 & VAR10))
        {
            VAR2->VAR20[VAR5].FUN4(0) = FUN5(VAR4);
            VAR2->VAR20[VAR5].FUN4(1) = FUN5(VAR4 + 8);
            return 16;
        }
    }
    else
    {
        switch (VAR5)
        {
        case VAR21:
            if (VAR8 == 64 && VAR2->VAR9 & VAR10)
            {
                VAR2->VAR22 = FUN5(VAR4);
                return 8;
            }
            else
            {
                VAR2->VAR22 &= ~0xffffffffUL;
                VAR2->VAR22 |= (VAR16)FUN3(VAR4);
                return 4;
            }
        case VAR23:
            VAR2->VAR24 = FUN3(VAR4);
            return 4;
        case VAR25:
            return FUN6(VAR2, VAR26, VAR4);
        case VAR25 + 1:
            return FUN6(VAR2, VAR27, VAR4);
        case VAR25 + 2:
            return FUN6(VAR2, VAR28, VAR4);
        case VAR25 + 3:
            return FUN6(VAR2, VAR29, VAR4);
        case VAR25 + 4:
            return FUN6(VAR2, VAR30, VAR4);
        case VAR25 + 5:
            return FUN6(VAR2, VAR31, VAR4);
        case VAR17 + 8:
            VAR2->VAR32 = FUN3(VAR4);
            return 4;
        case VAR17 + 9:
            VAR6 = FUN3(VAR4);
            VAR2->VAR33 = (VAR6 >> 11) & 7;
            VAR2->VAR34 = VAR6 & ~0x3800;
            return 4;
        case VAR17 + 10:
            return 4;
        case VAR17 + 11:
            return 4;
        case VAR17 + 12:
            return 4;
        case VAR17 + 13:
            return 4;
        case VAR17 + 14:
            return 4;
        case VAR17 + 15:
            return 4;
        case VAR35:
            VAR2->VAR36 = FUN3(VAR4);
            return 4;
        }
    }
    return 0;
}
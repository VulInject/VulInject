static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    uint32_t VAR6;
    if (VAR5 < VAR7)
    {
        VAR2->VAR8[VAR9[VAR5]] = FUN2(VAR4);
        return sizeof(VAR10);
    }
    else if (VAR5 >= VAR11 && VAR5 < VAR11 + 8)
    {
        memcpy(&VAR2->VAR12[VAR5 - VAR11], VAR4, 10);
        return 10;
    }
    else if (VAR5 >= VAR13 && VAR5 < VAR13 + VAR7)
    {
        VAR5 -= VAR13;
        VAR2->VAR14[VAR5].FUN3(0) = FUN4(VAR4);
        VAR2->VAR14[VAR5].FUN3(1) = FUN4(VAR4 + 8);
        return 16;
    }
    else
    {
        switch (VAR5)
        {
        case VAR15:
            VAR2->VAR16 = FUN2(VAR4);
            return sizeof(VAR10);
        case VAR17:
            VAR2->VAR18 = FUN5(VAR4);
            return 4;
            VAR6 = FUN5(VAR4);
            if (VAR6 != VAR2->VAR19[VAR20].VAR21)
                FUN6(VAR2, VAR20, VAR6);
            return 4 case VAR22 : FUN7(10, VAR23);
        case VAR22 + 1:
            FUN7(11, VAR24);
        case VAR22 + 2:
            FUN7(12, VAR25);
        case VAR22 + 3:
            FUN7(13, VAR26);
        case VAR22 + 4:
            FUN7(14, VAR27);
        case VAR22 + 5:
            FUN7(15, VAR28);
        case VAR11 + 8:
            VAR2->VAR29 = FUN5(VAR4);
            return 4;
        case VAR11 + 9:
            VAR6 = FUN5(VAR4);
            VAR2->VAR30 = (VAR6 >> 11) & 7;
            VAR2->VAR31 = VAR6 & ~0x3800;
            return 4;
        case VAR11 + 10:
            return 4;
        case VAR11 + 11:
            return 4;
        case VAR11 + 12:
            return 4;
        case VAR11 + 13:
            return 4;
        case VAR11 + 14:
            return 4;
        case VAR11 + 15:
            return 4;
        case VAR32:
            VAR2->VAR33 = FUN5(VAR4);
            return 4;
        }
    }
    return 0;
}
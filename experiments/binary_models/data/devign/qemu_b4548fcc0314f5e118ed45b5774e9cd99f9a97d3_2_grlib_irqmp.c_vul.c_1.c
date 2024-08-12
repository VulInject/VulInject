FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    assert(VAR5 != NULL);
    VAR7 = VAR5->VAR7;
    assert(VAR7 != NULL);
    VAR2 &= 0xff;
    switch (VAR2)
    {
    case VAR8:
        VAR3 &= 0xFFFF << 1;
        VAR7->VAR9 = VAR3;
        return;
    case VAR10:
        return;
    case VAR11:
        VAR3 &= 0xFFFE;
        VAR7->VAR12[0] = VAR3;
        FUN2(VAR5->VAR7);
        return;
    case VAR13:
        VAR3 &= ~1;
        VAR7->VAR14 &= ~VAR3;
        return;
    case VAR15:
        return;
    case VAR16:
        VAR3 &= 0xFFFE;
        VAR7->VAR17 = VAR3;
        return;
    default:
        break;
    }
    if (VAR2 >= VAR18 && VAR2 < VAR19)
    {
        int VAR20 = (VAR2 - VAR18) / 4;
        assert(VAR20 >= 0 && VAR20 < VAR21);
        VAR3 &= ~1;
        VAR7->VAR22[VAR20] = VAR3;
        FUN2(VAR5->VAR7);
        return;
    }
    if (VAR2 >= VAR19 && VAR2 < VAR23)
    {
        int VAR20 = (VAR2 - VAR19) / 4;
        assert(VAR20 >= 0 && VAR20 < VAR21);
        uint32_t VAR12 = VAR3 & 0xFFFE;
        uint32_t VAR24 = (VAR3 >> 16) & 0xFFFE;
        uint32_t VAR25 = VAR7->VAR12[VAR20];
        VAR7->VAR12[VAR20] = (VAR25 | VAR12) & ~VAR24;
        FUN2(VAR5->VAR7);
        return;
    }
    if (VAR2 >= VAR23 && VAR2 < VAR26)
    {
        int VAR20 = (VAR2 - VAR23) / 4;
        assert(VAR20 >= 0 && VAR20 < VAR21);
        VAR3 &= 0xF;
        VAR7->VAR27[VAR20] = VAR3;
        return;
    }
    FUN3("", VAR2);
}
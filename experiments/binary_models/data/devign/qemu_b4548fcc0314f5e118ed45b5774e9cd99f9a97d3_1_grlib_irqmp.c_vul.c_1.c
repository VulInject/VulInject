static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7;
    assert(VAR5 != NULL);
    VAR7 = VAR5->VAR7;
    assert(VAR7 != NULL);
    VAR3 &= 0xff;
    switch (VAR3)
    {
    case VAR8:
        return VAR7->VAR9;
    case VAR10:
        return VAR7->VAR11;
    case VAR12:
        return VAR7->VAR13[0];
    case VAR14:
    case VAR15:
        return 0;
    case VAR16:
        return VAR7->VAR17;
    default:
        break;
    }
    if (VAR3 >= VAR18 && VAR3 < VAR19)
    {
        int VAR20 = (VAR3 - VAR18) / 4;
        assert(VAR20 >= 0 && VAR20 < VAR21);
        return VAR7->VAR22[VAR20];
    }
    if (VAR3 >= VAR19 && VAR3 < VAR23)
    {
        int VAR20 = (VAR3 - VAR19) / 4;
        assert(VAR20 >= 0 && VAR20 < VAR21);
        return VAR7->VAR13[VAR20];
    }
    if (VAR3 >= VAR23 && VAR3 < VAR24)
    {
        int VAR20 = (VAR3 - VAR23) / 4;
        assert(VAR20 >= 0 && VAR20 < VAR21);
        return VAR7->VAR25[VAR20];
    }
    FUN2("", VAR3);
    return 0;
}
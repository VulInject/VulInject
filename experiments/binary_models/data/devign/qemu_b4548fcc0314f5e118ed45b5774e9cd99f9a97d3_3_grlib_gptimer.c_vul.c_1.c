static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    target_phys_addr_t VAR6;
    int VAR7;
    uint32_t VAR8 = 0;
    VAR3 &= 0xff;
    switch (VAR3)
    {
    case VAR9:
        FUN2(-1, "", VAR5->VAR10);
        return VAR5->VAR10;
    case VAR11:
        FUN2(-1, "", VAR5->VAR12);
        return VAR5->VAR12;
    case VAR13:
        FUN2(-1, "", VAR5->VAR14);
        return VAR5->VAR14;
    default:
        break;
    }
    VAR6 = (VAR3 % VAR15);
    VAR7 = (VAR3 - VAR15) / VAR15;
    if (VAR7 >= 0 && VAR7 < VAR5->VAR16)
    {
        switch (VAR6)
        {
        case VAR17:
            VAR8 = FUN3(VAR5->VAR18[VAR7].VAR19);
            FUN2(VAR7, "", VAR8);
            return VAR8;
        case VAR20:
            VAR8 = VAR5->VAR18[VAR7].VAR12;
            FUN2(VAR7, "", VAR8);
            return VAR8;
        case VAR13:
            FUN2(VAR7, "", VAR5->VAR18[VAR7].VAR14);
            return VAR5->VAR18[VAR7].VAR14;
        default:
            break;
        }
    }
    FUN4("", VAR3);
    return 0;
}
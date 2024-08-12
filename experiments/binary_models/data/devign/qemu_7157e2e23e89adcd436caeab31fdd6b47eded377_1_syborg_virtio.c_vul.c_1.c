static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = VAR5->VAR7;
    FUN2("", (int)VAR2, VAR3);
    if (VAR2 >= VAR8)
    {
        return FUN3(VAR7, VAR2 - VAR8, VAR3);
    }
    switch (VAR2 >> 2)
    {
    case VAR9:
        if (VAR7->VAR10)
            VAR7->FUN4(VAR7, VAR3);
        VAR7->VAR11 = VAR3;
        break;
    case VAR12:
        if (VAR3 == 0)
            FUN5(VAR7);
        else
            FUN6(VAR7, VAR7->VAR13, VAR3);
        break;
    case VAR14:
        if (VAR3 < VAR15)
            VAR7->VAR13 = VAR3;
        break;
    case VAR16:
        FUN7(VAR7, VAR3);
        break;
    case VAR17:
        FUN8(VAR7, VAR3 & 0xFF);
        if (VAR7->VAR18 == 0)
            FUN5(VAR7);
        break;
    case VAR19:
        VAR5->VAR20 = VAR3;
        FUN9(VAR7);
        break;
    case VAR21:
        VAR7->VAR22 &= ~VAR3;
        FUN9(VAR7);
        break;
    default:
        FUN10("", (int)VAR2);
        break;
    }
}
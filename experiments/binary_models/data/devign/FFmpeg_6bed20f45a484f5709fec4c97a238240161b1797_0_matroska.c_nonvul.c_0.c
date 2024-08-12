FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    int VAR4 = 0;
    uint32_t VAR5;
    VAR6 *VAR7 = NULL;
    int VAR8 = 0;
    int VAR9 = VAR10, VAR11 = VAR2->VAR12;
    uint64_t VAR13 = VAR14;
    int VAR15 = -1;
    VAR16 *VAR17;
    int VAR18 = 0;
    int64_t VAR19 = 0;
    FUN2(VAR2->VAR20, VAR21, "");
    while (VAR4 == 0)
    {
        if (!(VAR5 = FUN3(VAR2, &VAR2->VAR22)))
        {
            VAR4 = VAR23;
            break;
        }
        else if (VAR2->VAR22)
        {
            VAR2->VAR22--;
            break;
        }
        switch (VAR5)
        {
        case VAR24:
        {
            VAR19 = FUN4(&VAR2->VAR20->VAR25);
            VAR4 = FUN5(VAR2, &VAR5, &VAR17, &VAR18);
            break;
        }
        case VAR26:
        {
            if ((VAR4 = FUN6(VAR2, &VAR5, &VAR13)) < 0)
                break;
            break;
        }
        case VAR27:
        {
            int64_t VAR28;
            VAR9 = 0;
            if (VAR11 != VAR2->VAR12)
                VAR2->VAR29[VAR11]->VAR30 = 0;
            if ((VAR4 = FUN7(VAR2, &VAR5, &VAR28)) < 0)
                break;
            if (VAR28 > 0)
                VAR8 = 1;
            break;
        }
        default:
            FUN2(VAR2->VAR20, VAR31, "", VAR5);
        case VAR32:
            VAR4 = FUN8(VAR2);
            break;
        }
        if (VAR2->VAR22)
        {
            VAR2->VAR22--;
            break;
        }
    }
    if (VAR4)
        return VAR4;
    if (VAR18 > 0)
        VAR4 = FUN9(VAR2, VAR17, VAR18, VAR19, VAR3, VAR9, VAR8, &VAR15, &VAR7);
    if (VAR7)
    {
        if (VAR13 != VAR14)
            VAR7->VAR13 = VAR13;
        else if (VAR15 >= 0 && VAR15 < VAR2->VAR33)
            VAR7->VAR13 = VAR2->VAR34[VAR15]->VAR35 / VAR2->VAR36;
    }
    return VAR4;
}
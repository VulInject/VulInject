static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, enum qcow2_discard_type VAR5, bool VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    VAR13 = FUN2(VAR2, VAR3, &VAR11, &VAR12);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    VAR4 = FUN3(VAR4, VAR8->VAR15 - VAR12);
    assert(VAR4 <= VAR16);
    for (VAR14 = 0; VAR14 < VAR4; VAR14++)
    {
        uint64_t VAR17;
        VAR17 = FUN4(VAR11[VAR12 + VAR14]);
        switch (FUN5(VAR17))
        {
        case VAR18:
            if (VAR6 || !VAR2->VAR19)
            {
                continue;
            }
            break;
        case VAR20:
            if (!VAR6)
            {
                continue;
            }
            break;
        case VAR21:
        case VAR22:
        case VAR23:
            break;
        default:
            FUN6();
        }
        FUN7(VAR2, VAR8->VAR24, VAR11);
        if (!VAR6 && VAR8->VAR25 >= 3)
        {
            VAR11[VAR12 + VAR14] = FUN8(VAR26);
        }
        else
        {
            VAR11[VAR12 + VAR14] = FUN8(0);
        }
        FUN9(VAR2, VAR17, 1, VAR5);
    }
    FUN10(VAR2, VAR8->VAR24, (void **)&VAR11);
    return VAR4;
}
FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    uint32_t VAR4;
    uint64_t VAR5 = 0;
    VAR6 *VAR7;
    int64_t VAR8;
    int VAR9;
    FUN2(VAR2->VAR10, VAR11, "" VAR12 "", FUN3(&VAR2->VAR10->VAR13));
    while (VAR3 == 0)
    {
        if (!(VAR4 = FUN4(VAR2, &VAR2->VAR14)))
        {
            VAR3 = VAR15;
            break;
        }
        else if (VAR2->VAR14)
        {
            VAR2->VAR14--;
            break;
        }
        switch (VAR4)
        {
        case VAR16:
        {
            uint64_t VAR17;
            if ((VAR3 = FUN5(VAR2, &VAR4, &VAR17)) < 0)
                break;
            VAR5 = VAR17;
            break;
        }
        case VAR18:
            if ((VAR3 = FUN6(VAR2, &VAR4)) < 0)
                break;
            VAR3 = FUN7(VAR2, VAR5);
            break;
        case VAR19:
            VAR8 = FUN3(&VAR2->VAR10->VAR13);
            VAR3 = FUN8(VAR2, &VAR4, &VAR7, &VAR9);
            if (VAR3 == 0)
                VAR3 = FUN9(VAR2, VAR7, VAR9, VAR8, VAR5, -1, 0, NULL, NULL);
            break;
        default:
            FUN2(VAR2->VAR10, VAR20, "", VAR4);
        case VAR21:
            VAR3 = FUN10(VAR2);
            break;
        }
        if (VAR2->VAR14)
        {
            VAR2->VAR14--;
            break;
        }
    }
    return VAR3;
}
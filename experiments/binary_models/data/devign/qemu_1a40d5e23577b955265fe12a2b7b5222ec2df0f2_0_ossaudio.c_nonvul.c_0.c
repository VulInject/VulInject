static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    int VAR5 = VAR2->VAR6.VAR7;
    int VAR8;
    int VAR9 = FUN2(VAR2);
    int VAR10 = VAR2->VAR11 - VAR9;
    size_t VAR12 = 0;
    struct
    {
        int VAR13;
        int VAR14;
    } VAR15[2] = {{.VAR13 = VAR2->VAR16, .VAR14 = 0}, {.VAR13 = 0, .VAR14 = 0}};
    if (!VAR10)
    {
        return 0;
    }
    if (VAR2->VAR16 + VAR10 > VAR2->VAR11)
    {
        VAR15[0].VAR14 = (VAR2->VAR11 - VAR2->VAR16) << VAR5;
        VAR15[1].VAR14 = (VAR10 - (VAR2->VAR11 - VAR2->VAR16)) << VAR5;
    }
    else
    {
        VAR15[0].VAR14 = VAR10 << VAR5;
    }
    for (VAR8 = 0; VAR8 < 2; ++VAR8)
    {
        ssize_t VAR17;
        if (VAR15[VAR8].VAR14)
        {
            void *VAR18 = FUN3(VAR4->VAR19, VAR15[VAR8].VAR13 << VAR5);
            VAR17 = read(VAR4->VAR20, VAR18, VAR15[VAR8].VAR14);
            if (VAR17 > 0)
            {
                if (VAR17 & VAR2->VAR6.VAR21)
                {
                    FUN4(""
                          "",
                          VAR17, VAR15[VAR8].VAR13 << VAR5, VAR2->VAR6.VAR21 + 1);
                }
                VAR12 += VAR17 >> VAR5;
                VAR2->FUN5(VAR2->VAR22 + VAR15[VAR8].VAR13, VAR18, VAR17 >> VAR5, &VAR23);
            }
            if (VAR15[VAR8].VAR14 - VAR17)
            {
                if (VAR17 == -1)
                {
                    switch (VAR24)
                    {
                    case VAR25:
                    case VAR26:
                        break;
                    default:
                        FUN6(VAR24, "", VAR15[VAR8].VAR14, VAR18);
                        break;
                    }
                }
                break;
            }
        }
    }
    VAR2->VAR16 = (VAR2->VAR16 + VAR12) % VAR2->VAR11;
    return VAR12;
}
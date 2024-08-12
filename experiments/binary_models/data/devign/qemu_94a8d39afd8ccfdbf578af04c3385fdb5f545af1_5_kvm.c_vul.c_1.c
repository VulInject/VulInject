VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, int VAR6)
{
    struct VAR7 *VAR8;
    int VAR9, VAR10;
    uint32_t VAR11 = 0;
    uint32_t VAR12;
    if (!FUN2(VAR3->VAR13, VAR14))
    {
        return -1U;
    }
    VAR10 = 1;
    while ((VAR8 = FUN3(VAR3->VAR13, VAR10)) == NULL)
    {
        VAR10 *= 2;
    }
    for (VAR9 = 0; VAR9 < VAR8->VAR15; ++VAR9)
    {
        if (VAR8->VAR16[VAR9].VAR4 == VAR4 && VAR8->VAR16[VAR9].VAR5 == VAR5)
        {
            switch (VAR6)
            {
            case VAR17:
                VAR11 = VAR8->VAR16[VAR9].VAR18;
                break;
            case VAR19:
                VAR11 = VAR8->VAR16[VAR9].VAR20;
                break;
            case VAR21:
                VAR11 = VAR8->VAR16[VAR9].VAR22;
                break;
            case VAR23:
                VAR11 = VAR8->VAR16[VAR9].VAR24;
                switch (VAR4)
                {
                case 1:
                    VAR11 |= VAR25 | VAR26 | VAR27 | VAR28;
                    break;
                case 0x80000001:
                    VAR12 = FUN1(VAR3, 1, 0, VAR23);
                    VAR11 |= VAR12 & 0x183f7ff;
                    break;
                }
                break;
            }
        }
    }
    FUN4(VAR8);
    return VAR11;
}
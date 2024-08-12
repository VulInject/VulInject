static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    int64_t VAR12 = 0;
    int VAR13 = 0;
    if (FUN2(VAR9))
        return VAR14;
    while (VAR13 <= 0)
    {
        if (!VAR6->VAR15 || VAR6->VAR16 || VAR6->VAR17 >= VAR6->VAR18)
        {
            if (FUN3(VAR2) < 0 || VAR6->VAR18 <= 0)
                return VAR14;
        }
        VAR11 = &VAR6->VAR15[VAR6->VAR17];
        VAR12 = VAR11->VAR12;
        VAR6->VAR17++;
        if (VAR12 <= 0)
            continue;
        if (VAR6->VAR19 + VAR11->VAR12 > VAR20)
            return VAR21;
        if (FUN2(VAR9))
            return VAR14;
        switch (VAR11->VAR22)
        {
        case VAR23:
            VAR13 = FUN4(VAR2, VAR11, VAR4);
            break;
        case VAR24:
            VAR13 = FUN5(VAR2, VAR11, VAR4);
            break;
        default:
            FUN6(VAR2, "", VAR11->VAR22);
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x05:
            VAR6->VAR19 += VAR11->VAR12;
            break;
        }
    }
    return 0;
}
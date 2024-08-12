static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    int64_t VAR9;
    VAR10 *VAR11;
    while (1)
    {
        VAR8 = FUN2(VAR6->VAR2, VAR4);
        if (VAR8 == VAR12)
        {
            if ((VAR8 = FUN3(VAR2)) < 0)
                return VAR8;
            continue;
        }
        if (VAR8 < 0)
            return VAR8;
        if (VAR6->VAR13)
        {
            if ((VAR8 = FUN4(VAR2)) < 0)
            {
                FUN5(VAR4);
                return VAR8;
            }
            VAR11 = &VAR6->VAR14->VAR15[VAR4->VAR16];
            if (VAR11->VAR17 < 0)
            {
                FUN5(VAR4);
                continue;
            }
            VAR4->VAR16 = VAR11->VAR17;
        }
        break;
    }
    VAR9 = FUN6(VAR6->VAR14->VAR18 - VAR6->VAR2->VAR18, VAR19, VAR6->VAR2->VAR15[VAR4->VAR16]->VAR20);
    if (VAR4->VAR21 != VAR22)
        VAR4->VAR21 += VAR9;
    if (VAR4->VAR23 != VAR22)
        VAR4->VAR23 += VAR9;
    return VAR8;
}
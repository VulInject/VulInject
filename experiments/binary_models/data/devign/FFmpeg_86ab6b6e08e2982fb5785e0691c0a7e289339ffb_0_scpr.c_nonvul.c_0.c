static int FUN1(VAR1 *VAR2, unsigned *VAR3, unsigned VAR4, unsigned VAR5, unsigned *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    unsigned VAR11 = VAR3[VAR4];
    unsigned VAR12;
    unsigned VAR13 = 0, VAR14 = 0, VAR15 = 0;
    int VAR16, VAR17;
    if ((VAR17 = VAR2->FUN2(VAR10, VAR11, &VAR12)) < 0)
        return VAR17;
    while (VAR13 < VAR4)
    {
        VAR15 = VAR3[VAR13];
        if (VAR12 >= VAR14 + VAR15)
            VAR14 += VAR15;
        else
            break;
        VAR13++;
    }
    if ((VAR17 = VAR2->FUN3(VAR8, VAR10, VAR14, VAR15, VAR11)) < 0)
        return VAR17;
    VAR3[VAR13] = VAR15 + VAR5;
    VAR11 += VAR5;
    if (VAR11 > VAR18)
    {
        VAR11 = 0;
        for (VAR16 = 0; VAR16 < VAR4; VAR16++)
        {
            unsigned VAR19 = (VAR3[VAR16] >> 1) + 1;
            VAR3[VAR16] = VAR19;
            VAR11 += VAR19;
        }
    }
    VAR3[VAR4] = VAR11;
    *VAR6 = VAR13;
    return 0;
}
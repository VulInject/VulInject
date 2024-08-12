static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR4->VAR9;
    VAR10 *VAR11, *VAR12;
    int VAR13;
    VAR10 *VAR14, *VAR15;
    VAR13 = FUN2(VAR8->VAR16, &VAR11);
    VAR12 = VAR11;
    while (VAR13 > 4)
    {
        uint32_t VAR17 = FUN3(VAR12);
        int VAR18;
        VAR15 = VAR14 = VAR12;
        VAR12 += 4;
        VAR13 -= 4;
        if (VAR17 > VAR13 || VAR17 < 2)
            break;
        if (VAR12[1] >= VAR19 && VAR12[1] <= VAR20)
            VAR18 = VAR4->VAR21;
        else
            VAR18 = VAR4->VAR22;
        VAR14[0] = '';
        VAR14[1] = VAR18;
        FUN4(VAR14 + 2, VAR17);
        FUN5(VAR6->VAR23, VAR15, 4 + VAR17);
        VAR12 += VAR17;
        VAR13 -= VAR17;
    }
    FUN6(VAR11);
    FUN7(&VAR8->VAR16, VAR24);
    return 0;
}
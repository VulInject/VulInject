int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    int VAR7, VAR8, VAR9 = 0, VAR10, VAR11, VAR12, VAR13, VAR14 = 0;
    struct VAR15 *VAR16, *VAR17 = VAR2->VAR3;
    VAR13 = FUN2(VAR2) % VAR6->VAR7;
    VAR8 = VAR6->VAR18 - VAR2->VAR19;
    if (FUN3(VAR20, VAR8 < 0 || VAR8 > VAR6->VAR7))
    {
        FUN4("", VAR8, VAR6->VAR7);
        return 0;
    }
    VAR7 = VAR4 >> VAR2->VAR21.VAR22;
    if (!VAR8)
    {
        return 0;
    }
    VAR10 = (VAR8 * VAR2->VAR23) >> 32;
    VAR10 = FUN5(VAR10, VAR7);
    while (VAR10)
    {
        VAR16 = VAR6->VAR24 + VAR13;
        VAR11 = VAR6->VAR25 - VAR13;
        if (VAR11 <= 0)
        {
            VAR11 = VAR6->VAR7 - VAR13;
        }
        if (!VAR11)
        {
            break;
        }
        VAR12 = VAR10;
        if (FUN3(VAR20, VAR12 < 0))
        {
            FUN4("", VAR12);
            return 0;
        }
        FUN6(VAR2->VAR26, VAR16, VAR17, &VAR11, &VAR12);
        VAR10 -= VAR12;
        VAR13 = (VAR13 + VAR11) % VAR6->VAR7;
        VAR17 += VAR12;
        VAR9 += VAR12;
        VAR14 += VAR11;
    }
    VAR2->FUN7(VAR3, VAR2->VAR3, VAR9);
    VAR2->VAR19 += VAR14;
    return VAR9 << VAR2->VAR21.VAR22;
}
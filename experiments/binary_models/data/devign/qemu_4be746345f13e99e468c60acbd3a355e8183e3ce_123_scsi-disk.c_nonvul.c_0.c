static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8.VAR9);
    VAR3 *VAR10 = VAR4;
    int VAR11 = VAR2->VAR8.VAR11.VAR12[0];
    int VAR13 = VAR2->VAR8.VAR11.VAR14;
    int VAR15 = (VAR11 == VAR16 ? 4 : 8);
    int VAR17;
    int VAR18;
    if ((VAR2->VAR8.VAR11.VAR12[1] & 0x11) != 0x10)
    {
        goto VAR19;
    }
    if (VAR13 < VAR15)
    {
        goto VAR20;
    }
    VAR17 = (VAR11 == VAR16 ? VAR10[3] : FUN3(&VAR10[6]));
    VAR13 -= VAR15;
    VAR10 += VAR15;
    if (VAR13 < VAR17)
    {
        goto VAR20;
    }
    if (VAR17 != 0 && VAR17 != 8)
    {
        goto VAR21;
    }
    VAR13 -= VAR17;
    VAR10 += VAR17;
    for (VAR18 = 0; VAR18 < 2; VAR18++)
    {
        if (FUN4(VAR2, VAR10, VAR13, VAR18 == 1) < 0)
        {
            assert(VAR18 == 0);
            return;
        }
    }
    if (!FUN5(VAR6->VAR7.VAR22.VAR23))
    {
        FUN6(&VAR2->VAR8);
        FUN7(FUN8(VAR6->VAR7.VAR22.VAR23), &VAR2->VAR24, 0, VAR25);
        VAR2->VAR8.VAR26 = FUN9(VAR6->VAR7.VAR22.VAR23, VAR27, VAR2);
        return;
    }
    FUN10(&VAR2->VAR8, VAR28);
    return;
VAR21:
    FUN11(VAR2, FUN12(VAR29));
    return;
VAR20:
    FUN11(VAR2, FUN12(VAR30));
    return;
VAR19:
    FUN11(VAR2, FUN12(VAR31));
}
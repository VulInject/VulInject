static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    QCowL2Meta VAR14;
    uint64_t VAR15;
    QEMUIOVector VAR16;
    uint64_t VAR17 = 0;
    VAR18 *VAR19 = NULL;
    VAR14.VAR20 = 0;
    FUN2(&VAR14.VAR21);
    FUN3(&VAR16, VAR6->VAR22);
    VAR8->VAR23 = -1;
    FUN4(&VAR8->VAR24);
    while (VAR4 != 0)
    {
        VAR10 = VAR3 & (VAR8->VAR25 - 1);
        VAR11 = VAR10 + VAR4;
        if (VAR8->VAR26 && VAR11 > VAR27 * VAR8->VAR25)
        {
            VAR11 = VAR27 * VAR8->VAR25;
        }
        VAR12 = FUN5(VAR2, VAR3 << 9, VAR10, VAR11, &VAR13, &VAR14);
        if (VAR12 < 0)
        {
            goto VAR28;
        }
        VAR15 = VAR14.VAR15;
        assert((VAR15 & 511) == 0);
        FUN6(&VAR16);
        FUN7(&VAR16, VAR6, VAR17, VAR13 * 512);
        if (VAR8->VAR26)
        {
            if (!VAR19)
            {
                VAR19 = FUN8(VAR27 * VAR8->VAR29);
            }
            assert(VAR16.VAR30 <= VAR27 * VAR8->VAR29);
            FUN9(&VAR16, VAR19);
            FUN10(VAR8, VAR3, VAR19, VAR19, VAR13, 1, &VAR8->VAR31);
            FUN6(&VAR16);
            FUN11(&VAR16, VAR19, VAR13 * 512);
        }
        FUN12(VAR2->VAR32, VAR33);
        FUN13(&VAR8->VAR24);
        VAR12 = FUN14(VAR2->VAR32, (VAR15 >> 9) + VAR10, VAR13, &VAR16);
        FUN4(&VAR8->VAR24);
        if (VAR12 < 0)
        {
            goto VAR28;
        }
        VAR12 = FUN15(VAR2, &VAR14);
        FUN16(VAR8, &VAR14);
        if (VAR12 < 0)
        {
            goto VAR28;
        }
        VAR4 -= VAR13;
        VAR3 += VAR13;
        VAR17 += VAR13 * 512;
    }
    VAR12 = 0;
VAR28:
    FUN13(&VAR8->VAR24);
    FUN17(&VAR16);
    return VAR12;
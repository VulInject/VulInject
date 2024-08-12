int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4, int VAR5, int *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13;
    uint64_t VAR14, *VAR15;
    int64_t VAR16;
    unsigned int VAR17, VAR18 = 0;
    VAR7 *VAR19;
    VAR13 = FUN2(VAR2, VAR3, &VAR15, &VAR14, &VAR12);
    if (VAR13 < 0)
    {
        return VAR13;
    }
VAR20:
    VAR17 = FUN3(VAR10, VAR5 << 9);
    VAR17 = FUN4(VAR17, VAR10->VAR21 - VAR12);
    VAR16 = FUN5(VAR15[VAR12]);
    if (VAR16 & VAR22)
    {
        VAR17 = FUN6(VAR17, VAR10->VAR23, &VAR15[VAR12], 0, 0);
        VAR16 &= ~VAR22;
        VAR8->VAR17 = 0;
        goto VAR24;
    }
    if (VAR16 & VAR25)
        VAR17 = 1;
    while (VAR18 < VAR17)
    {
        VAR18 += FUN6(VAR17 - VAR18, VAR10->VAR23, &VAR15[VAR12], VAR18, 0);
        if ((VAR18 >= VAR17) || FUN5(VAR15[VAR12 + VAR18]))
        {
            break;
        }
        VAR18 += FUN7(VAR17 - VAR18, &VAR15[VAR12 + VAR18]);
        if (VAR18 >= VAR17)
        {
            break;
        }
        VAR16 = FUN5(VAR15[VAR12 + VAR18]);
        if ((VAR16 & VAR22) || (VAR16 & VAR25))
            break;
    }
    assert(VAR18 <= VAR17);
    VAR17 = VAR18;
    FUN8(VAR19, &VAR10->VAR26, VAR27)
    {
        uint64_t VAR28 = VAR3 + VAR17 * VAR10->VAR23;
        uint64_t VAR29 = VAR19->VAR3;
        uint64_t VAR30 = VAR19->VAR3 + VAR19->VAR17 * VAR10->VAR23;
        if (VAR28 < VAR29 || VAR3 > VAR30)
        {
        }
        else
        {
            if (VAR3 < VAR29)
            {
                VAR17 = (VAR29 - VAR3) >> VAR10->VAR31;
            }
            else
            {
                VAR17 = 0;
            }
            if (VAR17 == 0)
            {
                FUN9(&VAR10->VAR32);
                FUN10(&VAR19->VAR33);
                FUN11(&VAR10->VAR32);
                goto VAR20;
            }
        }
    }
    if (!VAR17)
    {
        FUN12();
    }
    VAR8->VAR3 = VAR3;
    VAR8->VAR4 = VAR4;
    VAR8->VAR17 = VAR17;
    FUN13(&VAR10->VAR26, VAR8, VAR27);
    VAR16 = FUN14(VAR2, VAR17 * VAR10->VAR23);
    if (VAR16 < 0)
    {
        VAR13 = VAR16;
        goto VAR34;
    }
VAR24:
    VAR13 = FUN15(VAR2, VAR10->VAR35, (void **)&VAR15);
    if (VAR13 < 0)
    {
        goto VAR36;
    }
    VAR8->VAR37 = FUN4(VAR17 << (VAR10->VAR31 - 9), VAR5);
    VAR8->VAR16 = VAR16;
    *VAR6 = VAR8->VAR37 - VAR4;
    return 0;
VAR34:
    FUN15(VAR2, VAR10->VAR35, (void **)&VAR15);
VAR36:
    FUN16(VAR8, VAR27);
    return VAR13;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, VHDXImageType VAR6, bool VAR7, uint64_t VAR8, uint32_t VAR9)
{
    int VAR10 = 0;
    uint64_t VAR11;
    uint64_t VAR12 = 0;
    uint64_t VAR13 = 0;
    uint64_t VAR14;
    int VAR15;
    VHDXSectorInfo VAR16;
    assert(VAR4->VAR17 == NULL);
    VAR11 = VAR8 + VAR9 + 5 * VAR18;
    VAR12 = VAR5 >> VAR4->VAR19;
    if (VAR6 == VAR20)
    {
        VAR10 = FUN2(VAR2, VAR11);
        if (VAR10 < 0)
        {
            goto VAR21;
        }
    }
    else if (VAR6 == VAR22)
    {
        VAR10 = FUN2(VAR2, VAR11 + VAR5);
        if (VAR10 < 0)
        {
            goto VAR21;
        }
    }
    else
    {
        VAR10 = -VAR23;
        goto VAR21;
    }
    if (VAR6 == VAR22 || VAR7 || FUN3(VAR2) == 0)
    {
        VAR4->VAR17 = FUN4(VAR9);
        if (VAR9 && VAR4->VAR17 == NULL)
        {
            VAR10 = -VAR24;
            goto VAR21;
        }
        VAR15 = VAR6 == VAR22 ? VAR25 : VAR26;
        VAR15 = VAR7 ? VAR27 : VAR15;
        while (VAR13 < VAR12)
        {
            FUN5(VAR4, VAR13, VAR4->VAR28, &VAR16);
            VAR16.VAR8 = VAR11 + (VAR13 << VAR4->VAR19);
            VAR16.VAR8 = FUN6(VAR16.VAR8, VAR18);
            FUN7(VAR2, VAR4, &VAR16, &VAR14, &VAR14, VAR15);
            FUN8(&VAR4->VAR17[VAR16.VAR29]);
            VAR13 += VAR4->VAR28;
        }
        VAR10 = FUN9(VAR2, VAR8, VAR4->VAR17, VAR9);
        if (VAR10 < 0)
        {
            goto VAR21;
        }
    }
VAR21:
    FUN10(VAR4->VAR17);
    return VAR10;
}
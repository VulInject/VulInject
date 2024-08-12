static int FUN1(VAR1 *VAR2, bool VAR3, uint32_t VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9, unsigned *VAR10, bool VAR11)
{
    bool VAR12 = VAR5 != 2;
    uint32_t VAR13;
    uint32_t VAR14;
    uint8_t VAR15;
    uint32_t VAR16;
    uint32_t VAR17;
    const VAR18 *VAR19 = NULL;
    xtensa_tlb_entry VAR20;
    int VAR21 = FUN2(VAR2, VAR4, VAR12, &VAR13, &VAR14, &VAR15);
    if ((VAR21 == VAR22 || VAR21 == VAR23) && VAR11 && FUN3(VAR2, VAR4, &VAR17) == 0)
    {
        VAR15 = (VAR17 >> 4) & 0x3;
        VAR13 = 0;
        FUN4(VAR2, VAR4, VAR12, &VAR16, VAR13, &VAR14);
        if (VAR3)
        {
            VAR13 = ++VAR2->VAR24 & 0x3;
            FUN5(VAR2, VAR12, VAR13, VAR14, VAR16, VAR17);
            VAR2->VAR25[VAR26] = VAR4;
            FUN6("", VAR27, VAR4, VAR16, VAR17);
        }
        else
        {
            FUN7(VAR2, &VAR20, VAR12, VAR13, VAR14, VAR16, VAR17);
            VAR19 = &VAR20;
        }
        VAR21 = 0;
    }
    if (VAR21 != 0)
    {
        return VAR21;
    }
    if (VAR19 == NULL)
    {
        VAR19 = FUN8(VAR2, VAR12, VAR13, VAR14);
    }
    if (VAR15 < VAR6)
    {
        return VAR12 ? VAR28 : VAR29;
    }
    *VAR10 = FUN9(VAR19->VAR30) & ~(VAR12 ? VAR31 : VAR32 | VAR33);
    if (!FUN10(*VAR10, VAR5))
    {
        return VAR12 ? (VAR5 ? VAR34 : VAR35) : VAR36;
    }
    *VAR8 = VAR19->VAR8 | (VAR4 & ~FUN11(VAR2, VAR12, VAR13));
    *VAR9 = ~FUN11(VAR2, VAR12, VAR13) + 1;
    return 0;
}
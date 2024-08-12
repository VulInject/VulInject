static int FUN1(VAR1 *VAR2, VAR1 *VAR3, bool VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, uint32_t VAR8, int VAR9, uint64_t VAR10, VAR11 **VAR12, VAR13 **VAR14)
{
    VAR11 *VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    int64_t VAR19;
    if (VAR10 > 0x200000)
    {
        FUN2(VAR14, "");
        return -VAR20;
    }
    if (VAR8 > 512 * 1024 * 1024)
    {
        FUN2(VAR14, "");
        return -VAR20;
    }
    VAR19 = FUN3(VAR3);
    if (VAR19 < 0)
    {
        return VAR19;
    }
    VAR17->VAR21 = FUN4(VAR17->VAR21, (VAR17->VAR22 + 1) * sizeof(VAR11));
    VAR15 = &VAR17->VAR21[VAR17->VAR22];
    VAR17->VAR22++;
    memset(VAR15, 0, sizeof(VAR11));
    VAR15->VAR3 = VAR3;
    VAR15->VAR4 = VAR4;
    VAR15->VAR5 = VAR5;
    VAR15->VAR23 = VAR6;
    VAR15->VAR24 = VAR7;
    VAR15->VAR8 = VAR8;
    VAR15->VAR25 = VAR9 * VAR10;
    VAR15->VAR9 = VAR9;
    VAR15->VAR10 = VAR4 ? VAR5 : VAR10;
    VAR15->VAR26 = FUN5(FUN6(VAR19, VAR27), VAR10);
    if (VAR17->VAR22 > 1)
    {
        VAR15->VAR28 = (*(VAR15 - 1)).VAR28 + VAR15->VAR5;
    }
    else
    {
        VAR15->VAR28 = VAR15->VAR5;
    }
    VAR2->VAR29 = VAR15->VAR28;
    if (VAR12)
    {
        *VAR12 = VAR15;
    }
    return 0;
}
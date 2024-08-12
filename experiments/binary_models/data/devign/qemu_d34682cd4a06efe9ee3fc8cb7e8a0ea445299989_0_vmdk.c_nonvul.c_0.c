static int FUN1(VAR1 *VAR2, VAR1 *VAR3, bool VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, uint32_t VAR8, int VAR9, uint64_t VAR10, VAR11 **VAR12, VAR13 **VAR14)
{
    VAR11 *VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    if (VAR10 > 0x200000)
    {
        FUN2(VAR14, "");
        return -VAR19;
    }
    if (VAR8 > 512 * 1024 * 1024)
    {
        FUN2(VAR14, "");
        return -VAR19;
    }
    VAR17->VAR20 = FUN3(VAR17->VAR20, (VAR17->VAR21 + 1) * sizeof(VAR11));
    VAR15 = &VAR17->VAR20[VAR17->VAR21];
    VAR17->VAR21++;
    memset(VAR15, 0, sizeof(VAR11));
    VAR15->VAR3 = VAR3;
    VAR15->VAR4 = VAR4;
    VAR15->VAR5 = VAR5;
    VAR15->VAR22 = VAR6;
    VAR15->VAR23 = VAR7;
    VAR15->VAR8 = VAR8;
    VAR15->VAR24 = VAR9 * VAR10;
    VAR15->VAR9 = VAR9;
    VAR15->VAR10 = VAR4 ? VAR5 : VAR10;
    if (VAR17->VAR21 > 1)
    {
        VAR15->VAR25 = (*(VAR15 - 1)).VAR25 + VAR15->VAR5;
    }
    else
    {
        VAR15->VAR25 = VAR15->VAR5;
    }
    VAR2->VAR26 = VAR15->VAR25;
    if (VAR12)
    {
        *VAR12 = VAR15;
    }
    return 0;
}
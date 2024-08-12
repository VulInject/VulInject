static int FUN1(VAR1 *VAR2, VAR1 *VAR3, bool VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, uint32_t VAR8, int VAR9, uint64_t VAR10, VAR11 **VAR12)
{
    VAR11 *VAR13;
    VAR14 *VAR15 = VAR2->VAR16;
    if (VAR10 > 0x200000)
    {
        FUN2("");
        return -VAR17;
    }
    if (VAR8 > 512 * 1024 * 1024)
    {
        FUN2("");
        return -VAR18;
    }
    VAR15->VAR19 = FUN3(VAR15->VAR19, (VAR15->VAR20 + 1) * sizeof(VAR11));
    VAR13 = &VAR15->VAR19[VAR15->VAR20];
    VAR15->VAR20++;
    memset(VAR13, 0, sizeof(VAR11));
    VAR13->VAR3 = VAR3;
    VAR13->VAR4 = VAR4;
    VAR13->VAR5 = VAR5;
    VAR13->VAR21 = VAR6;
    VAR13->VAR22 = VAR7;
    VAR13->VAR8 = VAR8;
    VAR13->VAR23 = VAR9 * VAR10;
    VAR13->VAR9 = VAR9;
    VAR13->VAR10 = VAR10;
    if (VAR15->VAR20 > 1)
    {
        VAR13->VAR24 = (*(VAR13 - 1)).VAR24 + VAR13->VAR5;
    }
    else
    {
        VAR13->VAR24 = VAR13->VAR5;
    }
    VAR2->VAR25 = VAR13->VAR24;
    if (VAR12)
    {
        *VAR12 = VAR13;
    }
    return 0;
}
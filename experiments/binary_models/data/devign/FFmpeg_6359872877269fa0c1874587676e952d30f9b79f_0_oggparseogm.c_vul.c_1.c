FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    VAR11 *VAR12 = VAR7->VAR13 + VAR7->VAR14;
    uint32_t VAR15;
    if (!(*VAR12 & 1))
        return 0;
    if (*VAR12 != 1)
        return 1;
    VAR15 = FUN2(VAR12 + 96);
    if (VAR15 == 0x05589f80)
    {
        VAR10->VAR16->VAR17 = VAR18;
        VAR10->VAR16->VAR19 = FUN3(VAR20, FUN2(VAR12 + 68));
        FUN4(VAR10, 64, FUN5(VAR12 + 164), 10000000);
        VAR10->VAR16->VAR21 = FUN2(VAR12 + 176);
        VAR10->VAR16->VAR22 = FUN2(VAR12 + 180);
    }
    else if (VAR15 == 0x05589f81)
    {
        VAR10->VAR16->VAR17 = VAR23;
        VAR10->VAR16->VAR19 = FUN3(VAR24, FUN6(VAR12 + 124));
        VAR10->VAR16->VAR25 = FUN6(VAR12 + 126);
        VAR10->VAR16->VAR26 = FUN2(VAR12 + 128);
        VAR10->VAR16->VAR27 = FUN2(VAR12 + 132) * 8;
    }
    return 1;
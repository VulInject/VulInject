VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, HANDLE VAR6, int64_t VAR7, VAR8 *VAR9, int VAR10, VAR11 *VAR12, void *VAR13, int VAR14)
{
    struct VAR15 *VAR16;
    uint64_t VAR17 = VAR7 * 512;
    DWORD VAR18;
    VAR16 = FUN2(&VAR19, VAR3, VAR12, VAR13);
    VAR16->VAR20 = VAR10 * 512;
    VAR16->VAR9 = VAR9;
    VAR16->VAR21 = (VAR14 == VAR22);
    if (VAR9->VAR23 > 1)
    {
        VAR16->VAR24 = FUN3(VAR3, VAR9->VAR25);
        if (VAR14 & VAR26)
        {
            FUN4(VAR9->VAR27, VAR9->VAR23, 0, VAR16->VAR24, VAR9->VAR25);
        }
        VAR16->VAR28 = false;
    }
    else
    {
        VAR16->VAR24 = VAR9->VAR27[0].VAR29;
        VAR16->VAR28 = true;
    }
    memset(&VAR16->VAR30, 0, sizeof(VAR16->VAR30));
    VAR16->VAR30.VAR31 = (VAR32)VAR17;
    VAR16->VAR30.VAR33 = (VAR32)(VAR17 >> 32);
    VAR16->VAR30.VAR34 = FUN5(&VAR5->VAR35);
    VAR5->VAR36++;
    if (VAR14 & VAR22)
    {
        VAR18 = FUN6(VAR6, VAR16->VAR24, VAR16->VAR20, NULL, &VAR16->VAR30);
    }
    else
    {
        VAR18 = FUN7(VAR6, VAR16->VAR24, VAR16->VAR20, NULL, &VAR16->VAR30);
    }
    if (VAR18 == 0 && FUN8() != VAR37)
    {
        goto VAR38;
    }
    return &VAR16->VAR39;
VAR38:
    VAR5->VAR36--;
    FUN9(VAR16);
    return NULL;
}
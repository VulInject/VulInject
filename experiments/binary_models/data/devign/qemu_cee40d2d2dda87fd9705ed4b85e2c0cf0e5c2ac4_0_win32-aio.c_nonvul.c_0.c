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
            char *VAR27 = VAR16->VAR24;
            int VAR28;
            for (VAR28 = 0; VAR28 < VAR9->VAR23; ++VAR28)
            {
                memcpy(VAR27, VAR9->VAR29[VAR28].VAR30, VAR9->VAR29[VAR28].VAR31);
                VAR27 += VAR9->VAR29[VAR28].VAR31;
            }
        }
        VAR16->VAR32 = false;
    }
    else
    {
        VAR16->VAR24 = VAR9->VAR29[0].VAR30;
        VAR16->VAR32 = true;
    }
    memset(&VAR16->VAR33, 0, sizeof(VAR16->VAR33));
    VAR16->VAR33.VAR34 = (VAR35)VAR17;
    VAR16->VAR33.VAR36 = (VAR35)(VAR17 >> 32);
    VAR16->VAR33.VAR37 = FUN4(&VAR5->VAR38);
    VAR5->VAR39++;
    if (VAR14 & VAR22)
    {
        VAR18 = FUN5(VAR6, VAR16->VAR24, VAR16->VAR20, NULL, &VAR16->VAR33);
    }
    else
    {
        VAR18 = FUN6(VAR6, VAR16->VAR24, VAR16->VAR20, NULL, &VAR16->VAR33);
    }
    if (VAR18 == 0 && FUN7() != VAR40)
    {
        goto VAR41;
    }
    return &VAR16->VAR42;
VAR41:
    VAR5->VAR39--;
    FUN8(VAR16);
    return NULL;
}
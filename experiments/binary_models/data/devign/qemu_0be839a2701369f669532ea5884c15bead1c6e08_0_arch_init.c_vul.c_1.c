static inline void *FUN1(VAR1 *VAR2, ram_addr_t VAR3, int VAR4)
{
    static VAR5 *VAR6 = NULL;
    char VAR7[256];
    uint8_t VAR8;
    if (VAR4 & VAR9)
    {
        if (!VAR6)
        {
            FUN2("");
            return NULL;
        }
        return FUN3(VAR6->VAR10) + VAR3;
    }
    VAR8 = FUN4(VAR2);
    FUN5(VAR2, (VAR11 *)VAR7, VAR8);
    VAR7[VAR8] = 0;
    FUN6(VAR6, &VAR12.VAR13, VAR14)
    {
        if (!FUN7(VAR7, VAR6->VAR15, sizeof(VAR7)))
            return FUN3(VAR6->VAR10) + VAR3;
    }
    FUN2("", VAR7);
    return NULL;
}
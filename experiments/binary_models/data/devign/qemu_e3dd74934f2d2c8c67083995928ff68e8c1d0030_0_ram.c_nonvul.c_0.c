static inline void *FUN1(VAR1 *VAR2, ram_addr_t VAR3, int VAR4)
{
    static VAR5 *VAR6 = NULL;
    char VAR7[256];
    uint8_t VAR8;
    if (VAR4 & VAR9)
    {
        if (!VAR6 || VAR6->VAR10 <= VAR3)
        {
            FUN2("");
            return NULL;
        }
        return VAR6->VAR11 + VAR3;
    }
    VAR8 = FUN3(VAR2);
    FUN4(VAR2, (VAR12 *)VAR7, VAR8);
    VAR7[VAR8] = 0;
    VAR6 = FUN5(VAR7);
    if (VAR6 && VAR6->VAR10 > VAR3)
    {
        return VAR6->VAR11 + VAR3;
    }
    FUN2("", VAR7);
    return NULL;
}
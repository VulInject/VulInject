static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4, int *VAR5, bool VAR6, int VAR7, bool VAR8)
{
    uint8_t VAR9 = FUN2(VAR4);
    int VAR10 = 0;
    assert((!VAR6 && VAR7 == 0) || VAR6);
    if (FUN3(VAR4))
    {
        *VAR5 = FUN4(VAR3 >> 32) | FUN5(VAR3);
        if (!*VAR5)
        {
            *VAR5 = VAR11;
        }
        else
        {
            FUN6(&VAR2->VAR12, ""
                                "",
                       *VAR5, VAR6 ? "" : "", VAR9, VAR7);
        }
    }
    if (VAR8)
    {
        uint64_t VAR13 = 0;
        if (VAR6)
        {
            VAR13 = VAR2->VAR14->VAR13;
        }
        VAR10 = FUN7(VAR15, VAR16, VAR17, VAR5, FUN8(VAR2->VAR18.VAR12, VAR2->VAR18.VAR19), VAR2->VAR18.VAR20, VAR7, VAR13);
        if (VAR10)
        {
            FUN9(&VAR2->VAR12, "", VAR6 ? "" : "", VAR21, VAR9, VAR7);
            return VAR10;
        }
    }
    return 0;
}
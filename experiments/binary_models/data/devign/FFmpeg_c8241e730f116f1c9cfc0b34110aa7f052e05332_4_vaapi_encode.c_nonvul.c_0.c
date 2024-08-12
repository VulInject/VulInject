static VAR1 *FUN1(void *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = VAR5->VAR8;
    VABufferID VAR9;
    VAStatus VAR10;
    VAR1 *VAR11;
    VAR10 = FUN2(VAR7->VAR12->VAR13, VAR7->VAR14, VAR15, 3 * VAR7->VAR16 * VAR7->VAR17 + (1 << 16), 1, 0, &VAR9);
    if (VAR10 != VAR18)
    {
        FUN3(VAR5, VAR19, ""
                                    "",
               VAR10, FUN4(VAR10));
        return NULL;
    }
    FUN3(VAR5, VAR20, "", VAR9);
    VAR11 = FUN5((VAR21 *)(VAR22)VAR9, sizeof(VAR9), &VAR23, VAR5, VAR24);
    if (!VAR11)
    {
        FUN6(VAR7->VAR12->VAR13, VAR9);
        return NULL;
    }
    return VAR11;
}
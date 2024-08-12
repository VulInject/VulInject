static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4, const VAR5 *VAR6, int VAR7, int64_t VAR8)
{
    int VAR9;
    VAR10 *VAR11 = NULL;
    uLongf VAR12;
    const VAR5 *VAR13 = VAR6;
    int VAR14 = VAR7 * 512;
    if (VAR2->VAR15)
    {
        if (!VAR2->VAR16)
        {
            VAR9 = -VAR17;
            goto VAR18;
        }
        VAR12 = (VAR2->VAR19 << 9) * 2;
        VAR11 = FUN2(VAR12 + sizeof(VAR10));
        if (FUN3(VAR11->VAR11, &VAR12, VAR6, VAR7 << 9) != VAR20 || VAR12 == 0)
        {
            VAR9 = -VAR17;
            goto VAR18;
        }
        VAR11->VAR21 = VAR8;
        VAR11->VAR22 = VAR12;
        VAR13 = (VAR5 *)VAR11;
        VAR14 = VAR12 + sizeof(VAR10);
    }
    VAR9 = FUN4(VAR2->VAR23, VAR3 + VAR4, VAR13, VAR14);
    if (VAR9 != VAR14)
    {
        VAR9 = VAR9 < 0 ? VAR9 : -VAR24;
        goto VAR18;
    }
    VAR9 = 0;
VAR18:
    FUN5(VAR11);
    return VAR9;
}
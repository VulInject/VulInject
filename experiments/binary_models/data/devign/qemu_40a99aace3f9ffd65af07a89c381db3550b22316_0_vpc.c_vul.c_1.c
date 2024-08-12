static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR4;
    size_t VAR8, VAR9;
    int VAR10;
    int VAR11;
    int64_t VAR12 = 0;
    VAR8 = 0x200000;
    VAR9 = (VAR5 + VAR8 / 512) / (VAR8 / 512);
    VAR11 = FUN2(VAR2, VAR12, VAR4, VAR13);
    if (VAR11)
    {
        goto VAR14;
    }
    VAR12 = 1536 + ((VAR9 * 4 + 511) & ~511);
    VAR11 = FUN2(VAR2, VAR12, VAR4, VAR13);
    if (VAR11 < 0)
    {
        goto VAR14;
    }
    VAR12 = 3 * 512;
    memset(VAR4, 0xFF, 512);
    for (VAR10 = 0; VAR10 < (VAR9 * 4 + 511) / 512; VAR10++)
    {
        VAR11 = FUN2(VAR2, VAR12, VAR4, 512);
        if (VAR11 < 0)
        {
            goto VAR14;
        }
        VAR12 += 512;
    }
    memset(VAR4, 0, 1024);
    memcpy(VAR7->VAR15, "", 8);
    VAR7->VAR16 = FUN3(0xFFFFFFFFFFFFFFFFULL);
    VAR7->VAR17 = FUN3(3 * 512);
    VAR7->VAR18 = FUN4(0x00010000);
    VAR7->VAR8 = FUN4(VAR8);
    VAR7->VAR19 = FUN4(VAR9);
    VAR7->VAR20 = FUN4(FUN5(VAR4, 1024));
    VAR12 = 512;
    VAR11 = FUN2(VAR2, VAR12, VAR4, 1024);
    if (VAR11 < 0)
    {
        goto VAR14;
    }
VAR14:
    return VAR11;
}
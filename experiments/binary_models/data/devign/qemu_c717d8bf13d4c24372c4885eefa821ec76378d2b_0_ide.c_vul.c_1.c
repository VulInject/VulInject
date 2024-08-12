static int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    struct VAR13 *VAR14;
    uint32_t VAR15;
    VAR7 = FUN2(512, 512);
    if (VAR7 == NULL)
        return -1;
    VAR8 = FUN3(VAR2->VAR16, 0, VAR7, 1);
    if (VAR8 < 0)
    {
        FUN4(VAR7);
        return -1;
    }
    if (VAR7[510] != 0x55 || VAR7[511] != 0xaa)
    {
        FUN4(VAR7);
        return -1;
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        VAR14 = ((struct VAR13 *)(VAR7 + 0x1be)) + VAR9;
        VAR15 = FUN5(VAR14->VAR15);
        if (VAR15 && VAR14->VAR17)
        {
            VAR10 = VAR14->VAR17 + 1;
            VAR11 = VAR14->VAR18 & 63;
            if (VAR11 == 0)
                continue;
            VAR12 = VAR2->VAR19 / (VAR10 * VAR11);
            if (VAR12 < 1 || VAR12 > 16383)
                continue;
            *VAR4 = VAR10;
            *VAR5 = VAR11;
            *VAR3 = VAR12;
            FUN6("", VAR12, VAR10, VAR11);
            FUN4(VAR7);
            return 0;
        }
    }
    FUN4(VAR7);
    return -1;
}
static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    static const uint8_t VAR6[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    static const uint8_t VAR7[] = {0x81, 0x00};
    VAR3 *VAR8 = (VAR3 *)VAR4;
    int VAR9;
    if (VAR2->VAR10)
        return 1;
    if (!memcmp(&VAR8[12], VAR7, sizeof(VAR7)))
    {
        int VAR11 = FUN2((VAR12 *)(VAR8 + 14)) & 0xfff;
        if (!(VAR2->VAR13[VAR11 >> 5] & (1U << (VAR11 & 0x1f))))
            return 0;
    }
    if (VAR8[0] & 1)
    {
        if (!memcmp(VAR8, VAR6, sizeof(VAR6)))
        {
            return 1;
        }
        else if (VAR2->VAR14)
        {
            return 1;
        }
    }
    else
    {
        if (!memcmp(VAR8, VAR2->VAR15, VAR16))
        {
            return 1;
        }
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR17.VAR18; VAR9++)
    {
        if (!memcmp(VAR8, &VAR2->VAR17.VAR19[VAR9 * VAR16], VAR16))
            return 1;
    }
    return 0;
}
int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    static const int8_t VAR5[7] = {VAR6, 1, -1, -1};
    static const int8_t VAR7[7] = {VAR8, -1, 2, -1, VAR9};
    if (VAR3 > 3U)
    {
        FUN2(VAR2->VAR10, VAR11, "", VAR2->VAR12, VAR2->VAR13);
        return -1;
    }
    if (!(VAR2->VAR14 & 0x8000))
    {
        VAR3 = VAR5[VAR3];
        if (VAR3 < 0)
        {
            FUN2(VAR2->VAR10, VAR11, "", VAR2->VAR12, VAR2->VAR13);
            return -1;
        }
    }
    if ((VAR2->VAR15 & 0x8080) != 0x8080)
    {
        VAR3 = VAR7[VAR3];
        if (VAR4 && (VAR2->VAR15 & 0x8080))
        {
            VAR3 = VAR16 + (!(VAR2->VAR15 & 0x8000)) + 2 * (VAR3 == VAR9);
        }
        if (VAR3 < 0)
        {
            FUN2(VAR2->VAR10, VAR11, "", VAR2->VAR12, VAR2->VAR13);
            return -1;
        }
    }
    return VAR3;
}
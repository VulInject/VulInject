static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    static uint32_t VAR5[VAR6] = {
        [VAR7] = 0x01,
        [VAR8] = 0x04,
        [VAR9] = 0x02,
        [VAR10] = 0x10,
        [VAR11] = 0x20,
    };
    if (VAR3 < 0)
    {
        VAR4 |= 0x10;
    }
    if (VAR3 > 0)
    {
        VAR4 |= 0x20;
    }
    if (VAR2->VAR12 == VAR4)
    {
        return;
    }
    FUN2(NULL, VAR5, VAR2->VAR12, VAR4);
    VAR2->VAR12 = VAR4;
}
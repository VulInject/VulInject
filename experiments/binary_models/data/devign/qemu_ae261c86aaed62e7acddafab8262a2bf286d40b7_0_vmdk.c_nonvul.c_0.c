static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6, bool VAR7)
{
    uint8_t VAR8[VAR4->VAR9 * 512];
    if (VAR2->VAR10)
    {
        int VAR11;
        if (!FUN2(VAR2))
        {
            return -1;
        }
        VAR6 -= VAR6 % (VAR4->VAR9 * 512);
        VAR11 = FUN3(VAR2->VAR10, VAR6 >> 9, VAR8, VAR4->VAR9);
        if (VAR11 < 0)
        {
            return -1;
        }
        VAR11 = FUN4(VAR4->VAR12, VAR5, VAR8, VAR4->VAR9);
        if (VAR11 < 0)
        {
            return -1;
        }
    }
    return 0;
}
static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        uint32_t VAR11;
        if (FUN2(VAR2, VAR3 + VAR10) != 0)
        {
            return -1;
        }
        VAR11 = VAR3 + VAR10 - VAR8->VAR12[VAR8->VAR13];
        memcpy(VAR5 + VAR10 * 512, VAR8->VAR14 + VAR11 * 512, 512);
    }
    return 0;
}
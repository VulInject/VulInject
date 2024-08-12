static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, ram_addr_t VAR6)
{
    int VAR7, VAR8 = 0;
    size_t VAR9 = FUN2(VAR4->VAR10);
    do
    {
        VAR7 = FUN3(VAR2, VAR4, VAR5, VAR6);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR8 += VAR7;
        VAR4->VAR11 += VAR12;
        VAR6 += VAR12;
    } while (VAR4->VAR11 & (VAR9 - 1));
    VAR4->VAR11 -= VAR12;
    return VAR8;
}
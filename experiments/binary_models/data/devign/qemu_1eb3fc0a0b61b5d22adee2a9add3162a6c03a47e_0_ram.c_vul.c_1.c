static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    int VAR6, VAR7 = 0;
    size_t VAR8 = FUN2(VAR4->VAR9) >> VAR10;
    do
    {
        VAR6 = FUN3(VAR2, VAR4, VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
        VAR7 += VAR6;
        VAR4->VAR11++;
    } while (VAR4->VAR11 & (VAR8 - 1));
    VAR4->VAR11--;
    return VAR7;
}
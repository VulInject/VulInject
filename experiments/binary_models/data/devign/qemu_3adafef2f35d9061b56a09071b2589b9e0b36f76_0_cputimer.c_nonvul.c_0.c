VAR1 FUN1(VAR2 *VAR3)
{
    static uint32_t VAR4 = 1;
    static uint32_t VAR5 = 0;
    uint32_t VAR6;
    uint32_t VAR7 = VAR3->VAR8->VAR9 - VAR3->VAR10;
    if (VAR7 == 1)
    {
        return VAR3->VAR8->VAR9 - 1;
    }
    do
    {
        VAR4 = 1103515245 * VAR4 + 12345;
        VAR6 = (VAR4 >> 16) % VAR7 + VAR3->VAR10;
    } while (VAR6 == VAR5);
    VAR5 = VAR6;
    return VAR6;
}
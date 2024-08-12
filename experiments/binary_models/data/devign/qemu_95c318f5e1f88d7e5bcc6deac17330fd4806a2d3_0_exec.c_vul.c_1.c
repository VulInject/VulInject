static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, ram_addr_t VAR5, ram_addr_t VAR6)
{
    int VAR7, VAR8;
    if (VAR3 >= VAR9 || VAR4 >= VAR9)
        return -1;
    VAR7 = FUN2(VAR3);
    VAR8 = FUN2(VAR4);
    FUN3("", VAR10, VAR2, VAR3, VAR4, VAR7, VAR8, VAR5);
    VAR5 = (VAR5 >> VAR11) & (VAR12 - 1);
    for (; VAR7 <= VAR8; VAR7++)
    {
        VAR2->VAR13[VAR7] = VAR5;
        VAR2->VAR6[VAR7] = VAR6;
    }
    return 0;
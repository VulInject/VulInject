VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    if (VAR3->VAR6 >= VAR7)
    {
        FUN2("");
        return 0;
    }
    VAR3->VAR8[VAR3->VAR6++] = (VAR4 >> 4);
    VAR3->VAR8[VAR3->VAR6++] = (VAR5 >> 4);
    if (VAR3->VAR6 == VAR7)
    {
        FUN3(VAR3);
    }
    return 1;
}
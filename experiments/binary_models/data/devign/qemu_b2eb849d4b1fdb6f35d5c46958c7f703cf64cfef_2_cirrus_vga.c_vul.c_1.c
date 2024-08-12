static void FUN1(VAR1 *VAR2, unsigned VAR3, unsigned VAR4, uint32_t VAR5)
{
    int VAR6;
    unsigned VAR7 = VAR5;
    VAR8 *VAR9;
    VAR9 = VAR2->VAR10 + VAR4;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        if (VAR7 & 0x80)
        {
            *VAR9 = VAR2->VAR11;
        }
        else if (VAR3 == 5)
        {
            *VAR9 = VAR2->VAR12;
        }
        VAR7 <<= 1;
        VAR9++;
    }
    FUN2(VAR2->VAR13 + VAR4);
    FUN2(VAR2->VAR13 + VAR4 + 7);
}
static void FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, int VAR5)
{
    int64_t VAR6, VAR7;
    unsigned long VAR8, VAR9, VAR10;
    VAR6 = VAR3 / VAR11;
    VAR7 = (VAR3 + VAR4 - 1) / VAR11;
    for (; VAR6 <= VAR7; VAR6++)
    {
        VAR9 = VAR6 / (sizeof(unsigned long) * 8);
        VAR10 = VAR6 % (sizeof(unsigned long) * 8);
        VAR8 = VAR2->VAR12[VAR9];
        if (VAR5)
        {
            if (!(VAR8 & (1 << VAR10)))
            {
                VAR2->VAR13++;
                VAR8 |= 1 << VAR10;
            }
        }
        else
        {
            if (VAR8 & (1 << VAR10))
            {
                VAR2->VAR13--;
                VAR8 &= ~(1 << VAR10);
            }
        }
        VAR2->VAR12[VAR9] = VAR8;
    }
}
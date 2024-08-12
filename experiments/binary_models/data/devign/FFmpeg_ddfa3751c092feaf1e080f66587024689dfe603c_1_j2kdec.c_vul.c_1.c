static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    int VAR4 = 0, VAR5 = 10;
    VAR2->VAR6 += 12;
    while (!VAR4 && VAR5 && VAR2->VAR7 - VAR2->VAR6 >= 8)
    {
        VAR3 = FUN2(VAR2->VAR6);
        if (FUN2(VAR2->VAR6 + 4) == VAR8)
        {
            VAR4 = 1;
            VAR2->VAR6 += 8;
        }
        else
        {
            if (VAR2->VAR7 - VAR2->VAR6 < VAR3)
                return 0;
            VAR2->VAR6 += VAR3;
            VAR5--;
        }
    }
    if (VAR4)
        return 1;
    return 0;
}
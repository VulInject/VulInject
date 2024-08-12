static void FUN1(VAR1 *VAR2, int VAR3, unsigned int VAR4)
{
    unsigned int VAR5;
    int VAR6;
    assert(VAR3 == 32 || VAR4 < (1U << VAR3));
    VAR5 = VAR2->VAR5;
    VAR6 = 32 - VAR2->VAR7;
    if (VAR3 < (32 - VAR6))
    {
        VAR5 |= VAR4 << (VAR6);
        VAR6 += VAR3;
    }
    else
    {
        VAR5 |= VAR4 << (VAR6);
        *VAR2->VAR8 = VAR5 & 0xff;
        VAR2->VAR8[1] = (VAR5 >> 8) & 0xff;
        VAR2->VAR8[2] = (VAR5 >> 16) & 0xff;
        VAR2->VAR8[3] = (VAR5 >> 24) & 0xff;
        VAR2->VAR8 += 4;
        if (VAR2->VAR8 >= VAR2->VAR9)
            FUN2("");
        VAR6 = VAR6 + VAR3 - 32;
        if (VAR6 == 0)
        {
            VAR5 = 0;
        }
        else
        {
            VAR5 = VAR4 >> (VAR3 - VAR6);
        }
    }
    VAR2->VAR5 = VAR5;
    VAR2->VAR7 = 32 - VAR6;
}
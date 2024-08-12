static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 13)
        return VAR6;
    if (memcmp(VAR4, "", 3))
        return VAR6;
    VAR4 += 13;
    VAR5 -= 13;
    while (VAR5 >= 11 + 4)
    {
        int VAR7 = VAR4[0];
        int VAR8 = FUN2(&VAR4[1]) + 11 + 4;
        if (VAR8 > VAR5)
            return VAR6;
        if (VAR7 == 8 || VAR7 == 9)
        {
            if (VAR2->VAR9 > FUN3(VAR2->VAR10))
                return VAR6;
            VAR2->VAR11[VAR2->VAR9] = VAR8;
            VAR2->VAR10[VAR2->VAR9] = FUN4(VAR8);
            if (!VAR2->VAR10[VAR2->VAR9])
                return FUN5(VAR12);
            memcpy(VAR2->VAR10[VAR2->VAR9], VAR4, VAR8);
            VAR2->VAR9++;
        }
        else if (VAR7 == 0x12)
        {
            if (VAR2->VAR13)
                return VAR6;
            VAR2->VAR14 = VAR8 - 11 - 4;
            VAR2->VAR13 = FUN4(VAR2->VAR14);
            if (!VAR2->VAR13)
                return FUN5(VAR12);
            memcpy(VAR2->VAR13, VAR4 + 11, VAR2->VAR14);
        }
        VAR4 += VAR8;
        VAR5 -= VAR8;
    }
    if (!VAR2->VAR13)
        return VAR6;
    return 0;
}
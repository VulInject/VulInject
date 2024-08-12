int FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3 && VAR2->VAR4 > 12 && FUN2(VAR2->VAR5 + VAR2->VAR4 - 8) == VAR6)
    {
        int VAR7;
        unsigned int VAR4, VAR8 = VAR2->VAR4;
        VAR9 *VAR10;
        VAR10 = VAR2->VAR5 + VAR2->VAR4 - 8 - 5;
        for (VAR7 = 1;; VAR7++)
        {
            VAR4 = FUN3(VAR10);
            if (VAR4 > VAR11 || VAR10 - VAR2->VAR5 < VAR4)
                return 0;
            if (VAR10[4] & 128)
                break;
            VAR10 -= VAR4 + 5;
        }
        VAR2->VAR12 = FUN4(VAR7 * sizeof(*VAR2->VAR12));
        if (!VAR2->VAR12)
            return FUN5(VAR13);
        VAR10 = VAR2->VAR5 + VAR2->VAR4 - 8 - 5;
        for (VAR7 = 0;; VAR7++)
        {
            VAR4 = FUN3(VAR10);
            FUN6(VAR4 <= VAR11 && VAR10 - VAR2->VAR5 >= VAR4);
            VAR2->VAR12[VAR7].VAR5 = FUN7(VAR4 + VAR14);
            VAR2->VAR12[VAR7].VAR4 = VAR4;
            VAR2->VAR12[VAR7].VAR15 = VAR10[4] & 127;
            if (!VAR2->VAR12[VAR7].VAR5)
                return FUN5(VAR13);
            memcpy(VAR2->VAR12[VAR7].VAR5, VAR10 - VAR4, VAR4);
            VAR2->VAR4 -= VAR4 + 5;
            if (VAR10[4] & 128)
                break;
            VAR10 -= VAR4 + 5;
        }
        VAR2->VAR4 -= 8;
        memset(VAR2->VAR5 + VAR2->VAR4, 0, FUN8(VAR8 - VAR2->VAR4, VAR14));
        VAR2->VAR3 = VAR7 + 1;
        return 1;
    }
    return 0;
}
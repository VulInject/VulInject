int FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3 && VAR2->VAR4 > 12 && FUN2(VAR2->VAR5 + VAR2->VAR4 - 8) == VAR6)
    {
        int VAR7;
        unsigned int VAR4;
        VAR8 *VAR9;
        VAR9 = VAR2->VAR5 + VAR2->VAR4 - 8 - 5;
        for (VAR7 = 1;; VAR7++)
        {
            VAR4 = FUN3(VAR9);
            if (VAR4 > VAR10 || VAR9 - VAR2->VAR5 < VAR4)
                return 0;
            if (VAR9[4] & 128)
                break;
            VAR9 -= VAR4 + 5;
        }
        VAR2->VAR11 = FUN4(VAR7, sizeof(*VAR2->VAR11));
        if (!VAR2->VAR11)
            return FUN5(VAR12);
        VAR9 = VAR2->VAR5 + VAR2->VAR4 - 8 - 5;
        for (VAR7 = 0;; VAR7++)
        {
            VAR4 = FUN3(VAR9);
            FUN6(VAR4 <= VAR10 && VAR9 - VAR2->VAR5 >= VAR4);
            VAR2->VAR11[VAR7].VAR5 = FUN7(VAR4 + VAR13);
            VAR2->VAR11[VAR7].VAR4 = VAR4;
            VAR2->VAR11[VAR7].VAR14 = VAR9[4] & 127;
            if (!VAR2->VAR11[VAR7].VAR5)
                return FUN5(VAR12);
            memcpy(VAR2->VAR11[VAR7].VAR5, VAR9 - VAR4, VAR4);
            VAR2->VAR4 -= VAR4 + 5;
            if (VAR9[4] & 128)
                break;
            VAR9 -= VAR4 + 5;
        }
        VAR2->VAR4 -= 8;
        VAR2->VAR3 = VAR7 + 1;
        return 1;
    }
    return 0;
}
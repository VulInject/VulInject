static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    while (FUN2(VAR7) + 12 <= VAR5)
    {
        uint32_t VAR8 = FUN3(VAR7);
        uint64_t VAR9 = FUN4(VAR7);
        uint64_t VAR10 = FUN2(VAR7);
        const char *VAR11 = NULL;
        switch (VAR8)
        {
        case FUN5('', '', '', ''):
            VAR11 = "";
            break;
        case FUN5('', '', '', ''):
            VAR11 = "";
            break;
        }
        if (VAR11 && VAR9 > 4)
        {
            unsigned int VAR12 = FUN6(VAR7);
            int VAR13 = FUN7(VAR2, VAR11, FUN8(VAR12, VAR9 - 4));
            if (VAR13 < 0)
            {
                FUN9(VAR2, VAR14, "", VAR11);
                return VAR13;
            }
        }
        FUN10(VAR7, VAR9 - (FUN2(VAR7) - VAR10) + (VAR9 & 1));
    }
    return 0;
}
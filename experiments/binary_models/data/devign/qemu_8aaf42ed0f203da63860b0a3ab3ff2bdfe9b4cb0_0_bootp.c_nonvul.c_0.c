static void FUN1(const struct VAR1 *VAR2, int *VAR3, struct VAR4 *VAR5)
{
    const VAR6 *VAR7, *VAR8;
    int VAR9, VAR10;
    *VAR3 = 0;
    VAR5->VAR11 = FUN2(0L);
    VAR7 = VAR2->VAR12;
    VAR8 = VAR7 + VAR13;
    if (memcmp(VAR7, VAR14, 4) != 0)
        return;
    VAR7 += 4;
    while (VAR7 < VAR8)
    {
        VAR10 = VAR7[0];
        if (VAR10 == VAR15)
        {
            VAR7++;
        }
        else if (VAR10 == VAR16)
        {
            break;
        }
        else
        {
            VAR7++;
            if (VAR7 >= VAR8)
                break;
            VAR9 = *VAR7++;
            FUN3("", VAR10, VAR9);
            switch (VAR10)
            {
            case VAR17:
                if (VAR9 >= 1)
                    *VAR3 = VAR7[0];
                break;
            case VAR18:
                if (VAR9 >= 4)
                {
                    memcpy(&(VAR5->VAR11), VAR7, 4);
                }
                break;
            default:
                break;
            }
            VAR7 += VAR9;
        }
    }
    if (*VAR3 == VAR19 && VAR5->VAR11 == FUN2(0L) && VAR2->VAR20.VAR11)
    {
        memcpy(&(VAR5->VAR11), &VAR2->VAR20, 4);
    }
}
static void FUN1(void *VAR1, const VAR2 *VAR3, const VAR2 *VAR4)
{
    int VAR5;
    char VAR6[1024];
    if (VAR3 >= VAR4)
        return;
    switch (*VAR3++)
    {
    case VAR7:
        FUN2(VAR1, VAR8, "", FUN3(FUN4(VAR3)));
        return;
    case VAR9:
        FUN2(VAR1, VAR8, "", *VAR3);
        return;
    case VAR10:
    case VAR11:
        if (VAR3[-1] == VAR10)
        {
            VAR5 = FUN5(&VAR3);
        }
        else
        {
            VAR5 = FUN6(&VAR3);
        }
        VAR5 = FUN7(VAR5, 1023);
        memcpy(VAR6, VAR3, VAR5);
        VAR6[VAR5] = 0;
        FUN2(VAR1, VAR8, "", VAR6);
        return;
    case VAR12:
        FUN2(VAR1, VAR8, "");
        return;
    case VAR13:
        VAR3 += 4;
    case VAR14:
        FUN2(VAR1, VAR8, "");
        for (;;)
        {
            int VAR5 = FUN5(&VAR3);
            int VAR15;
            memcpy(VAR6, VAR3, VAR5);
            VAR6[VAR5] = 0;
            if (!VAR5)
            {
                FUN2(VAR1, VAR8, "");
                VAR3++;
                break;
            }
            if (VAR5 < 0 || VAR5 >= VAR4 - VAR3)
                return;
            VAR3 += VAR5;
            FUN2(VAR1, VAR8, "", VAR6);
            FUN1(VAR1, VAR3, VAR4);
            VAR15 = FUN8(VAR3, VAR4);
            if (VAR15 < 0 || VAR15 >= VAR4 - VAR3)
                return;
            VAR3 += VAR15;
        }
        return;
    case VAR16:
        FUN2(VAR1, VAR8, "");
        return;
    default:
        return;
    }
}
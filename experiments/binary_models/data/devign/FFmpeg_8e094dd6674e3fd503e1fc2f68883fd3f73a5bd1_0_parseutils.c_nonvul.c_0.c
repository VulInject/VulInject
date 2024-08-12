int FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    if (!FUN2(VAR3, "") || !FUN2(VAR3, ""))
    {
        int VAR5 = FUN3();
        VAR2[0] = VAR5 >> 24;
        VAR2[1] = VAR5 >> 16;
        VAR2[2] = VAR5 >> 8;
        VAR2[3] = VAR5;
    }
    else if (!FUN4(VAR3, "", 2))
    {
        char *VAR6;
        int VAR7 = strlen(VAR3);
        unsigned int VAR5 = FUN5(VAR3, &VAR6, 16);
        if (*VAR6 || (VAR7 != 8 && VAR7 != 10))
        {
            FUN6(VAR4, VAR8, "", VAR3);
            return FUN7(VAR9);
        }
        if (VAR7 == 10)
        {
            VAR2[3] = VAR5;
            VAR5 >>= 8;
        }
        VAR2[0] = VAR5 >> 16;
        VAR2[1] = VAR5 >> 8;
        VAR2[2] = VAR5;
    }
    else
    {
        const VAR10 *VAR11 = FUN8(VAR3, VAR12, FUN9(VAR12), sizeof(VAR10), VAR13);
        if (!VAR11)
        {
            FUN6(VAR4, VAR8, "", VAR3);
            return FUN7(VAR9);
        }
        memcpy(VAR2, VAR11->VAR14, 3);
    }
    return 0;
}
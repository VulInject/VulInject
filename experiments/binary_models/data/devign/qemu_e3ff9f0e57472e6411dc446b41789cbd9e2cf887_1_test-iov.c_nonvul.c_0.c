static void FUN1(void)
{
    unsigned VAR1;
    struct VAR2 *VAR3;
    size_t VAR4;
    unsigned char *VAR5, *VAR6;
    unsigned VAR7, VAR8, VAR9;
    FUN2(&VAR3, &VAR1);
    VAR4 = FUN3(VAR3, VAR1);
    VAR5 = FUN4(VAR4 + 8) + 4;
    memcpy(VAR5 - 4, "", 4);
    memcpy(VAR5 + VAR4, "", 4);
    VAR6 = FUN4(VAR4 + 8) + 4;
    memcpy(VAR6 - 4, "", 4);
    memcpy(VAR6 + VAR4, "", 4);
    for (VAR7 = 0; VAR7 < VAR4; ++VAR7)
    {
        VAR5[VAR7] = VAR7 & 255;
    }
    for (VAR7 = 0; VAR7 <= VAR4; ++VAR7)
    {
        VAR9 = FUN5(VAR3, VAR1, 0, 0xff, VAR4);
        FUN6(VAR9 == VAR4);
        VAR9 = FUN7(VAR3, VAR1, VAR7, VAR5 + VAR7, VAR4 - VAR7);
        FUN6(VAR9 == VAR4 - VAR7);
        memset(VAR6 + VAR7, 0, VAR4 - VAR7);
        VAR9 = FUN8(VAR3, VAR1, VAR7, VAR6 + VAR7, VAR4 - VAR7);
        FUN6(VAR9 == VAR4 - VAR7);
        FUN6(memcmp(VAR5, VAR6, VAR4) == 0);
        VAR9 = FUN8(VAR3, VAR1, VAR7, VAR6 + VAR7, 1);
        FUN6(VAR9 == (VAR7 < VAR4));
        if (VAR9)
        {
            FUN6(VAR6[VAR7] == (VAR7 & 255));
        }
        for (VAR8 = VAR7; VAR8 <= VAR4; ++VAR8)
        {
            VAR9 = FUN5(VAR3, VAR1, 0, 0xff, VAR4);
            FUN6(VAR9 == VAR4);
            VAR9 = FUN7(VAR3, VAR1, VAR7, VAR5 + VAR7, VAR8 - VAR7);
            FUN6(VAR9 == VAR8 - VAR7);
            memset(VAR6 + VAR7, 0, VAR8 - VAR7);
            VAR9 = FUN8(VAR3, VAR1, VAR7, VAR6 + VAR7, VAR8 - VAR7);
            FUN6(VAR9 == VAR8 - VAR7);
            FUN6(memcmp(VAR5, VAR6, VAR4) == 0);
            FUN9(VAR3, VAR1, VAR7, VAR8 - VAR7);
        }
    }
    FUN6(!memcmp(VAR5 - 4, "", 4) && !memcmp(VAR5 + VAR4, "", 4));
    FUN10(VAR5 - 4);
    FUN6(!memcmp(VAR6 - 4, "", 4) && !memcmp(VAR6 + VAR4, "", 4));
    FUN10(VAR6 - 4);
    FUN11(VAR3, VAR1);
}
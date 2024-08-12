static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    P9Hdr VAR6;
    int VAR7;
    for (VAR7 = 0; VAR7 < 10; VAR7++)
    {
        FUN2(VAR5->VAR8, VAR5->VAR9, 1000 * 1000);
        FUN3(VAR2, &VAR6, 7);
        VAR6.VAR10 = FUN4(&VAR6.VAR10);
        VAR6.VAR11 = FUN5(&VAR6.VAR11);
        if (VAR6.VAR10 >= 7)
        {
            break;
        }
        FUN6(VAR2, 7);
    }
    FUN7(VAR6.VAR10, >=, 7);
    FUN7(VAR6.VAR10, <=, VAR12);
    FUN7(VAR6.VAR11, ==, VAR2->VAR11);
    if (VAR6.VAR3 != VAR3)
    {
        FUN8("", VAR6.VAR3, FUN9(VAR6.VAR3), VAR3, FUN9(VAR3));
        if (VAR6.VAR3 == VAR13)
        {
            uint32_t VAR14;
            FUN10(VAR2, &VAR14);
            FUN8("", VAR14, strerror(VAR14));
        }
    }
    FUN7(VAR6.VAR3, ==, VAR3);
}
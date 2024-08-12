static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    for (; VAR2; VAR2 = VAR2->VAR5)
    {
        VAR6 *VAR7 = VAR2->VAR8;
        int VAR9 = FUN2(FUN3(VAR7), VAR10, NULL);
        uint32_t VAR11 = FUN4(VAR9);
        VAR3 *VAR12;
        VAR12 = FUN5("", VAR9);
        FUN6(VAR12, FUN7("", FUN8(VAR11)));
        FUN9(VAR12, VAR11);
        FUN6(VAR4, VAR12);
    }
}
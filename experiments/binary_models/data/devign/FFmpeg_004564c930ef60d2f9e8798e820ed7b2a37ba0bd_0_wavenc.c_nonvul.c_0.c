static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint64_t VAR5 = 0;
    int64_t VAR6 = FUN2(VAR2->VAR7, "");
    FUN3(VAR2, "", 256);
    FUN3(VAR2, "", 32);
    FUN3(VAR2, "", 32);
    FUN3(VAR2, "", 10);
    FUN3(VAR2, "", 8);
    if (VAR4 = FUN4(VAR2->VAR8, "", NULL, 0))
        VAR5 = FUN5(VAR4->VAR9, NULL, 10);
    FUN6(VAR2->VAR7, VAR5);
    FUN7(VAR2->VAR7, 1);
    if ((VAR4 = FUN4(VAR2->VAR8, "", NULL, 0)) && strlen(VAR4->VAR9) > 2)
    {
        unsigned char VAR10[17] = {0};
        int64_t VAR11;
        uint64_t VAR12;
        size_t VAR13 = strlen(VAR4->VAR9 + 2);
        for (VAR11 = 0; VAR11 < VAR13 / 16; VAR11++)
        {
            memcpy(VAR10, VAR4->VAR9 + 2 + (VAR11 * 16), 16);
            VAR12 = FUN5(VAR10, NULL, 16);
            FUN8(VAR2->VAR7, VAR12);
        }
        FUN9(VAR2->VAR7, 0, 64 - VAR11 * 8);
    }
    else
        FUN9(VAR2->VAR7, 0, 64);
    FUN9(VAR2->VAR7, 0, 190);
    if (VAR4 = FUN4(VAR2->VAR8, "", NULL, 0))
        FUN10(VAR2->VAR7, VAR4->VAR9);
    FUN11(VAR2->VAR7, VAR6);
}
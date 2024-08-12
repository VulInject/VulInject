static void FUN1(void)
{
    VAR1 *VAR2;
    struct tm VAR3;
    uint32_t VAR4;
    uint64_t VAR5;
    time_t VAR6, VAR7;
    VAR2 = FUN2("");
    FUN3(VAR2 != NULL);
    VAR6 = FUN4(NULL);
    VAR5 = FUN5(VAR2->VAR8, &VAR3, &VAR4);
    FUN6(VAR5, ==, 0);
    VAR7 = FUN7(&VAR3);
    FUN3(VAR7 - VAR6 < 5);
    FUN8(VAR2);
}
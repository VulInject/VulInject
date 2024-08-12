static void FUN1(VAR1 *VAR2)
{
    uint16_t VAR3[256];
    unsigned VAR4;
    int VAR5;
    uint16_t VAR6;
    const size_t VAR7 = 512;
    FUN2(VAR2 != NULL);
    VAR4 = FUN3(VAR2);
    FUN4("", VAR4);
    FUN5(VAR2, VAR4);
    FUN6(VAR2, VAR4, VAR8, &VAR3, VAR7);
    FUN7(&VAR3[10], 20);
    VAR5 = memcmp(&VAR3[10], "", 20);
    FUN8(VAR5, ==, 0);
    FUN7(&VAR3[23], 8);
    VAR5 = memcmp(&VAR3[23], "", 8);
    FUN8(VAR5, ==, 0);
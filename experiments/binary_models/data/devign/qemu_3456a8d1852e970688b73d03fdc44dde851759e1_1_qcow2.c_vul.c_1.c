static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = VAR4->VAR6;
    AES_KEY VAR7;
    AES_KEY VAR8;
    uint32_t VAR9 = 0;
    VAR10 *VAR11;
    if (VAR4->VAR9)
    {
        VAR9 = VAR4->VAR9;
        memcpy(&VAR7, &VAR4->VAR7, sizeof(VAR7));
        memcpy(&VAR8, &VAR4->VAR8, sizeof(VAR8));
    }
    FUN2(VAR2);
    VAR11 = FUN3();
    FUN4(VAR11, VAR12, FUN5(VAR4->VAR13));
    memset(VAR4, 0, sizeof(VAR3));
    FUN6(VAR2, VAR11, VAR6, NULL);
    FUN7(VAR11);
    if (VAR9)
    {
        VAR4->VAR9 = VAR9;
        memcpy(&VAR4->VAR7, &VAR7, sizeof(VAR7));
        memcpy(&VAR4->VAR8, &VAR8, sizeof(VAR8));
    }
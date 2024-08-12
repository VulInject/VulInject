static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    int VAR5;
    VAR1 *VAR6;
    uint64_t VAR7;
    void *VAR8, *VAR9;
    VAR7 = FUN2(VAR3);
    VAR5 = VAR7;
    if (VAR5 > (128 * 1024))
    {
        VAR5 = 128 * 1024;
    }
    VAR6 = FUN3(sizeof(*VAR6));
    FUN4(VAR6, NULL, "", VAR5);
    FUN5(VAR6);
    FUN6(VAR2, 0x100000 - VAR5, VAR6, 1);
    VAR8 = FUN7(VAR3);
    VAR9 = FUN7(VAR6);
    memcpy(VAR9, ((VAR10 *)VAR8) + (VAR7 - VAR5), VAR5);
    FUN8(VAR6, true);
}
static int FUN1(VAR1 *VAR2)
{
    char VAR3[256] = {0};
    VAR4 *VAR5 = VAR2->VAR6->VAR7;
    int VAR8;
    if (VAR2->VAR6->VAR9 != 64)
        return 0;
    snprintf(VAR3, sizeof(VAR3), "", VAR2->VAR6->VAR10, VAR2->VAR6->VAR11);
    for (VAR8 = 0; VAR8 < 16; VAR8++)
    {
        uint32_t VAR12 = FUN2(VAR5 + VAR8 * 4);
        uint32_t VAR13 = FUN3(VAR12);
        FUN4(VAR3, sizeof(VAR3), "", VAR13, VAR8 != 15 ? "" : "");
    }
    if (FUN5(VAR3, "", sizeof(VAR3)) >= sizeof(VAR3))
        return 0;
    FUN6(&VAR2->VAR6->VAR7);
    VAR2->VAR6->VAR9 = 0;
    VAR2->VAR6->VAR7 = FUN7(strlen(VAR3) + VAR14);
    if (!VAR2->VAR6->VAR7)
        return FUN8(VAR15);
    VAR2->VAR6->VAR9 = strlen(VAR3);
    memcpy(VAR2->VAR6->VAR7, VAR3, VAR2->VAR6->VAR9);
    return 0;
}
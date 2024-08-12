static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    struct cow_header_v2 VAR6;
    struct stat VAR7;
    int64_t VAR8 = 0;
    char *VAR9 = NULL;
    VAR4 *VAR10 = NULL;
    int VAR11;
    VAR12 *VAR13;
    VAR8 = FUN2(VAR3, VAR14, 0) / 512;
    VAR9 = FUN3(VAR3, VAR15);
    VAR11 = FUN4(VAR1, VAR3, &VAR10);
    if (VAR11 < 0)
    {
        FUN5(VAR5, VAR10);
        goto VAR16;
    }
    VAR13 = NULL;
    VAR11 = FUN6(&VAR13, VAR1, NULL, NULL, VAR17 | VAR18, NULL, &VAR10);
    if (VAR11 < 0)
    {
        FUN5(VAR5, VAR10);
        goto VAR16;
    }
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR19 = FUN7(VAR20);
    VAR6.VAR21 = FUN7(VAR22);
    if (VAR9)
    {
        VAR6.VAR23 = FUN7(0);
        if (FUN8(VAR9, &VAR7) != 0)
        {
            goto VAR24;
        }
        VAR6.VAR23 = FUN7(VAR7.VAR25);
    VAR24:
        FUN9(VAR6.VAR26, sizeof(VAR6.VAR26), VAR9);
    }
    VAR6.VAR27 = FUN7(512);
    VAR6.VAR28 = FUN10(VAR8 * 512);
    VAR11 = FUN11(VAR13, 0, &VAR6, sizeof(VAR6));
    if (VAR11 < 0)
    {
        goto VAR16;
    }
    VAR11 = FUN12(VAR13, sizeof(VAR6) + ((VAR8 + 7) >> 3));
    if (VAR11 < 0)
    {
        goto VAR16;
    }
VAR16:
    FUN13(VAR9);
    FUN14(VAR13);
    return VAR11;
}
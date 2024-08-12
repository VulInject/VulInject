static void FUN1(VAR1 *VAR2, bool VAR3)
{
    char *VAR4;
    VAR1 *VAR5, *VAR6;
    int VAR7, VAR8;
    int VAR9;
    if (VAR10 == NULL)
    {
        VAR10 = VAR11;
    }
    VAR4 = FUN2(VAR12, VAR10);
    if (VAR4)
    {
        VAR7 = FUN3(VAR4);
    }
    else
    {
        VAR7 = -1;
    }
    if (VAR7 <= 0 || (VAR7 % 65536) != 0)
    {
        goto VAR13;
    }
    VAR5 = FUN4(sizeof(*VAR5));
    FUN5(VAR5, NULL, "", VAR7, &VAR14);
    FUN6(VAR5);
    if (!VAR3)
    {
        FUN7(VAR5, true);
    }
    VAR9 = FUN8(VAR10, (VAR15)(-VAR7), -1);
    if (VAR9 != 0)
    {
    VAR13:
        fprintf(VAR16, "", VAR10);
        FUN9(1);
    }
    FUN10(VAR4);
    VAR8 = VAR7;
    if (VAR8 > (128 * 1024))
    {
        VAR8 = 128 * 1024;
    }
    VAR6 = FUN4(sizeof(*VAR6));
    FUN11(VAR6, NULL, "", VAR5, VAR7 - VAR8, VAR8);
    FUN12(VAR2, 0x100000 - VAR8, VAR6, 1);
    if (!VAR3)
    {
        FUN7(VAR6, true);
    }
    FUN13(VAR2, (VAR15)(-VAR7), VAR5);
}
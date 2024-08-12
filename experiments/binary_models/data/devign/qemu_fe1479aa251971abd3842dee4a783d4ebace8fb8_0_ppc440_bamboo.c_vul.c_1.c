static int FUN1(hwaddr VAR1, uint32_t VAR2, hwaddr VAR3, hwaddr VAR4, const char *VAR5)
{
    int VAR6 = -1;
    uint32_t VAR7[] = {0, 0, FUN2(VAR2)};
    char *VAR8;
    int VAR9;
    void *VAR10;
    uint32_t VAR11 = 400000000;
    uint32_t VAR12 = 400000000;
    VAR8 = FUN3(VAR13, VAR14);
    if (!VAR8)
    {
        goto VAR15;
    }
    VAR10 = FUN4(VAR8, &VAR9);
    FUN5(VAR8);
    if (VAR10 == NULL)
    {
        goto VAR15;
    }
    VAR6 = FUN6(VAR10, "", "", VAR7, sizeof(VAR7));
    if (VAR6 < 0)
        fprintf(VAR16, "");
    VAR6 = FUN7(VAR10, "", "", VAR3);
    if (VAR6 < 0)
        fprintf(VAR16, "");
    VAR6 = FUN7(VAR10, "", "", (VAR3 + VAR4));
    if (VAR6 < 0)
        fprintf(VAR16, "");
    VAR6 = FUN8(VAR10, "", "", VAR5);
    if (VAR6 < 0)
        fprintf(VAR16, "");
    if (FUN9())
    {
        VAR11 = FUN10();
        VAR12 = FUN11();
    }
    FUN7(VAR10, "", "", VAR12);
    FUN7(VAR10, "", "", VAR11);
    VAR6 = FUN12(VAR14, VAR10, VAR9, VAR1);
    FUN5(VAR10);
VAR15:
    return VAR6;
}
static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    uint32_t VAR5;
    char *VAR6;
    FUN2("" VAR7 "", VAR2->VAR8.VAR9);
    VAR6 = FUN3(VAR10);
    VAR3 = FUN4(VAR2->VAR11, VAR2->VAR8.VAR12, VAR2->VAR8.VAR9, &VAR5, 1, VAR2->VAR13, VAR2->VAR14);
    if (VAR3)
    {
        goto VAR15;
    }
    FUN2("" VAR7 "", VAR5);
    VAR4 = FUN5(VAR2->VAR13, VAR2->VAR14);
    if (VAR4 < 0)
    {
        FUN6("");
        VAR3 = VAR4;
        goto VAR15;
    }
    VAR3 = FUN7(VAR4, VAR6, FUN8(VAR5), VAR2->VAR8.VAR16, VAR10, 0, VAR2->VAR17);
    FUN9(VAR4);
    if (VAR3 < 0)
    {
        goto VAR15;
    }
    memcpy(&VAR2->VAR8, VAR6, sizeof(VAR2->VAR8));
    VAR2->VAR18 = false;
    VAR3 = 0;
    FUN2("" VAR7 "", VAR2->VAR8.VAR9);
VAR15:
    FUN10(VAR6);
    return VAR3;
}
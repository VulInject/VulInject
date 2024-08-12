static void FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4], VAR5[VAR4], VAR6[VAR4] = {}, *VAR7;
    uint16_t VAR8, VAR9;
    int VAR10;
    snprintf(VAR5, sizeof(VAR5), "", VAR2->VAR11.VAR12, VAR2->VAR11.VAR13, VAR2->VAR11.VAR14, VAR2->VAR11.VAR15);
    snprintf(VAR3, sizeof(VAR3), "", VAR5);
    VAR10 = readlink(VAR3, VAR6, sizeof(VAR6));
    if ((VAR10 <= 0) || VAR10 >= sizeof(VAR6))
    {
        goto VAR16;
    }
    VAR7 = strrchr(VAR6, '');
    if (!VAR7)
    {
        goto VAR16;
    }
    VAR7++;
    if (FUN2(VAR5, &VAR8) || FUN3(VAR5, &VAR9))
    {
        goto VAR16;
    }
    FUN4(""
                 ""
                 ""
                 ""
                 ""
                 ""%04x %04x\""
                 ""%04x:%02x:%02x.%VAR17\""
                 ""%04x:%02x:%02x.%VAR17\""
                 ""
                 ""%04x %04x\""
                 "",
                 VAR7, VAR2->VAR11.VAR12, VAR2->VAR11.VAR13, VAR2->VAR11.VAR14, VAR2->VAR11.VAR15, VAR8, VAR9, VAR2->VAR11.VAR12, VAR2->VAR11.VAR13, VAR2->VAR11.VAR14, VAR2->VAR11.VAR15, VAR7, VAR2->VAR11.VAR12, VAR2->VAR11.VAR13, VAR2->VAR11.VAR14, VAR2->VAR11.VAR15, VAR8, VAR9);
    return;
VAR16:
    FUN5("");
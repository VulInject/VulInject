int FUN1(const char *VAR1, const char *VAR2, const char *VAR3)
{
    uint32_t VAR4 = 0;
    uint32_t VAR5 = 0;
    xen_domain_handle_t VAR6;
    unsigned int VAR7 = 0, VAR8 = 0;
    unsigned long VAR9 = 0, VAR10 = 0;
    int VAR11;
    memcpy(VAR6, VAR12, sizeof(VAR6));
    VAR11 = FUN2(VAR13, VAR4, VAR6, VAR5, &VAR14);
    if (VAR11 < 0)
    {
        fprintf(VAR15, "");
        goto VAR16;
    }
    FUN3("", VAR14);
    FUN4(VAR17);
    if (FUN5() == -1)
    {
        goto VAR16;
    }
    FUN6(VAR1, VAR2, VAR3);
    VAR11 = FUN7(VAR13, VAR14, VAR18);
    if (VAR11 < 0)
    {
        fprintf(VAR15, "");
        goto VAR16;
    }
    VAR11 = FUN8(VAR13, VAR14, 256);
    if (VAR11 < 0)
    {
        fprintf(VAR15, "");
        goto VAR16;
    }
    VAR11 = FUN9(VAR13, VAR14, VAR19 >> 10);
    if (VAR11 < 0)
    {
        fprintf(VAR15, "");
        goto VAR16;
    }
    VAR7 = FUN10(VAR13, VAR14, 0);
    VAR8 = FUN10(VAR13, VAR14, 0);
    VAR11 = FUN11(VAR13, VAR14, VAR19 >> 20, VAR1, VAR2, VAR3, 0, VAR5, VAR7, &VAR9, VAR8, &VAR10);
    if (VAR11 < 0)
    {
        fprintf(VAR15, "");
        goto VAR16;
    }
    FUN12(VAR7, VAR9, VAR8, VAR10);
    FUN3("", VAR14);
    VAR11 = FUN13(VAR13, VAR14);
    if (VAR11 < 0)
    {
        fprintf(VAR15, "");
        goto VAR16;
    }
    VAR20 = FUN14(VAR21, VAR22, NULL);
    FUN15(VAR20, FUN16(VAR21) + 1000);
    return 0;
VAR16:
    return -1;
}
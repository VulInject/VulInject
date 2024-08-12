static void FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, target_phys_addr_t VAR4, target_phys_addr_t VAR5)
{
    int VAR6;
    void *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(VAR10);
    FUN3((FUN4(VAR2->VAR11, VAR7, VAR10)));
    VAR6 = FUN5(VAR2->VAR12, VAR7);
    if (VAR6 < 0)
    {
        fprintf(VAR13, "");
        FUN6(1);
    }
    FUN7(VAR9, &VAR2->VAR14, VAR15) { VAR6 = FUN8(VAR9, VAR16, VAR7); }
    if (VAR6 < 0)
    {
        fprintf(VAR13, "");
        FUN6(1);
    }
    VAR6 = FUN9(VAR7, VAR4, VAR5);
    if (VAR6 < 0)
    {
        fprintf(VAR13, "");
    }
    if (VAR17 > 1)
    {
        VAR6 = FUN10(VAR7, VAR2);
        if (VAR6 < 0)
        {
            fprintf(VAR13, "");
        }
    }
    if (!VAR2->VAR18)
    {
        FUN11(VAR7, VAR2->VAR12);
    }
    FUN3((FUN12(VAR7)));
    if (FUN13(VAR7) > VAR10)
    {
        FUN14("", FUN13(VAR7), VAR10);
        FUN6(1);
    }
    FUN15(VAR3, VAR7, FUN13(VAR7));
    FUN16(VAR7);
}
static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = FUN2(NULL);
    VAR6 *VAR7 = FUN3(VAR2);
    const VAR8 *VAR9 = VAR7->FUN4(VAR2);
    assert(VAR10);
    for (VAR3 = 0; VAR3 < VAR9->VAR11; VAR3++)
    {
        const VAR12 *VAR13 = &VAR9->VAR14[VAR3];
        if (!VAR13->VAR15.VAR16)
        {
            char *VAR17 = FUN5(VAR13);
            FUN6(VAR5, "", VAR5->VAR11 ? "" : "", VAR3, VAR17);
            FUN7(VAR17);
        }
    }
    if (VAR5->VAR11 && !FUN8())
    {
        FUN9("", VAR5->VAR18);
        FUN9(""
                     ""
                     "");
    }
    FUN10(VAR5, true);
}
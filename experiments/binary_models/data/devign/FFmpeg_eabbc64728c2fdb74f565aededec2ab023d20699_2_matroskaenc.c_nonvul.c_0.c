static void FUN1(VAR1 *VAR2, VAR1 **VAR3, VAR4 *VAR5, ebml_master VAR6)
{
    VAR7 *VAR8, VAR9[4];
    int VAR10, VAR11 = 0;
    if (VAR2->VAR12)
    {
        VAR10 = FUN2(*VAR3, &VAR8);
        if (VAR5->VAR13 && VAR5->VAR14 != VAR15)
        {
            VAR11 = 6;
            FUN3(VAR9, FUN4(FUN5(VAR16), VAR17, VAR8 + VAR11, VAR10 - VAR11) ^ VAR17);
            FUN6(VAR2, VAR18, VAR9, sizeof(VAR9));
        }
        FUN7(VAR2, VAR8 + VAR11, VAR10 - VAR11);
        FUN8(VAR2, VAR6);
    }
    else
    {
        FUN8(*VAR3, VAR6);
        VAR10 = FUN2(*VAR3, &VAR8);
        FUN7(VAR2, VAR8, VAR10);
    }
    FUN9(VAR8);
    *VAR3 = NULL;
}
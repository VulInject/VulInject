static int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 **VAR5)
{
    if (VAR2->VAR6 != VAR3->VAR6 || VAR2->VAR7 != VAR3->VAR7)
    {
        int VAR8;
        *VAR5 = FUN2(NULL, FUN3(VAR3->VAR7), VAR3->VAR6, VAR3->VAR9, FUN3(VAR2->VAR7), VAR2->VAR6, VAR2->VAR9, 0, NULL);
        if (!*VAR5)
        {
            fprintf(VAR10, "");
            return FUN4(VAR11);
        }
        FUN5(VAR3->VAR9 == VAR2->VAR9);
        if ((VAR8 = FUN6(*VAR5)) < 0)
        {
            fprintf(VAR10, "");
            FUN7(VAR5);
            return VAR8;
        }
    }
    return 0;
}
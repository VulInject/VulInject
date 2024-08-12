static void FUN1(const VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5, *VAR6;
    FUN2("", VAR2 ? VAR2->VAR7 : "", VAR3 ? VAR3->VAR7 : "");
    VAR5 = FUN3(VAR2);
    VAR6 = FUN3(VAR3);
    VAR5->VAR8 = VAR5->VAR9 = 128;
    if (VAR6->VAR10 && VAR6->VAR10->VAR11 && VAR6->VAR10->VAR12)
    {
        FUN4(VAR6->VAR13, "", "", 0);
        FUN4(VAR6->VAR13, "", "", 0);
    }
    FUN5(VAR6, VAR5);
    FUN6(VAR5);
    FUN6(VAR6);
    if (VAR5->VAR10)
    {
        int VAR14;
        FUN2("");
        VAR14 = FUN7(VAR5, VAR5->VAR10, NULL);
        if (VAR14 < 0)
        {
            fprintf(VAR15, "");
            FUN8(1);
        }
        if (VAR6->VAR10 && VAR6->VAR10->VAR11 && VAR6->VAR10->VAR12)
        {
            FUN4(VAR6->VAR13, "", "", 0);
            FUN4(VAR6->VAR13, "", "", 0);
        }
        FUN5(VAR6, VAR5);
        FUN6(VAR5);
        FUN6(VAR6);
        FUN9(VAR5);
    }
    FUN10(&VAR5);
    FUN10(&VAR6);
}
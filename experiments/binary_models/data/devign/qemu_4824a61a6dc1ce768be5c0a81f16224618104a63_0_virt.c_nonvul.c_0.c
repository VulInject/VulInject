static void FUN1(const VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = 1;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        VAR6 *VAR7 = FUN2(FUN3(VAR3));
        if (VAR7->VAR8 & VAR9)
        {
            VAR4 = 2;
            break;
        }
    }
    FUN4(VAR2->VAR10, "");
    FUN5(VAR2->VAR10, "", "", VAR4);
    FUN5(VAR2->VAR10, "", "", 0x0);
    for (VAR3 = VAR2->VAR5 - 1; VAR3 >= 0; VAR3--)
    {
        char *VAR11 = FUN6("", VAR3);
        VAR6 *VAR7 = FUN2(FUN3(VAR3));
        FUN4(VAR2->VAR10, VAR11);
        FUN7(VAR2->VAR10, VAR11, "", "");
        FUN7(VAR2->VAR10, VAR11, "", VAR7->VAR12);
        if (VAR2->VAR13 && VAR2->VAR5 > 1)
        {
            FUN7(VAR2->VAR10, VAR11, "", "");
        }
        if (VAR4 == 2)
        {
            FUN8(VAR2->VAR10, VAR11, "", VAR7->VAR8);
        }
        else
        {
            FUN5(VAR2->VAR10, VAR11, "", VAR7->VAR8);
        }
        FUN9(VAR11);
    }
}
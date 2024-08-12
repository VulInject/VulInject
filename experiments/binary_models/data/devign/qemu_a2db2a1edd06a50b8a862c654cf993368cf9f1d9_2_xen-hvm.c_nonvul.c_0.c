static void FUN1(VAR1 *VAR2)
{
    int VAR3 = -1;
    if (VAR2->VAR4 != NULL)
    {
        VAR3 = FUN2(VAR2->VAR4);
    }
    VAR2->VAR5 = FUN3(VAR6, VAR7, VAR2);
    if (VAR3 != -1)
    {
        VAR8 *VAR9;
        FUN4("", VAR10);
        FUN5(VAR9)
        {
            FUN4("", VAR10, VAR9->VAR11, VAR9);
            VAR2->VAR12[VAR9->VAR11] = VAR9;
        }
        FUN6(VAR3, VAR13, NULL, VAR2);
    }
}
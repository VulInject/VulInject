static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    FUN2(VAR2->VAR6);
    for (VAR5 = 0; VAR5 < VAR2->VAR7->VAR8; ++VAR5)
    {
        VAR4 = &FUN3(VAR2->VAR7, VAR3, VAR5);
        FUN2(VAR4->VAR9);
        if (VAR4->VAR10 && !VAR4->VAR11 && FUN4(VAR4->VAR10, -1, ""))
        {
            unlink(VAR4->VAR10);
        }
        FUN2(VAR4->VAR10);
        FUN2(VAR4->VAR12);
        if (VAR4->VAR13 && !VAR4->VAR11)
        {
            unlink(VAR4->VAR13);
        }
        FUN2(VAR4->VAR13);
    }
    FUN5(VAR2->VAR7, false);
}
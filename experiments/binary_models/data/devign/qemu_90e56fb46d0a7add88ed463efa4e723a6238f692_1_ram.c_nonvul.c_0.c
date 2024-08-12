void FUN1(void)
{
    int VAR1, VAR2;
    VAR2 = FUN2();
    VAR3 = FUN3(VAR4, VAR2);
    VAR5 = FUN3(VAR6, VAR2);
    FUN4(&VAR7);
    FUN5(&VAR8);
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        FUN4(&VAR5[VAR1].mutex);
        FUN5(&VAR5[VAR1].VAR9);
        VAR5[VAR1].VAR10 = FUN6(FUN7(VAR11));
        VAR5[VAR1].VAR12 = true;
        VAR5[VAR1].VAR13 = false;
        FUN8(VAR3 + VAR1, "", VAR14, VAR5 + VAR1, VAR15);
    }
}
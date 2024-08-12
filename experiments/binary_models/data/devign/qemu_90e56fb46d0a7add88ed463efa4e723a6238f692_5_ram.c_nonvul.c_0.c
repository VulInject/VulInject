void FUN1(void)
{
    int VAR1, VAR2;
    if (!FUN2())
    {
        return;
    }
    VAR3 = true;
    VAR2 = FUN3();
    VAR4 = FUN4(VAR5, VAR2);
    VAR6 = FUN4(VAR7, VAR2);
    VAR8 = FUN4(VAR9, 1);
    VAR10 = FUN4(VAR11, 1);
    FUN5(VAR8);
    FUN6(VAR10);
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        VAR6[VAR1].VAR12 = FUN7(NULL, &VAR13);
        VAR6[VAR1].VAR14 = true;
        VAR6[VAR1].VAR15 = false;
        FUN6(&VAR6[VAR1].mutex);
        FUN5(&VAR6[VAR1].VAR16);
        FUN8(VAR4 + VAR1, "", VAR17, VAR6 + VAR1, VAR18);
    }
}
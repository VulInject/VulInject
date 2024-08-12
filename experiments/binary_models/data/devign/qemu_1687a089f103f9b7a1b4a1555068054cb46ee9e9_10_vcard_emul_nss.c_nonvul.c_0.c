FUN1(void)
{
    VAR1 *VAR2;
    VAR1 *VAR3;
    VAR4 *VAR5 = FUN2();
    for (VAR2 = FUN3(VAR5); VAR2; VAR2 = VAR3)
    {
        VAR6 *VAR7 = FUN4(VAR2);
        VAR3 = FUN5(VAR2);
        FUN6(VAR7);
    }
    FUN7(VAR5);
}
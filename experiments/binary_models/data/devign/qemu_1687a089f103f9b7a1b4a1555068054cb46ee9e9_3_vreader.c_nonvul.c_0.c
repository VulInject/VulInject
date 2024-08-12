FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    for (VAR4 = FUN2(VAR2); VAR4; VAR4 = VAR5)
    {
        VAR5 = FUN3(VAR4);
        FUN4(VAR4);
    }
    VAR2->VAR6 = NULL;
    VAR2->VAR7 = NULL;
    FUN5(VAR2);
}
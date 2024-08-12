static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR4 = FUN2(VAR3);
    if (VAR4 < 0)
    {
        fprintf(VAR5, "");
        goto VAR6;
    }
    FUN3();
    FUN4("");
    if (VAR7)
        FUN5();
VAR6:
    FUN6(FUN7(VAR3), NULL, NULL, NULL, NULL);
    FUN8(VAR3);
}
static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    VAR3->VAR6 = FUN2(VAR4);
    FUN3(VAR3->VAR6 != NULL);
    VAR3->VAR7 = FUN4(VAR3->VAR6);
    FUN3(VAR3->VAR7 != NULL);
    VAR5 = FUN5(VAR3->VAR7);
    FUN3(VAR5 != NULL);
    return VAR5;
}
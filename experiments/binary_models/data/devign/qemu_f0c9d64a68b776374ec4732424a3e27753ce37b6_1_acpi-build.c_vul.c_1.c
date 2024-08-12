static void *FUN1(VAR1 *VAR2, void *VAR3)
{
    unsigned *VAR4 = VAR3;
    unsigned *VAR5;
    if (FUN2(FUN3(VAR2)))
    {
        VAR5 = FUN4(sizeof *VAR5);
        *VAR5 = (*VAR4)++;
        FUN5(FUN6(VAR2), VAR6, VAR5, NULL);
    }
    return VAR4;
}
static int FUN1(VAR1 *VAR2)
{
    signed char VAR3, VAR4;
    FUN2(VAR2->VAR5, VAR2->VAR6, 2);
    VAR3 = *VAR2->VAR5++;
    VAR4 = *VAR2->VAR5++;
    FUN3("", VAR3, VAR4);
    return FUN4(VAR2, &VAR2->VAR7, VAR3, VAR4);
}
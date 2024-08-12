static int FUN1(int VAR1, int *VAR2)
{
    int VAR3 = VAR4->VAR5 == 0 || (VAR4->VAR5 >= 10 && VAR4->VAR5 <= 13);
    int VAR6 = VAR1 == 0 || (VAR1 >= 10 && VAR1 <= 13);
    FUN2(VAR7, "", VAR4->VAR5, VAR1);
    if (VAR4->VAR5 == VAR8)
        FUN3(VAR4, "");
    if ((VAR3 && VAR6) || (VAR4->VAR5 == VAR9 && (VAR6 || (VAR1 == VAR9))))
    {
        VAR1 = VAR8;
        *VAR2 = 0;
    }
    if (VAR6 || (VAR1 == VAR9) || (VAR1 == VAR8))
        VAR4->VAR5 = VAR1;
    return VAR1;
}
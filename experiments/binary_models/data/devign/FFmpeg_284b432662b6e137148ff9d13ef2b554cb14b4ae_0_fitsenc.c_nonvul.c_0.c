static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR2);
    if (VAR5 < 0)
        return VAR5;
    FUN3(VAR2->VAR6, VAR4->VAR7, VAR4->VAR8);
    return 0;
}
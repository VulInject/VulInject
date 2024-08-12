static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR3 ***VAR7, VAR8 **VAR9)
{
    *VAR6 = 1;
    *VAR7 = FUN2(VAR3 *, 1);
    (*VAR7)[0] = FUN3(VAR3, VAR4);
    return 0;
}
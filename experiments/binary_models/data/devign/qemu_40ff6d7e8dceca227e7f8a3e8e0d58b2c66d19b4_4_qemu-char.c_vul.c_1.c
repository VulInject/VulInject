static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    FUN2(VAR4 = open(FUN3(VAR3, ""), VAR5 | VAR6 | VAR7 | VAR8, 0666));
    if (VAR4 < 0)
        return NULL;
    return FUN4(-1, VAR4);
}
static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (VAR4->VAR5)
    {
        VAR4->VAR6 = FUN3(VAR4->VAR5);
    }
    else
    {
        VAR4->VAR6 = VAR7;
        VAR4->VAR8 = FUN4(VAR4->VAR6);
    }
    if ((VAR4->VAR6 < VAR9) || (VAR4->VAR6 > VAR10))
    {
        fprintf(VAR11, "", VAR9, VAR10);
        return -1;
    }
    FUN5("", VAR12);
    FUN5("", VAR13);
    return 0;
}
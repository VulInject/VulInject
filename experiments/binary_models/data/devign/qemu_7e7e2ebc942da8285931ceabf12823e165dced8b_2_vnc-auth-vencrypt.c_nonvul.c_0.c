static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    if (VAR4[0] != 0 || VAR4[1] != 2)
    {
        FUN2("", (int)VAR4[0], (int)VAR4[1]);
        FUN3(VAR2, 1);
        FUN4(VAR2);
        FUN5(VAR2);
    }
    else
    {
        FUN2("", VAR2->VAR6);
        FUN3(VAR2, 0);
        FUN3(VAR2, 1);
        FUN6(VAR2, VAR2->VAR6);
        FUN4(VAR2);
        FUN7(VAR2, VAR7, 4);
    }
    return 0;
}
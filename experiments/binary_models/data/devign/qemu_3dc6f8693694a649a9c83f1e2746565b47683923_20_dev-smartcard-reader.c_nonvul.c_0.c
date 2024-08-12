static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2->VAR7->VAR8);
    VAR9 *VAR10 = FUN4(VAR6);
    int VAR11 = 0;
    if (VAR4->VAR12 != 0)
    {
        FUN5("", VAR4->VAR12);
        return -1;
    }
    if (VAR10->VAR4 != NULL)
    {
        FUN5("");
        return -1;
    }
    VAR11 = FUN6(VAR4);
    if (VAR11 == 0)
    {
        VAR10->VAR4 = VAR4;
    }
    return VAR11;
}
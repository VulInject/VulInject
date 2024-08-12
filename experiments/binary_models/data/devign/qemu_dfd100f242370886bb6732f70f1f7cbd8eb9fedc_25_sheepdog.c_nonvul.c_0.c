static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR5 = FUN2(VAR2->VAR6, NULL, NULL, VAR4);
    if (VAR2->VAR6->VAR7 == VAR8 && VAR5 >= 0)
    {
        int VAR9 = FUN3(VAR5);
        if (VAR9 < 0)
        {
            FUN4("", strerror(VAR10));
        }
    }
    if (VAR5 >= 0)
    {
        FUN5(VAR5);
    }
    else
    {
        VAR5 = -VAR11;
    }
    return VAR5;
}
static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7 = 0;
    if (close(VAR6->VAR8) < 0)
    {
        VAR7 = -1;
    }
    if (close(VAR6->VAR9) < 0)
    {
        VAR7 = -1;
    }
    if (FUN3(VAR6, VAR4) < 0)
    {
        return -1;
    }
    if (VAR7 < 0)
    {
        FUN4(VAR4, VAR10, "", "");
    }
    return VAR7;
}
static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR5 = FUN2(VAR2, VAR6, 0);
    if (VAR5 < 0)
    {
        assert(VAR5 == -VAR7);
        FUN3(VAR4, "");
    }
    else
    {
        FUN4(VAR2, 0);
    }
    return VAR5;
}
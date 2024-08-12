int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5)
{
    int VAR6 = FUN2(VAR2, VAR3, VAR4, VAR5);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    else if (VAR6 > 0)
    {
        int VAR7 = FUN3(VAR6);
        assert(VAR7 < VAR8);
        FUN4(VAR2, true, VAR4, VAR5, ""
                                                        "",
                                VAR9[VAR7]);
        return -VAR10;
    }
    return 0;
}
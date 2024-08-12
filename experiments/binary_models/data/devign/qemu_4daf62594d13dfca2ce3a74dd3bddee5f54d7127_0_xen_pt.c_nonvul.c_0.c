static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4)
{
    if (VAR3 > 0xFF)
    {
        FUN2(VAR2, ""
                      "",
                   VAR3, VAR4);
        return -1;
    }
    if ((VAR4 != 1) && (VAR4 != 2) && (VAR4 != 4))
    {
        FUN2(VAR2, ""
                      "",
                   VAR3, VAR4);
        return -1;
    }
    if (VAR3 & (VAR4 - 1))
    {
        FUN2(VAR2, ""
                      "",
                   VAR3, VAR4);
        return -1;
    }
    return 0;
}
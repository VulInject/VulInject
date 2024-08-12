static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    if ((VAR2->VAR5 & (VAR6 | VAR7)) == 0)
    {
        if (VAR2->VAR5 & VAR8)
            VAR4 = 0xffffffff;
        else
            VAR4 = 0xffff;
    }
    else
    {
        VAR4 = VAR2->VAR4;
    }
    FUN2(VAR2->VAR9, VAR4, VAR3);
}
static void FUN1(VAR1 *VAR2)
{
    if (!(VAR2->VAR3 || VAR2->VAR4 || VAR2->VAR5))
    {
        FUN2("");
    }
    else
    {
        if (VAR2->VAR3)
        {
            FUN2("" VAR6 ""
                   ""
                   "",
                   VAR2->VAR3);
        }
        if (VAR2->VAR4)
        {
            FUN2("" VAR6 ""
                   "",
                   VAR2->VAR4);
        }
        if (VAR2->VAR5)
        {
            FUN2("" VAR6 "", VAR2->VAR5);
        }
    }
    if (VAR2->VAR7 != 0 && VAR2->VAR8 != 0)
    {
        FUN2("" VAR6 "" VAR6 ""
               "",
               VAR2->VAR8, VAR2->VAR7, VAR2->VAR8 * 100.0 / VAR2->VAR7, VAR2->VAR9 * 100.0 / VAR2->VAR8);
    }
    if (VAR2->VAR10)
    {
        FUN2("" VAR6 "", VAR2->VAR10);
    }
}
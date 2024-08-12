static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4 = VAR3->VAR5->VAR6 * 4;
    FUN2("");
    if (FUN3(VAR3, VAR2, VAR4 + VAR7))
    {
        FUN4("", VAR3->VAR8);
        FUN4("", VAR2->VAR8);
        if (FUN5(VAR9))
        {
            FUN6((char *)VAR3->VAR10, VAR11, "", VAR3->VAR8);
            FUN6((char *)VAR2->VAR10, VAR11, "", VAR2->VAR8);
        }
        return -1;
    }
    else
    {
        return 0;
    }
}
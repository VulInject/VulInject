FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    if (FUN2(FUN3(VAR2->VAR5), VAR6))
    {
        return 0;
    }
    else if (FUN2(FUN3(VAR2->VAR5), VAR7))
    {
        if (VAR2->VAR5->VAR8)
        {
            return FUN4(VAR2, VAR4);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        FUN5(VAR4, "", FUN6(FUN3(VAR2->VAR5)));
        return -1;
    }
}
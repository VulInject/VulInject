static int FUN1(VAR1 **VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5 != 0xFF)
    {
        if (VAR4->VAR6 != 0xFF)
        {
            if (FUN2(VAR2, VAR4->VAR7, VAR4->VAR5, VAR4->VAR6, &VAR4->VAR8) < 0)
                return -1;
        }
        else
        {
            if (FUN3(VAR2, VAR4->VAR7, VAR4->VAR5, &VAR4->VAR8) < 0)
                return -1;
        }
    }
    else
    {
        if (FUN4(VAR2, VAR4->VAR7, &VAR4->VAR8) < 0)
            return -1;
    }
    return 0;
}
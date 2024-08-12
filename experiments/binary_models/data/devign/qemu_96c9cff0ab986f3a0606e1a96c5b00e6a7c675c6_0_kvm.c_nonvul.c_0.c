int FUN1(int VAR1)
{
    uint32_t VAR2 = VAR1;
    if (!FUN2())
    {
        return 0;
    }
    if (FUN3(VAR3, VAR4))
    {
        int VAR5;
        VAR5 = FUN4(VAR3, VAR6, &VAR2);
        if (VAR5 == -VAR7)
        {
            return 0;
        }
        else if (VAR5 < 0)
        {
            return VAR5;
        }
        return VAR2;
    }
    if (FUN5(VAR3))
    {
        return 0;
    }
    else
    {
        return 24;
    }
}
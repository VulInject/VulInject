VAR1 FUN1(VAR2 *VAR3, ssize_t VAR4, VAR5 **VAR6)
{
    if (VAR4 <= 0)
    {
        if (VAR4 == 0)
        {
            FUN2("");
        }
        else if (VAR4 != VAR7)
        {
            FUN2("", VAR4, VAR6 ? FUN3(*VAR6) : "");
        }
        FUN4(VAR3);
        if (VAR6)
        {
            FUN5(*VAR6);
            *VAR6 = NULL;
        }
        return 0;
    }
    return VAR4;
}
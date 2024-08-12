bool FUN1(void)
{
    if (!FUN2())
    {
        fprintf(VAR1, "");
        return false;
    }
    if (!FUN3())
    {
        fprintf(VAR1, "");
        return false;
    }
    return true;
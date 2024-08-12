static bool FUN1(const char *VAR1)
{
    if (FUN2(VAR1, ""))
    {
        return false;
    }
    if (FUN2(VAR1, "") || FUN2(VAR1, "") || FUN2(VAR1, "") || FUN2(VAR1, "") || FUN2(VAR1, "") || FUN2(VAR1, "") || FUN2(VAR1, ""))
    {
        return false;
    }
    if (FUN3(VAR1, ""))
    {
        return false;
    }
    return true;
}
static void FUN1(void)
{
    if (!FUN2() && VAR1 != -1)
    {
        if (VAR2 == 0)
        {
            FUN3("", VAR1);
        }
        else
        {
            FUN3("" VAR3, VAR1, VAR2);
        }
        VAR1 = -1;
    }
}
static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    if (VAR4->VAR6)
    {
        if (VAR4->VAR7 >= 0)
        {
            VAR5 = write(VAR4->VAR7, "", 1);
            if (VAR5 != 1)
            {
                FUN3("", strerror(VAR8));
            }
            else
            {
                VAR4->VAR9 = true;
            }
        }
        else
        {
            FUN3(""
                         "");
        }
    }
}
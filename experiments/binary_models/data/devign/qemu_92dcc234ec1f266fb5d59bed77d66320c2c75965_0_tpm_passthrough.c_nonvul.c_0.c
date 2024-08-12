static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    int VAR6;
    if (VAR4->VAR7)
    {
        if (VAR4->VAR8 >= 0)
        {
            VAR6 = write(VAR4->VAR8, "", 1);
            if (VAR6 != 1)
            {
                FUN2("", strerror(VAR9));
            }
            else
            {
                VAR4->VAR10 = true;
            }
        }
        else
        {
            FUN2(""
                         "");
        }
    }
}
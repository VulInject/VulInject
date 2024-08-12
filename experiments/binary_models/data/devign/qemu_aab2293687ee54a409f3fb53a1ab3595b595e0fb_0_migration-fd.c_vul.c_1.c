static int FUN1(VAR1 *VAR2)
{
    FUN2("");
    if (VAR2->VAR3 != -1)
    {
        close(VAR2->VAR3);
        VAR2->VAR3 = -1;
    }
    return 0;
}
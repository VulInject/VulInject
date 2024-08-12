static VAR1 FUN1(VAR2 *VAR3)
{
    unsigned int VAR4 = FUN2(VAR3);
    if (VAR4 == 2)
        return FUN3(VAR3);
    else if (VAR4 == 4)
        return FUN4(VAR3);
    else
    {
        FUN5(NULL, VAR5, "", VAR4);
        return -1;
    }
}
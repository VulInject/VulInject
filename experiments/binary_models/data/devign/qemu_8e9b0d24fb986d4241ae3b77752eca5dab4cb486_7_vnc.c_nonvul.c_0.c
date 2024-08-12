void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3);
    if (VAR3->VAR4.VAR5 || VAR3->VAR6.VAR5)
    {
        FUN3(VAR1);
    }
    else if (VAR3->VAR7 != -1)
    {
        FUN4(VAR3->VAR7, VAR8, NULL, VAR3);
    }
    FUN5(VAR3);
}
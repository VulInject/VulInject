static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (FUN2(VAR3))
    {
        FUN3(VAR3->VAR4, VAR5 + FUN4(VAR6));
    }
    else
    {
        FUN5(VAR3->VAR4);
        FUN6(VAR3->VAR7, VAR3->VAR8);
    }
}
void FUN1(void *VAR1)
{
    VAR2 *VAR3;
    VAR3 = (VAR2 *)VAR1;
    if (VAR3->VAR4)
    {
        FUN2(VAR3->VAR4->VAR5);
        FUN3();
        FUN4(VAR3->VAR4);
    }
    if (VAR1)
    {
        if (VAR3->VAR6)
        {
            FUN2(VAR3->VAR6);
            FUN3();
        }
        FUN5(VAR3->VAR7);
        FUN5(VAR3->VAR8);
        FUN5(VAR3->VAR9);
        FUN5(VAR3->VAR10);
        FUN5(VAR3->VAR11);
        FUN6(VAR3->VAR12);
        FUN6(VAR3->VAR13);
        FUN4(VAR1);
    }
}
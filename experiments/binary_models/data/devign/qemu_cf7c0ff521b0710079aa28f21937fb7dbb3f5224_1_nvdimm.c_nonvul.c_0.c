static VAR1 *FUN1(void)
{
    VAR2 *VAR3 = FUN2();
    VAR1 *VAR4 = FUN3(false, true, 1);
    for (; VAR3; VAR3 = VAR3->VAR5)
    {
        VAR6 *VAR7 = VAR3->VAR8;
        FUN4(VAR4, VAR7);
        FUN5(VAR4, VAR7);
        FUN6(VAR4, VAR7);
    }
    FUN7(VAR3);
    return VAR4;
}
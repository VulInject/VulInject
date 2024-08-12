static void FUN1(void)
{
    int VAR1;
    FUN2(&VAR2);
    FUN3(!FUN4(&VAR2));
    for (VAR1 = 0; VAR1 < VAR3; VAR1++)
    {
        FUN2(&VAR2);
        FUN5(false, VAR1, 150);
        FUN3(FUN4(&VAR2));
    }
    for (VAR1 = 0; VAR1 < VAR3; VAR1++)
    {
        FUN2(&VAR2);
        FUN5(false, VAR1, -150);
        FUN3(!FUN4(&VAR2));
    }
}
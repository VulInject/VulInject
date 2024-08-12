static void FUN1(hwaddr VAR1, hwaddr VAR2)
{
    if (FUN2(VAR1, VAR2))
    {
        FUN3(VAR1, VAR1 + VAR2, 0);
        FUN4(VAR1, VAR2);
    }
    else
    {
        FUN5(VAR1, VAR2);
    }
}
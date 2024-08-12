static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    int VAR5 = 0;
    while (true)
    {
        VAR6 *VAR7 = VAR3->VAR7;
        VAR4 = FUN2(VAR3->VAR8, VAR3->VAR7, sizeof(VAR3->VAR7));
        if (VAR4 <= 0)
        {
            break;
        }
        if (VAR3->VAR9 && !VAR3->VAR10)
        {
            VAR7 += VAR3->VAR9;
            VAR4 -= VAR3->VAR9;
        }
        VAR4 = FUN3(&VAR3->VAR11, VAR7, VAR4, VAR12);
        if (VAR4 == 0)
        {
            FUN4(VAR3, false);
            break;
        }
        else if (VAR4 < 0)
        {
            break;
        }
        VAR5++;
        if (VAR5 >= 50)
        {
            break;
        }
    }
}
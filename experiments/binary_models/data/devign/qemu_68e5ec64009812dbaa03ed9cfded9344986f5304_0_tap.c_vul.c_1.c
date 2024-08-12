static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    do
    {
        VAR5 *VAR6 = VAR3->VAR6;
        VAR4 = FUN2(VAR3->VAR7, VAR3->VAR6, sizeof(VAR3->VAR6));
        if (VAR4 <= 0)
        {
            break;
        }
        if (VAR3->VAR8 && !VAR3->VAR9)
        {
            VAR6 += VAR3->VAR8;
            VAR4 -= VAR3->VAR8;
        }
        VAR4 = FUN3(&VAR3->VAR10, VAR6, VAR4, VAR11);
        if (VAR4 == 0)
        {
            FUN4(VAR3, false);
        }
    } while (VAR4 > 0 && FUN5(&VAR3->VAR10));
}
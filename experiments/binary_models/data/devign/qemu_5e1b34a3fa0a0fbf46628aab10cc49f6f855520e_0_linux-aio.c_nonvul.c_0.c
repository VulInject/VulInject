static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    struct VAR5 *VAR6;
    struct VAR7 *VAR8[VAR9];
    FUN2(, VAR5)
    VAR10;
    do
    {
        if (VAR2->VAR11.VAR12 >= VAR9)
        {
            break;
        }
        VAR4 = 0;
        FUN3(VAR6, &VAR2->VAR11.VAR13, VAR14)
        {
            VAR8[VAR4++] = &VAR6->VAR7;
            if (VAR2->VAR11.VAR12 + VAR4 >= VAR9)
            {
                break;
            }
        }
        VAR3 = FUN4(VAR2->VAR15, VAR4, VAR8);
        if (VAR3 == -VAR16)
        {
            break;
        }
        if (VAR3 < 0)
        {
            FUN5();
        }
        VAR2->VAR11.VAR12 += VAR3;
        VAR2->VAR11.VAR17 -= VAR3;
        VAR6 = FUN6(VAR8[VAR3 - 1], struct VAR5, VAR7);
        FUN7(&VAR2->VAR11.VAR13, VAR6, VAR14, &VAR10);
    } while (VAR3 == VAR4 && !FUN8(&VAR2->VAR11.VAR13));
    VAR2->VAR11.VAR18 = (VAR2->VAR11.VAR17 > 0);
}
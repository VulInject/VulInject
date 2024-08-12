static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(&VAR3->mutex);
    if (FUN3(VAR3->VAR4) >= VAR5)
    {
        FUN4("");
        VAR3->VAR6 = true;
    }
    else if (FUN5(VAR3->VAR4, NULL, NULL, 0, NULL) != 0)
    {
        FUN4("");
        goto VAR7;
    }
    FUN6(VAR3->VAR8, FUN7(VAR9) + VAR10);
    FUN8(VAR3);
VAR7:
    FUN9(&VAR3->mutex);
}
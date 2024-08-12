void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR2->VAR5 = -1;
    VAR2->VAR6 = -1;
    VAR2->VAR7 = 1;
    if (FUN3())
    {
        VAR2->VAR8 = FUN4(VAR4) ? VAR9 : VAR10;
    }
    else
    {
        VAR2->VAR8 = VAR9;
    }
}
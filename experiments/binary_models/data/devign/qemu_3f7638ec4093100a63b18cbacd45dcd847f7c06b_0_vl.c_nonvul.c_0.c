void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR3->VAR4 = VAR5;
    VAR3->VAR6 = VAR7;
    if (FUN2())
        FUN3(VAR3);
    return;
}
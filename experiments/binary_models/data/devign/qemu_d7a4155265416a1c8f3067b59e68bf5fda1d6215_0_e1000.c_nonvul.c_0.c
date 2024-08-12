static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3->VAR6);
    if (VAR3->VAR7)
    {
        FUN3(VAR3);
    }
    if (VAR5->VAR8 && FUN4(VAR3))
    {
        VAR3->VAR9[VAR10] |= VAR11;
    }
}
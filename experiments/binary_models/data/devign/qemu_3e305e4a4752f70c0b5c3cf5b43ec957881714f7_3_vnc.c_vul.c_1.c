static void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        return;
    }
    if (VAR2->VAR4.VAR5 && VAR2->VAR4.VAR6)
    {
        VAR2->VAR3->VAR7 = true;
        VAR2->VAR3->VAR8 = FUN2(VAR2->VAR4.VAR6);
    }
    if (VAR2->VAR9.VAR10 && VAR2->VAR9.VAR11)
    {
        VAR2->VAR3->VAR12 = true;
        VAR2->VAR3->VAR13 = FUN2(VAR2->VAR9.VAR11);
    }
}
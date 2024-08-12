static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5)
    {
        FUN2(VAR2, VAR4->VAR6.VAR7);
        FUN3(VAR4->VAR6.VAR7);
    }
    else
    {
        FUN4(VAR2, VAR2->VAR8, sizeof(VAR9), VAR4, 0);
        VAR2->VAR8 += sizeof(VAR9);
    }
}
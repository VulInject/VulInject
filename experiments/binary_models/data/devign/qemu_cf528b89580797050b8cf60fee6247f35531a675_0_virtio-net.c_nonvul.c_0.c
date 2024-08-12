static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR5 *VAR6;
    VAR2->VAR3 = VAR3;
    VAR2->VAR7 = VAR2->VAR3 ? sizeof(struct VAR8) : sizeof(struct VAR9);
    for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
    {
        VAR6 = FUN2(VAR2->VAR11, VAR4);
        if (FUN3(VAR2) && FUN4(VAR6, VAR2->VAR7))
        {
            FUN5(VAR6, VAR2->VAR7);
            VAR2->VAR12 = VAR2->VAR7;
        }
    }
}
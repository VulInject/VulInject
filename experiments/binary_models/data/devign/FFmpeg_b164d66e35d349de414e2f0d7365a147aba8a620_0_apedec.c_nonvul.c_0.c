static void FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4 & VAR5)
    {
        FUN2(VAR2->VAR6, VAR7, "");
        return;
    }
    VAR2->FUN3(VAR2, VAR3);
    VAR2->FUN4(VAR2, VAR3);
    if (VAR2->VAR8 == 2)
    {
        memcpy(VAR2->VAR9[1], VAR2->VAR9[0], VAR3 * sizeof(*VAR2->VAR9[1]));
    }
}
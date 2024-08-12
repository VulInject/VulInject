static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    if (!VAR4->VAR5 || !VAR2->VAR6.VAR7)
        return;
    VAR2->VAR6.VAR7--;
    VAR2->VAR6.VAR8++;
    switch (VAR2->VAR6.VAR9)
    {
    case 0x00:
        FUN2(VAR2, VAR4);
        return;
    case 0x01:
        FUN3(VAR2, VAR4);
        return;
    default:
        fprintf(VAR10, "", VAR11, VAR2->VAR6.VAR9);
        FUN4(-1);
    }
}
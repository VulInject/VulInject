static int FUN1(VAR1 *VAR2)
{
    VhostNetOptions VAR3;
    if (FUN2(VAR2))
    {
        return 0;
    }
    VAR3.VAR4 = VAR5;
    VAR3.VAR6 = &VAR2->VAR7;
    VAR3.VAR8 = VAR2->VAR9;
    VAR3.VAR10 = true;
    VAR2->VAR11 = FUN3(&VAR3);
    return FUN2(VAR2) ? 0 : -1;
}
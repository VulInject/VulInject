static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    uint32_t VAR4 = VAR2->VAR5 & 0x0fff;
    if (VAR2->VAR6 & VAR7)
    {
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            VAR2->VAR8[VAR3] = FUN2(&VAR2->VAR9);
        }
        FUN3(&VAR10, VAR2->VAR11, VAR2->VAR8, VAR4);
    }
    else
    {
        FUN4(&VAR10, VAR2->VAR11, VAR2->VAR8, VAR4);
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            FUN5(&VAR2->VAR9, VAR2->VAR8[VAR3]);
        }
    }
    VAR2->VAR12--;
    FUN6(VAR2);
}
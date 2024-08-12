static void FUN1(VAR1 *VAR2, uint32_t VAR3, unsigned int VAR4, unsigned int VAR5, unsigned int VAR6)
{
    if (VAR4 != 3)
    {
        FUN2(VAR2);
        return;
    }
    switch (VAR5)
    {
    case 2:
        FUN3(VAR2, VAR3);
        return;
    case 4:
    case 5:
        return;
    case 6:
        VAR2->VAR7 = VAR8;
        return;
    default:
        FUN2(VAR2);
        return;
    }
}
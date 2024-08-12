static int FUN1(struct VAR1 *VAR2)
{
    const int VAR3 = (VAR4 / sizeof(struct VAR5));
    struct VAR5 *VAR6 = (void *)VAR7;
    const int VAR8 = sizeof(VAR7);
    uint64_t VAR9;
    long VAR10;
    int VAR11;
    VAR9 = VAR2->VAR12.VAR9;
    VAR10 = VAR2->VAR13;
    FUN2("", VAR9);
    FUN2("", VAR10);
    do
    {
        memset(VAR6, VAR14, VAR8);
        if (FUN3(VAR9, (VAR15 *)VAR6))
        {
            FUN2("", VAR9);
            goto VAR16;
        }
        for (VAR11 = 0;; VAR11++)
        {
            VAR17 *VAR18 = (void *)&VAR6[VAR11];
            VAR9 = VAR6[VAR11].VAR9;
            if (!VAR9)
            {
                break;
            }
            if (VAR11 == (VAR3 - 1))
            {
                break;
            }
            if (VAR6[VAR11].VAR19 == 0 && FUN4(&VAR6[VAR11 + 1], sizeof(struct VAR5)))
            {
                break;
            }
            VAR10 = FUN5(VAR18[0], VAR18[1], 0, (void *)VAR10);
            if (VAR10 == -1)
            {
                goto VAR16;
            }
        }
    } while (VAR9);
    return 0;
VAR16:
    FUN6("");
    return -1;
}
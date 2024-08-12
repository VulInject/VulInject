static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    if (VAR2 == 0xf00)
    {
        if (VAR3 == 1 || VAR3 == 2)
        {
            FUN2(VAR7);
        }
        else if (VAR3 == 3)
        {
            FUN3(VAR8);
        }
    }
    if (VAR2 / 4 >= VAR9)
    {
        FUN4(VAR10, "" VAR11 "", VAR2);
        return;
    }
    VAR6[VAR2 / 4] = VAR3;
}
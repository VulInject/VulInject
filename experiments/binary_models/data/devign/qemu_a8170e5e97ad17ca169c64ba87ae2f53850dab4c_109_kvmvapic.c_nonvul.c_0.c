static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR4);
    hwaddr VAR6;
    static const uint8_t VAR7 = 1;
    if (VAR5 < 0)
    {
        return -1;
    }
    VAR6 = VAR2->VAR6 + (((VAR8)VAR5) << VAR9);
    FUN3(VAR6 + FUN4(VAR10, VAR7), (void *)&VAR7, sizeof(VAR7), 1);
    FUN5(VAR4->VAR11, VAR6);
    VAR2->VAR12 = VAR13;
    return 0;
}
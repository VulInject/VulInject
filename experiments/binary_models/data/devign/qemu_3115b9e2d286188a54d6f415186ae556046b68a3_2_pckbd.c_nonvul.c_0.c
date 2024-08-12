static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    FUN2("", VAR3);
    VAR2->VAR4 = VAR3;
    FUN3(VAR2->VAR5, (VAR3 >> 1) & 1);
    if (!(VAR3 & 1))
    {
        FUN4();
    }
}
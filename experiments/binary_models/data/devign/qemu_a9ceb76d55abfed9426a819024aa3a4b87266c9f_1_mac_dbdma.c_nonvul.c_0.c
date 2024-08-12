static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, uint16_t VAR5, int VAR6)
{
    FUN2("");
    FUN2("", VAR4, VAR3);
    if (!VAR4 || VAR3 > VAR7)
    {
        FUN3(VAR2);
        return;
    }
    VAR2->VAR8.VAR4 = VAR4;
    VAR2->VAR8.VAR9 = VAR5;
    VAR2->VAR8.VAR6 = VAR6;
    VAR2->VAR8.VAR10 = VAR11;
    VAR2->VAR8.VAR12 = 1;
    VAR2->VAR13 = 1;
    if (VAR2->VAR14)
    {
        VAR2->FUN4(&VAR2->VAR8);
    }
}
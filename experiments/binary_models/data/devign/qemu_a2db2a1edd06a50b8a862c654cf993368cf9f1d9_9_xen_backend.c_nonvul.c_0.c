static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    evtchn_port_t VAR4;
    VAR4 = FUN2(VAR3->VAR5);
    if (VAR4 != VAR3->VAR6)
    {
        FUN3(VAR3, 0, "", VAR4, VAR3->VAR6);
        return;
    }
    FUN4(VAR3->VAR5, VAR4);
    if (VAR3->VAR7->VAR8)
    {
        VAR3->VAR7->FUN5(VAR3);
    }
}
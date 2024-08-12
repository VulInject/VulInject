static void FUN1(ram_addr_t VAR1)
{
    VAR2 *VAR3;
    FUN2(VAR3, &VAR4, VAR5)
    {
        if (VAR3->VAR1 == VAR1)
        {
            return;
        }
    }
    VAR3 = FUN3(sizeof(VAR2));
    VAR3->VAR1 = VAR1;
    FUN4(&VAR4, VAR3, VAR5);
}
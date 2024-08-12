static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    if (VAR2 < 0x10)
    {
        if (!FUN2(VAR6) && VAR4 == 1)
        {
            FUN3(VAR6, VAR2, VAR3);
        }
        else if (!FUN2(VAR6) && (VAR2 & 1) == 0 && VAR4 == 2)
        {
            FUN3(VAR6, VAR2, VAR3 & 0xff);
            FUN3(VAR6, VAR2 + 1, VAR3 >> 8);
        }
        else if (FUN2(VAR6) && (VAR2 & 3) == 0 && VAR4 == 4)
        {
            FUN3(VAR6, VAR2, VAR3 & 0xff);
            FUN3(VAR6, VAR2 + 1, (VAR3 >> 8) & 0xff);
            FUN3(VAR6, VAR2 + 2, (VAR3 >> 16) & 0xff);
            FUN3(VAR6, VAR2 + 3, VAR3 >> 24);
        }
    }
    else
    {
        if (VAR4 == 2)
        {
            FUN4(VAR6, VAR2, VAR3);
        }
        else if (VAR4 == 4)
        {
            FUN5(VAR6, VAR2, VAR3);
        }
    }
}
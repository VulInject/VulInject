static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4, VAR5, VAR6;
    switch (VAR3->VAR7->VAR8)
    {
    case 0:
        return;
    case VAR8:
        VAR6 = FUN2(FUN3((VAR9 >> 16) & 0xff), FUN3((VAR9 >> 8) & 0xff), FUN3(VAR9 & 0xff));
        for (VAR4 = 0; VAR4 < 128; VAR4++)
            for (VAR5 = 0; VAR5 < 64; VAR5++)
                if (VAR3->VAR10[VAR4 + (VAR5 / 8) * 128] & (1 << (VAR5 % 8)))
                    FUN4(VAR11, VAR8)(VAR3, VAR4, VAR5, VAR6);
                else
                    FUN4(VAR11, VAR8)(VAR3, VAR4, VAR5, 0);
        break;
        FUN5(8, VAR12)
        FUN5(16, VAR13) FUN5(32, (VAR3->VAR7->VAR14 ? VAR15 : VAR16)) default : FUN6(VAR17, "", VAR3->VAR7->VAR8);
    }
    FUN7(VAR3->VAR7, 0, 0, 128 * 3, 64 * 3);
}
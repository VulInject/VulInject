static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3->VAR5);
    VAR6 *VAR7 = &VAR3->VAR5->VAR7;
    VAR8 *VAR9 = VAR3->VAR10;
    hwaddr VAR11 = 64 * 1024 * 1024;
    hwaddr VAR12;
    FUN3(VAR5);
    FUN4(&VAR9->VAR13, VAR7->VAR14[VAR15]);
    VAR7->VAR16 = FUN5(&VAR9->VAR17) & (VAR11 - 1);
    VAR7->VAR18[3] = FUN5(&VAR9->VAR19);
    VAR7->VAR18[4] = 0;
    VAR7->VAR18[5] = 0;
    VAR7->VAR18[6] = 0;
    VAR7->VAR18[7] = VAR11;
    VAR7->VAR18[8] = 0;
    VAR7->VAR18[9] = 0;
    VAR12 = FUN5(&VAR9->VAR17) & ~(VAR11 - 1);
    FUN6(VAR7, 0, VAR12, VAR11);
    VAR5->VAR20 = 0;
    VAR5->VAR21 = -1;
    VAR5->VAR22 = false;
    FUN7(VAR5);
}
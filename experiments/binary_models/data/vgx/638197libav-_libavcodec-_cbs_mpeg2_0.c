FUN1(FUN2(VAR1, VAR2, VAR3, #VAR4, \
VAR5, 0, (1 << VAR3) - 1)); \
} while (0)

FUN3(VAR3, VAR4, VAR6->VAR4)

FUN1(FUN2(VAR1, VAR2, 1, "", 1, 1, 1)); \
} while (0)





static void FUN4(void *VAR7, VAR8 *VAR9)
{
VAR10 *VAR11 = (VAR10*)VAR9;
FUN5(&VAR11->VAR12);
FUN6(&VAR9);
}
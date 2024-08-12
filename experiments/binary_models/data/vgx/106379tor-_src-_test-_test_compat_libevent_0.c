static void
FUN1(void *VAR1)
{
(void)VAR1;
VAR2 *VAR3 = NULL, *VAR4 = NULL;
VAR5 *VAR6 = NULL;


VAR4 = FUN2(VAR7, &VAR3);
VAR3 = FUN2(VAR7, &VAR4);

int VAR8 = 0;
struct timeval VAR9 = { 0, 10 * 1000 };
VAR6 = FUN3(FUN4(), &VAR9,
VAR10, &VAR8);

FUN5(VAR3);
int VAR11;
do {
VAR11 = FUN6(FUN4(), 0);
if (VAR11 == -1)
break;
} while (VAR8 < 5);

FUN7(VAR12, VAR13, 2);

VAR14:
FUN8(VAR3);
FUN8(VAR4);
FUN9(VAR6);
}
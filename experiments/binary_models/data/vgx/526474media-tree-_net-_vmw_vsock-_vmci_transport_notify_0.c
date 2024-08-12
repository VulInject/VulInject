static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

FUN3(VAR4, VAR5) = VAR6;
FUN3(VAR4, VAR7) = VAR6;
FUN3(VAR4, VAR8) = false;
FUN3(VAR4, VAR9) = false;
FUN3(VAR4, VAR10) = false;
FUN3(VAR4, VAR11) = false;
FUN3(VAR4, VAR12) = false;
FUN3(VAR4, VAR13) = 0;
FUN3(VAR4, VAR14) = 0;

memset(&FUN3(VAR4, VAR15), 0,
sizeof(FUN3(VAR4, VAR15)));
memset(&FUN3(VAR4, VAR16), 0,
sizeof(FUN3(VAR4, VAR16)));
}
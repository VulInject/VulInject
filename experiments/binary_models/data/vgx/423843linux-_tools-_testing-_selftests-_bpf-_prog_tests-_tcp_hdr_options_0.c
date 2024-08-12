static void FUN1(void)
{
struct VAR1 *VAR2;
struct sk_fds VAR3;

VAR4 = FUN2(VAR5->VAR6.VAR7);
VAR8 = FUN2(VAR5->VAR6.VAR9);

VAR10.VAR11 = VAR12;
VAR10.rand = 0xfa;

VAR13.VAR11 = VAR12;
VAR13.rand = 0xce;

FUN3();

if (FUN4("", ""))
return;

VAR2 = FUN5(VAR5->VAR14.VAR15, VAR16);
if (!FUN6(VAR2, ""))
return;

if (FUN7(&VAR3, false)) {
FUN8(VAR2);
return;
}

FUN9(&VAR3);
FUN8(VAR2);
}
void FUN1(struct VAR1 *VAR2, u8 VAR3)
{
u32 VAR4;
struct VAR5	*VAR6;

if (FUN2(VAR2) || !VAR2) {
FUN3("", VAR7);
return;
}

VAR6 = FUN4(VAR2);
if (!VAR6) {
FUN5(VAR2, "", VAR7);
return;
}

if (VAR6->VAR8 != VAR9) {
FUN5(VAR2, "", VAR7);
return;
}

VAR4 = FUN6(VAR6->VAR10);
VAR4 &= ~(VAR11 <<
VAR12);
VAR4 |= (VAR3 << VAR12);
FUN7(VAR4, VAR6->VAR10);
}
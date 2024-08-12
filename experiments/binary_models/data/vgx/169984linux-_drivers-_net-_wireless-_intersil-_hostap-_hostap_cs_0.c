static void FUN1(VAR1 *VAR2)
{
int VAR3;
u8 VAR4;
struct VAR5 *VAR6 = VAR2->VAR6;

if (!FUN2(VAR2))
return;

VAR3 = FUN3(VAR6->VAR7, VAR8, &VAR4);
if (VAR3 != 0) {
FUN4(VAR9 "",
VAR3);
return;
}
FUN4(VAR9 "",
VAR4);

VAR4 |= VAR10;
VAR3 = FUN5(VAR6->VAR7, VAR8, VAR4);
if (VAR3 != 0) {
FUN4(VAR9 "",
VAR3);
return;
}

FUN6(VAR6->VAR11 ? 5 : 2);

VAR4 &= ~VAR10;
if (VAR6->VAR11)
VAR4 |= VAR12;
VAR3 = FUN5(VAR6->VAR7, VAR8, VAR4);
if (VAR3 != 0) {
FUN4(VAR9 "",
VAR3);
return;
}

FUN6(VAR6->VAR11 ? 5 : 2);

if (VAR6->VAR11)
FUN7(VAR2);
}
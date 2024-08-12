static void FUN1(VAR1 *VAR2,
VAR3 *VAR4)
{
VAR5 *VAR6;
uint32_t VAR7 = FUN2(VAR2);

assert(VAR4);

if (VAR4 == VAR2->VAR8) {

return;
}

if (VAR2->VAR8) {
VAR6 = FUN3(VAR2->VAR8);
if (VAR6->VAR9) {
VAR6->FUN4(VAR2->VAR8);
}
}

VAR6 = FUN3(VAR4);
if (VAR6->VAR10) {
VAR6->FUN5(VAR4, VAR7, &VAR11);
}

VAR2->VAR8 = VAR4;


FUN6();
}
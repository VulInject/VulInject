void FUN1(void)
{
struct VAR1 *VAR2;
struct VAR3 *VAR4;

VAR2 = FUN2(VAR5);
if (!VAR2) {
FUN3("");
return;
}

VAR4 = VAR2->VAR6;
FUN3("");

while (VAR2) {
VAR4 = VAR2->VAR6;
FUN3("", FUN4(VAR4));

VAR2 = VAR2->VAR7;
}
}
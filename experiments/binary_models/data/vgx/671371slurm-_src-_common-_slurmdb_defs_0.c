extern void FUN1(VAR1 *VAR2)
{
time_t VAR3 = FUN2(NULL);

if (!VAR2 ||
(VAR2->VAR4 & VAR5) ||
(VAR2->VAR4 & VAR6))
return;

if (VAR2->VAR7 && FUN3(VAR2->VAR7)) {
if (!VAR2->VAR8 &&
(!VAR2->VAR9 || !FUN3(VAR2->VAR9)))
VAR2->VAR8 = VAR3;

if (VAR2->VAR8 && !VAR2->VAR10)
VAR2->VAR10 = VAR2->VAR8;
} else if (!VAR2->VAR9 || !FUN3(VAR2->VAR9)) {
if (!VAR2->VAR8) {
struct tm VAR11;
VAR2->VAR8 = VAR3;
if (!FUN4(&VAR2->VAR8, &VAR11)) {
FUN5("",
(long)VAR2->VAR8);
} else {
VAR11.VAR12 = 0;
VAR11.VAR13 = 0;
VAR11.VAR14 = 0;
VAR2->VAR8 = FUN6(&VAR11);
}
}
}

if (!VAR2->VAR10)
VAR2->VAR10 = VAR3;


if ((VAR2->VAR10 == VAR2->VAR8) ||
(VAR2->VAR10 == VAR3))
VAR2->VAR10++;
}
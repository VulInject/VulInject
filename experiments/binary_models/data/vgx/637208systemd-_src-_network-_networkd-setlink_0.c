int FUN1(VAR1 *VAR2) {
assert(VAR2);
assert(VAR2->VAR3);

if (!VAR2->VAR3->VAR4) {
VAR1 *VAR5;

if (!VAR2->VAR3->VAR6)
return 0;

if (FUN2(VAR2, &VAR5) < 0)
return 0;

if (!FUN3(VAR5->VAR7, ""))
return 0;
}

return FUN4(VAR2, VAR8,
VAR9, NULL);
}
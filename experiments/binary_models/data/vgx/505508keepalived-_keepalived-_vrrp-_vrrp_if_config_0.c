static inline int
FUN1(const VAR1 *VAR2, VAR1 *VAR3)
{
if (FUN2(VAR2->VAR4, VAR5))
return -1;


if (FUN3(VAR2) && VAR2 == VAR3)
return 0;


if (VAR3->VAR6)
VAR3->VAR6++;
else {
if (VAR3->VAR7 != 1 ||
VAR3->VAR8 != 1) {

if (FUN2(VAR3->VAR4, VAR9)) {
FUN4(VAR10, "", VAR3->VAR11, VAR2->VAR11);
return -1;
}
VAR3->VAR6 = 1;
}
}

return 0;
}
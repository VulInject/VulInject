int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (VAR2->VAR4 != VAR5)
return 0;

if (!FUN2(VAR2))
return 0;


if (VAR2->VAR6 == FUN3(VAR7) ||
VAR2->VAR6 == FUN3(VAR8)) {
VAR2->VAR6 = FUN3(VAR9);
} else {

return 0;
}


if ((VAR2->VAR10 >> 24) == (FUN3(VAR11) >> 24) &&
VAR2->VAR12 == FUN4(VAR13)) {
VAR2->VAR10 = FUN3(VAR14);
VAR2->VAR12 = FUN4(VAR15);
} else {

return 0;
}

return 1;
}
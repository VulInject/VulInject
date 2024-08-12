static bool FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR4;
const char *VAR5 = VAR2->VAR6;


if (VAR4->VAR7 == VAR8)
return true;


if (VAR4->VAR7 == VAR9)
return true;


if (VAR4->VAR7 == VAR10 && VAR4->VAR11 == 0 &&
strcmp(VAR2->VAR6, "") == 0)
return true;


if (FUN2(VAR2->VAR6))
return true;

if (FUN3(VAR5, "", sizeof("") - 1) == 0) {
VAR5 += sizeof("") - 1;

if (FUN2(VAR5))
return true;


if (strcmp(VAR5, VAR12) == 0 ||
strcmp(VAR5, VAR13) == 0)
return true;
}

return false;
}
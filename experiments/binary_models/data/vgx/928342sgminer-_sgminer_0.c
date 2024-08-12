static bool FUN1(struct VAR1 *VAR1, bool VAR2)
{
struct timeval VAR3;
time_t VAR4;
struct VAR5 *VAR5;
int VAR6;

if (VAR1->VAR7 != VAR7) {
FUN2(VAR8, "");
return true;
}


if (VAR1->VAR9 > VAR10)
VAR4 = VAR1->VAR9;
else
VAR4 = VAR11;

VAR5 = VAR1->VAR5;

if (!VAR2 && VAR5->VAR12) {
bool VAR13;

if (!VAR5->VAR14 || !VAR5->VAR15) {
FUN2(VAR8, "");
return true;
}

VAR13 = true;

FUN3(&VAR5->VAR16);
if (strcmp(VAR1->VAR17, VAR5->VAR18.VAR17))
VAR13 = false;
FUN4(&VAR5->VAR16);

if (!VAR13) {
FUN2(VAR8, "");
return true;
}
}


VAR6 = VAR5->VAR19.VAR20 * 5 + 1;
VAR4 -= VAR6;
if (FUN5(VAR4 < 5))
VAR4 = 5;

FUN6(&VAR3);
if ((VAR3.VAR21 - VAR1->VAR22.VAR21) >= VAR4) {
FUN2(VAR8, "");
return true;
}

if (VAR23 && !VAR2 && VAR5 != FUN7() && !VAR1->VAR24 &&
VAR25 != VAR26 && VAR25 != VAR27) {
FUN2(VAR8, "");
return true;
}

return false;
}
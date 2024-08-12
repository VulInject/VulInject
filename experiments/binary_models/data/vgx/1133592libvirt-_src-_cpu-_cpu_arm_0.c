static int
FUN1(VAR1 *VAR2,
const VAR1 *VAR3,
bool VAR4)
{
FUN2(VAR1) VAR5 = NULL;

if (!VAR4 || VAR2->VAR6 != VAR7)
return 0;

if (!VAR3) {
FUN3(VAR8, "",
FUN4(""));
return -1;
}

if (!(VAR5 = FUN5(VAR2)))
return -1;

VAR5->VAR6 = VAR9;
if (FUN6(VAR5, VAR3, true) < 0)
return -1;

FUN7(VAR2, VAR5, false);
VAR2->VAR6 = VAR9;
VAR2->VAR10 = VAR11;

return 0;
}
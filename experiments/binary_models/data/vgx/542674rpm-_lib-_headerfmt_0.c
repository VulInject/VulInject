static int FUN1(headerSprintfArgs VAR1, sprintfToken VAR2, const char * VAR3)
{
const char *VAR4 = VAR3;
sprintfTag VAR5 = (VAR2->VAR6 == VAR7
? &VAR2->VAR8.VAR9.VAR10 : &VAR2->VAR8.VAR10);

VAR5->VAR11 = NULL;
VAR5->VAR10 = VAR12;

if (!FUN2(VAR4, "")) {
if (FUN3("", VAR4, sizeof("")-1)) {
VAR4 += sizeof("");
}


VAR5->VAR10 = FUN4(VAR4);
if (VAR5->VAR10 == VAR12) return 1;

} else VAR5->VAR10 = -2;


if (VAR5->VAR6 != NULL)
VAR5->VAR11 = FUN5(VAR5->VAR6);

return VAR5->VAR11 ? 0 : 1;
}
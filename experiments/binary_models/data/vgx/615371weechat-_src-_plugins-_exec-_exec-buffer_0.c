FUN1 (const char *VAR1, int VAR2, int VAR3,
int VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2 (VAR8, VAR1);
if (VAR6)
{
VAR7 = FUN3 (VAR6, "");
if (((VAR7 == 0) && VAR2)
|| ((VAR7 == 1) && !VAR2))
{

FUN4 (VAR6,
"",
(VAR2) ? "" : "");
}
goto VAR9;
}

VAR6 = FUN5 (VAR1,
&VAR10, NULL, NULL,
&VAR11, NULL, NULL);


if (!VAR6)
return NULL;

if (VAR2)
FUN4 (VAR6, "", "");
FUN4 (VAR6, "", "");
FUN4 (VAR6, "", FUN6(""));
FUN4 (VAR6, "", "");
FUN4 (VAR6, "", "");
FUN4 (VAR6, "", "");
FUN4 (VAR6, "", "");

VAR9:
if (VAR3)
FUN7 (VAR6);
if (VAR4)
FUN4 (VAR6, "", "");

return VAR6;
}
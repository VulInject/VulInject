static VAR1
FUN1(PsqlScanState VAR2, bool VAR3,
PQExpBuffer VAR4, PQExpBuffer VAR5)
{
backslashResult VAR6 = VAR7;

if (VAR3)
{
if (!VAR4)
{
FUN2("");
VAR6 = VAR8;
}
else
{
char	   *VAR9;
char	   *VAR10 = NULL;
int			VAR11 = -1;

VAR9 = FUN3(VAR2,
VAR12, NULL, true);
if (VAR9)
{

VAR10 = FUN3(VAR2,
VAR12, NULL, true);
if (VAR10 == NULL)
{

if (VAR9[0] &&
strspn(VAR9, "") == strlen(VAR9))
{

VAR10 = VAR9;
VAR9 = NULL;
}
}
}
if (VAR10)
{
VAR11 = FUN4(VAR10);
if (VAR11 < 1)
{
FUN2("", VAR10);
VAR6 = VAR8;
}
}
if (VAR6 != VAR8)
{
bool		VAR13;

FUN5(&VAR9);
if (VAR9)
{
FUN6(VAR9);

VAR13 = true;
}
else
{

VAR13 = FUN7(VAR4,
VAR5);
}

if (FUN8(VAR9, VAR4, VAR11, VAR13, NULL))
VAR6 = VAR14;
else
VAR6 = VAR8;
}
free(VAR9);
free(VAR10);
}
}
else
FUN9(VAR2);

return VAR6;
}
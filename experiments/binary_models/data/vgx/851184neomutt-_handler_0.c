static bool FUN1(const char *VAR1)
{
const char *VAR2 = FUN2("");
if (!VAR2)
return false;

char *VAR3 = NULL;
char VAR4[1024] = { 0 };
char *VAR5 = NULL;

if (FUN3(VAR2, ""))
return true;

FUN4(VAR4, VAR2, sizeof(VAR4));
VAR3 = VAR4;

while ((VAR3 = strtok(VAR3, "")))
{
VAR5 = strrchr(VAR3, '');
if (VAR5)
{
if (VAR5[1] == '')
{
if (FUN5(VAR1, VAR3, VAR5 - VAR3))
return true;
}
else
{
if (FUN6(VAR1, VAR3))
return true;
}
}
else
{
const size_t VAR6 = FUN7(VAR1, VAR3);
if ((VAR6 != 0) && (VAR1[VAR6] == ''))
return true;
}

VAR3 = NULL;
}

return false;
}
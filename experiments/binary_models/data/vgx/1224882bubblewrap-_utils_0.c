FUN1 (const char *VAR1,
mode_t      VAR2)
{
struct stat VAR3;


if (FUN2 (VAR1, &VAR3) == 0)
{
if (!FUN3 (VAR3.VAR4))
{
VAR5 = VAR6;
return -1;
}

return 0;
}

if (mkdir (VAR1, VAR2) == -1 && VAR5 != VAR7)
return -1;

return 0;
}
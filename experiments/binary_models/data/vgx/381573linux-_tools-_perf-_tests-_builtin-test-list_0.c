static bool FUN1(const char *VAR1)
{
const char *VAR2;

VAR2 = strrchr(VAR1, '');
if (!VAR2)
return false;
if (!strcmp(VAR2, "")) { 
if (FUN2(VAR1, VAR3 | VAR4) == 0) 
return true;
}
return false;
}
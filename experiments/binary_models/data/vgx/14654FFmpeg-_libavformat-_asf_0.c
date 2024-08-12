int FUN1(VAR1 *VAR2, const char *VAR3,
int VAR4)
{
if (!strcmp(VAR3, "")) 
return FUN2(VAR2, VAR4);
else if (!strcmp(VAR3, "")) 
return FUN3(VAR2, VAR4);

return 1;
}
int
FUN1(void)
{

if (VAR1) {
return VAR2;
}


VAR3 = LoadLibraryW (VAR4);
if (VAR3 == NULL)
return VAR5;


VAR1 = (VAR6) FUN2(VAR3, "");
if (VAR1 == NULL)
return VAR5;

return VAR2;
}
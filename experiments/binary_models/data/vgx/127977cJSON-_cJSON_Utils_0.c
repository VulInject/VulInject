static VAR1 *FUN1(VAR1 *VAR2, const unsigned char *VAR3, const cJSON_bool VAR4)
{
unsigned char *VAR5 = NULL;
unsigned char *VAR6 = NULL;
VAR1 *VAR7 = NULL;
VAR1 *VAR8 = NULL;


VAR5 = FUN2(VAR3);
if (VAR5 == NULL) {
goto VAR9;
}

VAR6 = (unsigned char*)strrchr((char*)VAR5, ''); 
if (VAR6 == NULL)
{
goto VAR9;
}

VAR6[0] = '';
VAR6++;

VAR7 = FUN3(VAR2, (char*)VAR5, VAR4);
FUN4(VAR6);

if (FUN5(VAR7))
{
size_t VAR10 = 0;
if (!FUN6(VAR6, &VAR10))
{
goto VAR9;
}
VAR8 = FUN7(VAR7, VAR10);
}
else if (FUN8(VAR7))
{
VAR8 = FUN9(VAR7, (char*)VAR6);
}
else
{

goto VAR9;
}

VAR9:
if (VAR5 != NULL)
{
FUN10(VAR5);
}

return VAR8;
}
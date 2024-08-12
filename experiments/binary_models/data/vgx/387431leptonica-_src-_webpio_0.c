VAR1
FUN1(const char *VAR2,
VAR3    *VAR4,
VAR3    *VAR5,
VAR3    *VAR6)
{
l_uint8  VAR7[100];  
l_int32  VAR8, VAR9;
size_t   VAR10;
VAR11    *VAR12;

if (!VAR4 || !VAR5 || !VAR6)
return FUN2("", VAR13, 1);
*VAR4 = *VAR5 = *VAR6 = 0;
if (!VAR2)
return FUN2("", VAR13, 1);


if ((VAR10 = FUN3(VAR2)) == 0)
return FUN2("", VAR13, 1);
if (VAR10 < 100)
FUN4("", VAR13);
VAR8 = FUN5(VAR10, 100);
if ((VAR12 = FUN6(VAR2)) == NULL)
return FUN2("", VAR13, 1);
VAR9 = fread(VAR7, 1, VAR8, VAR12);
fclose(VAR12);
if (VAR9 != VAR8)
return FUN2("", VAR13, 1);

return FUN7(VAR7, VAR8, VAR4, VAR5, VAR6);
}
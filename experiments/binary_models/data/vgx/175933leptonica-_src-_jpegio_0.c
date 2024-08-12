VAR1 *
FUN1(const char  *VAR2,
l_int32      VAR3,
l_int32      VAR4,
VAR5     *VAR6,
l_int32      VAR7)
{
l_int32   VAR8;
VAR9  *VAR10;
VAR11     *VAR12;
VAR1      *VAR13;

if (VAR6) *VAR6 = 0;
if (!VAR2)
return (VAR1 *)FUN2("", VAR14, NULL);
if (VAR3 != 0 && VAR3 != 1)
VAR3 = 0;  
if (VAR4 != 1 && VAR4 != 2 && VAR4 != 4 && VAR4 != 8)
return (VAR1 *)FUN2("", VAR14, NULL);

if ((VAR12 = FUN3(VAR2)) == NULL)
return (VAR1 *)FUN2("", VAR14, NULL);
VAR13 = FUN4(VAR12, VAR3, VAR4, VAR6, VAR7);
if (VAR13) {
VAR8 = FUN5(VAR12, &VAR10);
if (!VAR8 && VAR10)
FUN6(VAR13, (char *)VAR10);
FUN7(VAR10);
}
fclose(VAR12);

if (!VAR13)
return (VAR1 *)FUN2("", VAR14, NULL);
return VAR13;
}
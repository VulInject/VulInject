FUN1 (const_string VAR1,  const_string VAR2)
{
intptr_t VAR3, VAR4;
VAR5 *VAR6, *VAR7;
BY_HANDLE_FILE_INFORMATION VAR8, VAR9;

VAR6 = fopen(VAR1, "");
if(!VAR6) return false;
VAR7 = fopen(VAR2, "");
if(!VAR7) {
fclose(VAR6);
return false;
}

VAR3 = FUN2(FUN3(VAR6));
VAR4 = FUN2(FUN3(VAR7));

if (!FUN4((VAR10)VAR3, &VAR8)) {
fclose(VAR6);
fclose(VAR7);
return false;
}

if (!FUN4((VAR10)VAR4, &VAR9)) {
fclose(VAR6);
fclose(VAR7);
return false;
}

fclose(VAR6);
fclose(VAR7);

if (VAR8.VAR11 == VAR9.VAR11 &&
VAR8.VAR12 == VAR9.VAR12 &&
VAR8.VAR13 == VAR9.VAR13)
return true;
else
return false;
struct stat VAR14, VAR15;

int VAR16 = FUN5 (VAR1, &VAR14);
int VAR17 = FUN5 (VAR2, &VAR15);

return VAR16 == 0 && VAR17 == 0 ? FUN6 (VAR14, VAR15) : false;
}
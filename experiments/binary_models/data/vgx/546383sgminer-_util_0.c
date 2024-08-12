static VAR1 FUN1(void *VAR2, size_t VAR3, size_t VAR4, void *VAR5)
{
struct VAR6 *VAR7 = (struct VAR6 *)VAR5;
size_t VAR8, VAR9, VAR10 = VAR3 * VAR4;
char *VAR11, *VAR12 = NULL, *VAR13 = NULL;
void *VAR14;

VAR12 = (char *)calloc(1, VAR10);
VAR13 = (char *)calloc(1, VAR10);
if (!VAR13 || !VAR12)
goto VAR15;

VAR14 = memchr(VAR2, '', VAR10);
if (!VAR14 || (VAR14 == VAR2)) 
goto VAR15;
VAR9 = (VAR16*)VAR14 - (VAR16*)VAR2;
if ((VAR9 + 1) == VAR10) 
goto VAR15;
memcpy(VAR13, VAR2, VAR9);   
VAR13[VAR9] = 0;

VAR11 = (char*)VAR2 + VAR9 + 1;  
VAR8 = VAR10 - VAR9 - 1;
while ((VAR8 > 0) && (FUN2(*VAR11))) {
VAR8--;
VAR11++;
}

memcpy(VAR12, VAR11, VAR8); 
VAR12[VAR8] = 0;
while ((*VAR12) && (FUN2(VAR12[strlen(VAR12) - 1])))
VAR12[strlen(VAR12) - 1] = 0;

if (!*VAR12)      
goto VAR15;

if (VAR17)
FUN3(VAR18, "", VAR13, VAR12);

if (!FUN4("", VAR13)) {
VAR7->VAR19 = true;
if (!FUN5("", VAR12, 1))
FUN3(VAR18, "");
else {
VAR7->VAR20 = true;


if (strlen(VAR12) > 7 && !FUN5("", VAR12, 7)) {
sscanf(VAR12 + 7, "", &VAR7->VAR21);
VAR7->VAR22 = true;
} else
VAR7->VAR21 = VAR23;
FUN3(VAR18, "", VAR7->VAR21);
}
}

if (!FUN4("", VAR13)) {
VAR7->VAR24 = VAR12;  
VAR12 = NULL;
}

if (!FUN4("", VAR13)) {
VAR7->VAR25 = VAR12; 
VAR12 = NULL;
}

if (!FUN4("", VAR13)) {
VAR7->VAR26 = VAR12;
VAR12 = NULL;
}

VAR15:
free(VAR13);
free(VAR12);
return VAR10;
}
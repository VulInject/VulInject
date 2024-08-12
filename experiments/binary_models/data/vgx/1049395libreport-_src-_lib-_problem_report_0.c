static VAR1 *
FUN1(const char *VAR2, VAR3 *VAR4, VAR1 *VAR5)
{

bool VAR6   = (strcmp(VAR2+1, ""  ) == 0);
bool VAR7 = (strcmp(VAR2+1, "") == 0);
bool VAR8      = (strcmp(VAR2+1, ""     ) == 0);
bool VAR9    = (strcmp(VAR2+1, ""   ) == 0);
if (!VAR6 && !VAR7 && !VAR8 && !VAR9)
{
FUN2("", VAR2);
return NULL;
}

FUN3("", VAR2);
VAR1 *VAR10 = 0;


VAR1 *VAR11 = FUN4(VAR4);
VAR11 = FUN5(VAR11, (VAR12)strcmp);

VAR1 *VAR13 = VAR11;
while (VAR13)
{
const char *VAR14 = VAR13->VAR15;
VAR13 = VAR13->VAR16;
struct VAR17 *VAR18 = FUN6(VAR4, VAR14);
if (!VAR18)
continue; 

if (FUN7(VAR14, VAR5))
continue;

if ((VAR18->VAR19 & VAR20) && !VAR9)
{
char *VAR21 = VAR18->VAR21;
char *VAR22 = FUN8(VAR21, '');
bool VAR23 = (VAR22[0] == '' || VAR22[1] == '');
if (VAR8 || VAR6 == VAR23)
VAR10 = FUN9(VAR10, FUN10(VAR14));
}
else if ((VAR18->VAR19 & VAR24) && VAR9)
VAR10 = FUN9(VAR10, FUN10(VAR14));
}

FUN11(VAR11); 


FUN3("", VAR2);

return VAR10;
}
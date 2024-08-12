static unsigned char
FUN1(VAR1 *VAR2, int VAR3)
{
VAR4 *VAR5 = FUN2("");
struct VAR6 *VAR7;
const char* VAR8;
const VAR9 *VAR10 = FUN3(VAR2);
int VAR11;
int VAR12 = VAR13;


for (VAR8 = VAR10->VAR14 - 1;
!FUN4((unsigned char)*VAR8) && VAR8 > VAR10->VAR15; VAR8--)
continue;
VAR11 = VAR10->VAR14 - ++VAR8;

for (VAR7 = FUN5(VAR5); VAR7 != NULL; VAR7 = FUN5(VAR5)) {
if (VAR11 > strlen(VAR7->VAR16))
continue;
if (FUN6(VAR7->VAR16, VAR8, VAR11) == 0) {
if (FUN7(VAR2, &VAR7->VAR16[VAR11]) == -1)
VAR12 = VAR13;
else
VAR12 = VAR17;
break;
}
}

FUN8(VAR5);
return VAR12;
}
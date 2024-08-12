}
FUN1(VAR1);


int FUN2(struct VAR2 *VAR3, u32 VAR4,
const struct VAR5 *VAR6,
const struct VAR7 **VAR8,
const struct VAR7 **VAR9)
{
const struct VAR5 *VAR10;
int VAR11;

FUN3(VAR8 == NULL);
FUN3(VAR9 == NULL);


VAR10 = VAR6;
while (VAR10 && VAR10->VAR8) {
if (VAR10->VAR12 != VAR4)
goto VAR13;

if (*VAR8 == NULL) {
VAR11 = FUN4(VAR8, VAR10->VAR8, VAR3);
if (VAR11)
goto VAR13;


if (VAR10->VAR14 == NULL)
return 0;
}

if (*VAR9 == NULL) {
VAR11 = FUN4(VAR9, VAR10->VAR14, VAR3);
if (VAR11) {

FUN5(*VAR8);
*VAR8 = NULL;
}
}

if (*VAR8 && *VAR9)
return 0;

VAR13:
VAR10++;
}


FUN5(*VAR8);
*VAR8 = NULL;
FUN5(*VAR9);
*VAR9 = NULL;

return -VAR15;
}
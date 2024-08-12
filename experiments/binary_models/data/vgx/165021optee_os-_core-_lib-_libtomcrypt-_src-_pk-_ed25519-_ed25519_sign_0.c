static int FUN1(const unsigned char  *VAR1, unsigned long  VAR2,
unsigned char  *VAR3, unsigned long *VAR4,
const unsigned char  *VAR5, unsigned long  VAR6,
const VAR7 *VAR8)
{
unsigned char *VAR9;
unsigned long long VAR10;
int VAR11;

FUN2(VAR1         != NULL);
FUN2(VAR3         != NULL);
FUN2(VAR4      != NULL);
FUN2(VAR8 != NULL);

if (VAR8->VAR12 != VAR13) return VAR14;
if (VAR8->VAR15 != VAR16) return VAR14;

if (*VAR4 < 64uL) {
*VAR4 = 64uL;
return VAR17;
}

VAR10 = VAR2 + 64;
VAR9 = FUN3(VAR10);
if (VAR9 == NULL) return VAR18;

VAR11 = FUN4(VAR9, &VAR10,
VAR1, VAR2,
VAR8->VAR19, VAR8->VAR20,
VAR5, VAR6);

FUN5(VAR3, VAR9, 64uL);
*VAR4 = 64uL;

FUN6(VAR9, VAR10);
FUN7(VAR9);

return VAR11;
}
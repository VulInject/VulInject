static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4,
int *VAR5)
{
sc_apdu_t VAR6;
int VAR7;
int VAR8 = -1;


VAR4->VAR9 |= VAR10;
FUN2(&VAR4->VAR11, 0);
FUN2(&VAR4->VAR12, 1);

if (VAR4->VAR13 == VAR14) {
VAR7 = FUN3(VAR2, &VAR6, VAR4);
if (VAR7 < 0)
return VAR7;
VAR4->VAR6 = &VAR6;
} else if (VAR4->VAR13 == VAR15 || VAR4->VAR13 == VAR16) {
if (VAR4->VAR17 != VAR18)
return VAR19;
VAR8 = VAR2->VAR20;
if (!FUN4(VAR2))
VAR2->VAR20 = 0xF0;
}


VAR7 = VAR21->FUN5(VAR2, VAR4, NULL);
if (VAR8 != -1)
VAR2->VAR20 = VAR8;
VAR4->VAR6 = NULL;
return VAR7;
}
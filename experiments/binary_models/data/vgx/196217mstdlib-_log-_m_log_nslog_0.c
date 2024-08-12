VAR1 FUN1(VAR2 *VAR3, size_t VAR4, VAR5 **VAR6)
{
VAR7 *VAR8;
VAR5   *VAR9;

if (VAR6 != NULL) {
*VAR6 = NULL;
}

if (VAR3 == NULL || VAR4 == 0) {
return VAR10;
}

if (VAR3->VAR11) {
return VAR12;
}


VAR8 = FUN2(VAR4, VAR13, NULL, NULL, NULL, VAR3->VAR14);


VAR9                                   = FUN3(sizeof(*VAR9));
VAR9->VAR15                             = VAR16;
VAR9->VAR17                 = VAR3->VAR17;
VAR9->VAR18                     = VAR8;
VAR9->VAR19                  = VAR20;
VAR9->VAR21                = VAR22;
VAR9->VAR23                 = VAR24;
VAR9->VAR25              = VAR26;
VAR9->VAR27          = VAR28;
VAR9->VAR29 = VAR30;

if (VAR6 != NULL) {
*VAR6 = VAR9;
}


FUN4(VAR8);


FUN5(VAR3->VAR31, VAR32);
FUN6(VAR3->VAR33, VAR9);
FUN7(VAR3->VAR31);

return VAR34;
}
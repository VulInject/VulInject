void FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = &VAR2->VAR5->VAR6;
struct VAR7 *VAR8 = &VAR2->VAR9[0];
struct VAR10 *VAR11;
size_t VAR12, VAR13, VAR14;
VAR15 *VAR16;

FUN2("");

VAR12 = VAR4->VAR17;
VAR14 = (4 - (VAR12 & 3)) & 3;
VAR13 = (5 * 4) + VAR12 + VAR14 + (6 * 4);

VAR11 = FUN3(VAR2->VAR18, &VAR19,
VAR13, (3 + 21 + 21 + 3 + 6) * 4);
if (!VAR11)
return FUN4(VAR2);


VAR16 = VAR11->VAR20;
*VAR16++ = FUN5(VAR21);
*VAR16++ = FUN5(VAR8->VAR22.VAR23);
*VAR16++ = FUN5(VAR8->VAR22.VAR24);
*VAR16++ = FUN5(VAR8->VAR22.VAR25);
*VAR16++ = FUN5(VAR12);
memcpy(VAR16, VAR4->VAR4, VAR12);
VAR16 = (void *) VAR16 + VAR12;
if (VAR14 > 0) {
memset(VAR16, 0, VAR14);
VAR16 = (void *) VAR16 + VAR14;
}
*VAR16++ = FUN5(VAR26 | VAR27);
*VAR16++ = FUN5(VAR2->VAR28.VAR29); 
*VAR16++ = 0; 
*VAR16++ = 0; 
*VAR16++ = FUN5(VAR2->VAR30.VAR31 & VAR32); 
*VAR16++ = 0; 

FUN6(VAR11, &VAR8->VAR22, VAR4);
FUN7(VAR2, VAR11, VAR33);
}
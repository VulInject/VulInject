static VAR1
FUN1(struct VAR2 * VAR3, struct VAR4    *VAR5,
struct VAR6 *VAR7)
{
__be32	VAR8;
u32	VAR9 = FUN2(VAR3);

FUN3("",
FUN4(&VAR5->VAR10));

VAR7->VAR11  = VAR9;
VAR7->VAR12 = VAR9;
VAR7->VAR13 = VAR14;
VAR7->VAR15  = VAR9;
VAR7->VAR16 = VAR9;
VAR7->VAR17 = VAR14;
VAR7->VAR18 = VAR14;
VAR7->VAR19 = ~(VAR20) 0;
VAR7->VAR21 = VAR22;

VAR8 = FUN5(VAR3, &VAR5->VAR10, 0,
VAR23 | VAR24);


if (VAR8 == 0) {
struct VAR25 *VAR26 = VAR5->VAR10.VAR27->VAR28;


if (VAR26->VAR29 == VAR30) {
VAR7->VAR21 = VAR31;
}
VAR7->VAR19 = VAR26->VAR32;
}

FUN6(&VAR5->VAR10);
FUN7(VAR8);
}
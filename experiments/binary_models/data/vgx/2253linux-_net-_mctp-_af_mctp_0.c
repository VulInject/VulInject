static int FUN1(struct socket *VAR1, struct VAR2 *VAR3, size_t VAR4,
int VAR5)
{
FUN2(struct VAR6 *, VAR7, VAR3->VAR8);
struct VAR1 *VAR9 = VAR1->VAR9;
struct VAR10 *VAR11 = FUN3(VAR9, struct VAR10, VAR9);
struct VAR12 *VAR13;
size_t VAR14;
u8 VAR15;
int VAR16;

if (VAR5 & ~(VAR17 | VAR18 | VAR19))
return -VAR20;

VAR13 = FUN4(VAR9, VAR5, &VAR16);
if (!VAR13)
return VAR16;

if (!VAR13->VAR4) {
VAR16 = 0;
goto VAR21;
}


VAR15 = *((VAR22 *)VAR13->VAR23);
VAR14 = VAR13->VAR4 - 1;

if (VAR4 < VAR14)
VAR3->VAR24 |= VAR18;
else
VAR4 = VAR14;

VAR16 = FUN5(VAR13, 1, VAR3, VAR4);
if (VAR16 < 0)
goto VAR21;

FUN6(VAR3, VAR9, VAR13);

if (VAR7) {
struct VAR25 *VAR26 = FUN7(VAR13);

struct VAR27 *VAR28 = FUN8(VAR13);

VAR7 = VAR3->VAR8;
VAR7->VAR29 = VAR30;
VAR7->VAR31 = 0;
VAR7->VAR32 = VAR26->VAR33;
VAR7->VAR34.VAR35 = VAR28->VAR36;
VAR7->VAR37 = VAR15;
VAR7->VAR38 = VAR28->VAR39 &
(VAR40 | VAR41);
VAR7->VAR42 = 0;
VAR3->VAR43 = sizeof(*VAR7);

if (VAR11->VAR44) {
FUN2(struct VAR45 *, VAR46,
VAR3->VAR8);
VAR3->VAR43 = sizeof(*VAR46);
VAR46->VAR47 = VAR26->VAR48;
VAR46->VAR49 = VAR26->VAR50;
memset(VAR46->VAR31, 0x0, sizeof(VAR46->VAR31));
memset(VAR46->VAR51, 0x0, sizeof(VAR46->VAR51));
memcpy(VAR46->VAR51, VAR26->VAR52, VAR26->VAR50);
}
}

VAR16 = VAR4;

if (VAR5 & VAR18)
VAR16 = VAR14;

VAR21:
FUN9(VAR9, VAR13);
return VAR16;
}
int FUN1(unsigned char **VAR1,
VAR2 *VAR3,
struct VAR4 *VAR5,
struct VAR6 *VAR7,
const struct VAR8 *VAR9)
{
int VAR10 = 0;
VAR11 *VAR12;
__u32 VAR13;
unsigned char *VAR14;
int VAR15;

VAR15 = FUN2(VAR5, sizeof(VAR11));
*VAR1 = FUN3(VAR15, VAR16);
if (!*VAR1) {
VAR10 = -VAR17;
FUN4(VAR18, "", VAR10);
*VAR3 = 0;
goto VAR19;
}
VAR12 = (VAR11 *)*VAR1;

memset(*VAR1, 0, sizeof(VAR11));
memcpy(VAR12->VAR20, VAR21, 8);
VAR12->VAR22 = VAR23;


VAR13 = VAR24 |	VAR25 |
VAR26 | VAR27 |
VAR28 | VAR29 |
VAR30 | VAR31 |
VAR32;
if (!VAR7->VAR33 || VAR5->VAR34->VAR35)
VAR13 |= VAR36;

VAR14 = *VAR1 + sizeof(VAR11);
VAR5->VAR34->VAR37 = VAR13;
VAR12->VAR38 = FUN5(VAR13);


FUN6(&VAR12->VAR39,
NULL,
VAR40,
*VAR1, &VAR14,
VAR9);

FUN6(&VAR12->VAR41,
NULL,
VAR42,
*VAR1, &VAR14,
VAR9);

*VAR3 = VAR14 - *VAR1;
VAR19:
return VAR10;
}
static VAR1
FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5, struct VAR6 **VAR7,
int VAR8)
{
__be32		VAR9;
int		VAR10;
struct svc_fh	VAR11;


FUN2(&VAR11,0);
VAR11.VAR12.VAR13 = VAR5->VAR14;
memcpy(&VAR11.VAR12.VAR15, VAR5->VAR16, VAR5->VAR14);
VAR11.VAR17 = NULL;

VAR10 = (VAR8 == VAR18) ? VAR19 : VAR20;
VAR10 |= VAR21;
VAR9 = FUN3(VAR3, &VAR11, VAR22, VAR10, VAR7);
FUN4(&VAR11);

switch (VAR9) {
case VAR23:
return 0;
case VAR24:
return VAR25;
case VAR26:
return VAR27;
default:
return VAR28;
}
}
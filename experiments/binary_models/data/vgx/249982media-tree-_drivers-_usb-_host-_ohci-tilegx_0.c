static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR5 = FUN3(VAR4);
if (VAR5 < 0)
return VAR5;

VAR5 = FUN4(VAR4);
if (VAR5 < 0) {
FUN5(VAR2->VAR6.VAR7, "",
VAR2->VAR6.VAR8);
FUN6(VAR2);
return VAR5;
}

return 0;
}

static const struct hc_driver VAR9 = {
.VAR10		= VAR11,
.VAR12		= "",
.VAR13		= sizeof(struct VAR3),


.VAR14			= VAR15,
.VAR16			= VAR17 | VAR18 | VAR19,


.VAR20			= VAR21,
.VAR22			= VAR23,
.VAR24		= VAR25,


.VAR26		= VAR27,
.VAR28		= VAR29,
.VAR30	= VAR31,


.VAR32	= VAR33,


.VAR34	= VAR35,
.VAR36		= VAR37,
.VAR38	= VAR39,
};
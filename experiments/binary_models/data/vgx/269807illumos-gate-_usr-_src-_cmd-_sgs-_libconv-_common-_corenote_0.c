const char *
FUN1(Half VAR1, int VAR2, int VAR3,
Conv_fmt_flags_t VAR4, VAR5 *VAR6)
{


static const Msg	VAR7[6] = {
VAR8,		VAR9,
VAR10,		VAR11,
VAR12,		VAR13
};
static const conv_ds_msg_t VAR14 = {
FUN2(0, VAR7) };
static const VAR15	*VAR16[] = {
FUN3(VAR14), NULL };



static const Msg	VAR17[6] = {
VAR18,	VAR19,
VAR20,	VAR21,
VAR22,	VAR23
};
static const conv_ds_msg_t VAR24 = {
FUN2(1, VAR17) };
static const VAR15	*VAR25[] = {
FUN3(VAR24), NULL };

static const Msg	VAR26[6] = {
VAR27,	VAR28,
VAR29,	VAR30,
VAR31,	VAR32
};
static const conv_ds_msg_t VAR33 = {
FUN2(1, VAR26) };
static const VAR15	*VAR34[] = {
FUN3(VAR33), NULL };

static const Msg	VAR35[6] = {
VAR36,		VAR37,
VAR38,	VAR39,
VAR40,	VAR41
};
static const conv_ds_msg_t VAR42 = {
FUN2(1, VAR35) };
static const VAR15	*VAR43[] = {
FUN3(VAR42), NULL };




static const Msg	VAR44[8] = {
VAR45,	VAR46,
VAR47,	VAR48,
VAR49,	VAR50,
VAR51,	VAR52
};
static const conv_ds_msg_t VAR53 = {
FUN2(1, VAR44) };
static const VAR15	*VAR54[] = {
FUN3(VAR53), NULL };


static const Msg	VAR55[2] = {
VAR56,	VAR57
};
static const conv_ds_msg_t VAR58 = {
FUN2(1, VAR55) };
static const VAR15	*VAR59[] = {
FUN3(VAR58), NULL };

static const Msg	VAR60[1] = {
VAR57
};
static const conv_ds_msg_t VAR61 = {
FUN2(1, VAR60) };
static const VAR15	*VAR62[] = {
FUN3(VAR61), NULL };



static const Msg	VAR63[8] = {
VAR64,	VAR65,
VAR66,	VAR67,
VAR68,	VAR69,
VAR70,	VAR71
};
static const conv_ds_msg_t VAR72 = {
FUN2(1, VAR63) };
static const VAR15	*VAR73[] = {
FUN3(VAR72), NULL };

static const Msg	VAR74[9] = {
VAR64,	VAR65,
VAR66,	VAR67,
VAR68,	VAR69,
VAR70,	VAR71,
VAR75
};
static const conv_ds_msg_t VAR76 = {
FUN2(1, VAR74) };
static const VAR15	*VAR77[] = {
FUN3(VAR76), NULL };


static const Msg	VAR78[2] = {
VAR79,	VAR80
};
static const conv_ds_msg_t VAR81 = {
FUN2(1, VAR78) };
static const VAR15	*VAR82[] = {
FUN3(VAR81), NULL };


static const Msg	VAR83[3] = {
VAR84,	VAR85,
VAR86
};
static const conv_ds_msg_t VAR87 = {
FUN2(1, VAR83) };
static const VAR15	*VAR88[] = {
FUN3(VAR87), NULL };

enum { VAR89, VAR90, VAR91 } VAR92;



switch (VAR3) {
case VAR93:
return (FUN4(VAR94));
case VAR95:
return (FUN4(VAR96));
case VAR97:
return (FUN4(VAR98));
default:

if (VAR3 <= 0) {
int VAR99 = -VAR3;


if ((VAR3 == 0) && (VAR2 == 0))
return (FUN4(VAR100));

if (VAR99 >= FUN5(VAR7)) {
const char *VAR101;

VAR101 = (VAR4 & VAR102) ?
FUN4(VAR103) :
FUN4(VAR104);

(void) snprintf(VAR6->VAR105,
sizeof (VAR6->VAR105), VAR101, VAR3);
return (VAR6->VAR105);
}
return (FUN6(VAR106, VAR107, VAR99,
VAR16, VAR4, VAR6));
}
}


switch (VAR1) {
case VAR108:
case VAR109:
VAR92 = VAR90;
break;

case VAR110:
case VAR111:
case VAR112:
VAR92 = VAR90;
break;

default:
VAR92 = VAR89;
break;
}

switch (VAR2) {
case VAR113:
return (FUN6(VAR106, VAR107, VAR3,
VAR25, VAR4, VAR6));

case VAR114:
return (FUN6(VAR106, VAR107, VAR3,
VAR34, VAR4, VAR6));

case VAR115:
return (FUN6(VAR106, VAR107, VAR3,
VAR43, VAR4, VAR6));

case VAR116:
return (FUN6(VAR106, VAR107, VAR3,
VAR54, VAR4, VAR6));

case VAR117:
switch (VAR92) {
case VAR91:
return (FUN6(VAR106, VAR107, VAR3,
VAR59, VAR4, VAR6));
case VAR90:
return (FUN6(VAR106, VAR107, VAR3,
VAR62, VAR4, VAR6));
}
break;

case VAR118:
switch (VAR92) {
case VAR91:
return (FUN6(VAR106, VAR107, VAR3,
VAR73, VAR4, VAR6));
case VAR90:
return (FUN6(VAR106, VAR107, VAR3,
VAR77, VAR4, VAR6));
}
break;

case VAR119:
return (FUN6(VAR106, VAR107, VAR3,
VAR82, VAR4, VAR6));

case VAR120:
return (FUN6(VAR106, VAR107, VAR3,
VAR88, VAR4, VAR6));
}


return (FUN7(VAR6, VAR3, VAR4));

}
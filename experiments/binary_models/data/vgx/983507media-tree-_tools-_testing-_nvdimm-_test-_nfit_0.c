static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;
struct VAR5 *VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
const u64 VAR13 = 0x0123456789abcdefULL;
unsigned long VAR14, VAR15, VAR16;
union {
struct nd_cmd_get_config_size VAR17;
struct nd_cmd_ars_status VAR18;
struct nd_cmd_ars_cap VAR19;
char VAR20[sizeof(struct VAR21)
+ sizeof(struct VAR9)];
} VAR22;

VAR7 = FUN2(VAR2, sizeof(*VAR7), VAR23);
if (!VAR7)
return -VAR24;
*VAR7 = (struct VAR6) {
.VAR25 = &VAR26,
.VAR2 = {
.VAR27 = "",
},
};

VAR12 = FUN2(VAR2, sizeof(*VAR12), VAR23);
if (!VAR12)
return -VAR24;
*VAR12 = (struct VAR11) {
.VAR28 = {
.VAR29 = 1UL << VAR30
| 1UL << VAR31
| 1UL << VAR32
| 1UL << VAR33,
.VAR34 = VAR35,
.VAR36 = "",
.VAR37 = VAR38,
},
.VAR2 = &VAR7->VAR2,
};

VAR8 = FUN2(VAR2, sizeof(*VAR8), VAR23);
if (!VAR8)
return -VAR24;

VAR14 = 1UL << VAR39 | 1UL << VAR40
| 1UL << VAR41 | 1UL << VAR42
| 1UL << VAR43 | 1UL << VAR44
| 1UL << VAR45;
*VAR8 = (struct VAR8) {
.VAR7 = VAR7,
.VAR46 = VAR47,
.VAR48 = VAR14,
};

VAR5 = FUN2(VAR2, sizeof(*VAR5), VAR23);
if (!VAR5)
return -VAR24;
*VAR5 = (struct VAR5) {
.VAR49 = VAR8,
.VAR29 = VAR14,
.VAR2 = {
.VAR27 = "",
},
};



VAR15 = sizeof(VAR22.VAR17);
VAR22.VAR17 = (struct VAR50) {
.VAR51 = 0,
.VAR52 = VAR53,
.VAR54 = VAR55,
};
VAR3 = FUN3(VAR22.VAR20, VAR15);
if (VAR3)
return VAR3;
VAR3 = FUN4(&VAR12->VAR28, VAR5, VAR42,
VAR22.VAR20, VAR15, &VAR4);

if (VAR3 < 0 || VAR4 || VAR22.VAR17.VAR51 != 0
|| VAR22.VAR17.VAR52 != VAR53
|| VAR22.VAR17.VAR54 != VAR55) {
FUN5(VAR2, "",
VAR56, VAR57, VAR3, VAR4);
return -VAR58;
}



VAR15 = FUN6(struct VAR21, VAR59);
VAR22.VAR18 = (struct VAR21) {
.VAR60 = 0,
};
VAR3 = FUN3(VAR22.VAR20, VAR15);
if (VAR3)
return VAR3;
VAR3 = FUN4(&VAR12->VAR28, NULL, VAR32,
VAR22.VAR20, VAR15, &VAR4);

if (VAR3 < 0 || VAR4) {
FUN5(VAR2, "",
VAR56, VAR57, VAR3, VAR4);
return -VAR58;
}



VAR15 = sizeof(VAR22.VAR19);
VAR22.VAR19 = (struct VAR61) {
.VAR51 = VAR62 << 16,
};
VAR16 = FUN6(struct VAR61, VAR51);
VAR3 = FUN3(VAR22.VAR20 + VAR16, VAR15 - VAR16);
if (VAR3)
return VAR3;
VAR3 = FUN4(&VAR12->VAR28, NULL, VAR30,
VAR22.VAR20, VAR15, &VAR4);

if (VAR3 < 0 || VAR4) {
FUN5(VAR2, "",
VAR56, VAR57, VAR3, VAR4);
return -VAR58;
}



VAR15 = sizeof(VAR22.VAR18) + sizeof(struct VAR9);
VAR22.VAR18 = (struct VAR21) {
.VAR60 = VAR15 - 4,
};
VAR10 = &VAR22.VAR18.VAR63[0];
*VAR10 = (struct VAR9) {
.VAR64 = VAR13,
};
VAR3 = FUN3(VAR22.VAR20, VAR15);
if (VAR3)
return VAR3;
VAR3 = FUN4(&VAR12->VAR28, NULL, VAR32,
VAR22.VAR20, VAR15, &VAR4);

if (VAR3 < 0 || VAR4 || VAR10->VAR64 != VAR13) {
FUN5(VAR2, "",
VAR56, VAR57, VAR3, VAR4);
return -VAR58;
}



VAR15 = sizeof(VAR22.VAR18) + sizeof(struct VAR9);
VAR22.VAR18 = (struct VAR21) {
.VAR60 = VAR15,
};
VAR10 = &VAR22.VAR18.VAR63[0];
*VAR10 = (struct VAR9) {
.VAR64 = VAR13,
};
VAR3 = FUN3(VAR22.VAR20, VAR15);
if (VAR3)
return VAR3;
VAR3 = FUN4(&VAR12->VAR28, NULL, VAR32,
VAR22.VAR20, VAR15, &VAR4);

if (VAR3 < 0 || VAR4 || VAR10->VAR64 != VAR13) {
FUN5(VAR2, "",
VAR56, VAR57, VAR3, VAR4);
return -VAR58;
}



VAR15 = sizeof(VAR22.VAR17);
VAR22.VAR17 = (struct VAR50) {
.VAR51 = 1 << 16,
};
VAR3 = FUN3(VAR22.VAR20, VAR15);
if (VAR3)
return VAR3;
VAR3 = FUN4(&VAR12->VAR28, VAR5, VAR42,
VAR22.VAR20, VAR15, &VAR4);

if (VAR3 < 0 || VAR4 >= 0) {
FUN5(VAR2, "",
VAR56, VAR57, VAR3, VAR4);
return -VAR58;
}

return 0;
}
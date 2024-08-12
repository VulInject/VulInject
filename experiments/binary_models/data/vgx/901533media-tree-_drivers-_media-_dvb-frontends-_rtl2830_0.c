static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7.VAR8;
struct VAR9 *VAR7;
int VAR10;
u8 VAR11;
static const struct regmap_bus VAR12 = {
.read = VAR13,
.write = VAR14,
.VAR15 = VAR16,
.VAR17 = VAR18,
};
static const struct regmap_range_cfg VAR19[] = {
{
.VAR20     = 0x00,
.VAR21    = 0xff,
.VAR22   = 0,
.VAR23     = 0,
.VAR24       = 0x100,
.VAR25        = 0 * 0x100,
.VAR26        = 5 * 0x100,
},
};
static const struct regmap_config VAR27 = {
.VAR28    =  8,
.VAR29    =  8,
.VAR30 = 5 * 0x100,
.VAR31 = VAR19,
.VAR32 = FUN2(VAR19),
};

FUN3(&VAR2->VAR7, "");

if (VAR6 == NULL) {
VAR10 = -VAR33;
goto VAR34;
}


VAR7 = FUN4(sizeof(*VAR7), VAR35);
if (VAR7 == NULL) {
VAR10 = -VAR36;
goto VAR34;
}


FUN5(VAR2, VAR7);
VAR7->VAR2 = VAR2;
VAR7->VAR6 = VAR2->VAR7.VAR8;
VAR7->VAR37 = true;
VAR7->VAR38 = FUN6(&VAR2->VAR7, &VAR12, VAR2,
&VAR27);
if (FUN7(VAR7->VAR38)) {
VAR10 = FUN8(VAR7->VAR38);
goto VAR39;
}


VAR10 = FUN9(VAR2, 0x000, &VAR11, 1);
if (VAR10)
goto VAR40;


VAR7->VAR41 = FUN10(VAR2->VAR42, &VAR2->VAR7, 1, 0, 0,
VAR43, NULL);
if (!VAR7->VAR41) {
VAR10 = -VAR36;
goto VAR40;
}
VAR7->VAR41->VAR44 = VAR2;
VAR10 = FUN11(VAR7->VAR41, 0, 0, 0);
if (VAR10)
goto VAR40;


memcpy(&VAR7->VAR45.VAR46, &VAR47, sizeof(VAR7->VAR45.VAR46));
VAR7->VAR45.VAR48 = VAR2;


VAR6->VAR49 = VAR50;
VAR6->VAR51 = VAR52;
VAR6->VAR53 = VAR54;
VAR6->VAR55 = VAR56;

FUN12(&VAR2->VAR7, "");

return 0;
VAR40:
FUN13(VAR7->VAR38);
VAR39:
FUN14(VAR7);
VAR34:
FUN3(&VAR2->VAR7, "", VAR10);
return VAR10;
}
int
FUN1(VAR1 *VAR2, int VAR3,
port_id_t VAR4)
{
VAR5 *VAR6;
VAR7 *VAR8 = NULL;
struct VAR9 *VAR10 = NULL;
struct VAR11 *VAR12 = VAR2->VAR13;
struct els_logo_payload VAR14;
int VAR15 = VAR16;

VAR8 = FUN2(VAR2, VAR17);
if (!VAR8) {
FUN3(VAR18, VAR2, 0x70e5, "");
return -VAR19;
}


VAR6 = FUN4(VAR2, VAR8, VAR17);
if (!VAR6) {
FUN5(VAR8);
FUN3(VAR18, VAR2, 0x70e6,
"");
return -VAR19;
}

VAR10 = &VAR6->VAR20.VAR21;
VAR8->VAR22 = 0xFFFF;
VAR8->VAR23.VAR24.VAR25 = VAR4.VAR24.VAR25;
VAR8->VAR23.VAR24.VAR26 = VAR4.VAR24.VAR26;
VAR8->VAR23.VAR24.VAR27 = VAR4.VAR24.VAR27;

FUN6(VAR28, VAR2, 0x3073, "",
VAR8->VAR23.VAR24.VAR25, VAR8->VAR23.VAR24.VAR26, VAR8->VAR23.VAR24.VAR27);

VAR6->VAR29 = VAR30;
VAR6->VAR31 = "";
VAR6->VAR8 = VAR8;
FUN7(VAR6, VAR32);
VAR10->VAR33 = VAR34;
VAR6->VAR35 = VAR36;
VAR6->free = VAR37;

VAR10->VAR20.VAR38.VAR39 = FUN8(&VAR12->VAR40->VAR41,
VAR42, &VAR10->VAR20.VAR38.VAR43,
VAR17);

if (!VAR10->VAR20.VAR38.VAR39) {
VAR6->free(VAR6);
return VAR44;
}

memset(&VAR14, 0, sizeof(struct VAR45));

VAR10->VAR20.VAR38.VAR46 = VAR3;
VAR14.VAR47 = VAR3;
VAR14.VAR48[0] = VAR2->VAR23.VAR24.VAR27;
VAR14.VAR48[1] = VAR2->VAR23.VAR24.VAR26;
VAR14.VAR48[2] = VAR2->VAR23.VAR24.VAR25;
FUN9(VAR14.VAR48, sizeof(VAR49));
memcpy(&VAR14.VAR50, VAR2->VAR51, VAR52);

memcpy(VAR10->VAR20.VAR38.VAR39, &VAR14,
sizeof(struct VAR45));

VAR15 = FUN10(VAR6);
if (VAR15 != VAR16) {
VAR6->free(VAR6);
return VAR44;
}

FUN6(VAR28, VAR2, 0x3074,
"",
VAR6->VAR31, VAR6->VAR53, VAR8->VAR22, VAR8->VAR23.VAR24.VAR25,
VAR8->VAR23.VAR24.VAR26, VAR8->VAR23.VAR24.VAR27);

FUN11(&VAR10->VAR20.VAR38.VAR54);

VAR6->free(VAR6);
return VAR15;
}
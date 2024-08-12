static int FUN1(struct VAR1 *VAR2,
const void *VAR3,
unsigned int VAR4,
bool private,
int VAR5,
int VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10 = &VAR8->VAR10;
struct VAR11 *VAR12;
struct virtio_crypto_ctrl_header VAR13;
struct virtio_crypto_akcipher_session_para VAR14;
struct rsa_key VAR15 = {0};
int VAR16 = FUN3();
uint32_t VAR17;
int VAR18;


FUN4(VAR10->VAR19);
VAR10->VAR19 = NULL;

if (private) {
VAR17 = VAR20;
VAR18 = FUN5(&VAR15, VAR3, VAR4);
} else {
VAR17 = VAR21;
VAR18 = FUN6(&VAR15, VAR3, VAR4);
}

if (VAR18)
return VAR18;

VAR10->VAR19 = FUN7(VAR15.VAR19, VAR15.VAR22);
if (!VAR10->VAR19)
return -VAR23;

if (!VAR8->VAR12) {
VAR12 = FUN8(VAR16, VAR24,
VAR25);
if (!VAR12) {
FUN9("");
return -VAR26;
}

VAR8->VAR12 = VAR12;
} else {
FUN10(VAR8);
}


VAR13.VAR27 =	FUN11(VAR28);
VAR13.VAR29 = FUN11(VAR25);
VAR13.VAR30 = 0;


VAR14.VAR29 = FUN11(VAR25);
VAR14.VAR17 = FUN11(VAR17);
VAR14.VAR4 = FUN11(VAR4);
VAR14.VAR31.VAR32.VAR5 = FUN11(VAR5);
VAR14.VAR31.VAR32.VAR6 = FUN11(VAR6);

return FUN12(VAR8, &VAR13, &VAR14, VAR3, VAR4);
}
static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
struct VAR4 *VAR5,
struct VAR6 *VAR7,
struct VAR8 *VAR9)
{
struct venc_ap_ipi_msg_enc_ext_34 VAR10;
size_t VAR11 = sizeof(struct VAR12);

FUN2(VAR2, "", VAR3);

memset(&VAR10, 0, sizeof(VAR10));
VAR10.VAR13 = VAR14;
VAR10.VAR15 = VAR2->VAR16;
VAR10.VAR3 = VAR3;

if (VAR5) {
if ((VAR5->VAR17[0].VAR18 % 16 == 0) &&
(VAR5->VAR17[1].VAR18 % 16 == 0) &&
(VAR5->VAR17[2].VAR18 % 16 == 0)) {
VAR10.VAR19[0] = VAR5->VAR17[0].VAR18;
VAR10.VAR19[1] = VAR5->VAR17[1].VAR18;
VAR10.VAR19[2] = VAR5->VAR17[2].VAR18;
} else {
FUN3(VAR2, "");
return -VAR20;
}
}
if (VAR7) {
VAR10.VAR21 = VAR7->VAR18;
VAR10.VAR22 = VAR7->VAR23;
}
if (VAR9) {
VAR10.VAR24 = 3;
VAR10.VAR25[0] = VAR9->VAR26;
VAR10.VAR25[1] = VAR9->VAR27;
VAR10.VAR25[2] = VAR9->VAR28;
}
if (FUN4(VAR2, &VAR10, VAR11)) {
FUN3(VAR2, "",
VAR3);
return -VAR20;
}

return 0;
}
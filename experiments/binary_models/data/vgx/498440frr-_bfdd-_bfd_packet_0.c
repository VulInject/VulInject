VAR1 FUN1(int VAR2, VAR3 *VAR4, size_t VAR5,
VAR3 *VAR6, VAR7 *VAR8,
struct VAR9 *VAR10, struct VAR9 *VAR11)
{
ssize_t VAR12;
struct sockaddr_ll VAR13;
struct msghdr VAR14;
struct iovec VAR15[1];
uint16_t VAR16;
uint16_t VAR17;
struct VAR18 *VAR19;
struct VAR20 *VAR21;


VAR15[0].VAR22 = VAR4;
VAR15[0].VAR23 = VAR5;

memset(&VAR14, 0, sizeof(VAR14));
VAR14.VAR24 = &VAR13;
VAR14.VAR25 = sizeof(VAR13);
VAR14.VAR26 = VAR15;
VAR14.VAR27 = 1;

VAR12 = FUN2(VAR2, &VAR14, VAR28);
if (VAR12 == -1) {
if (VAR29 != VAR30 || VAR29 != VAR31 || VAR29 != VAR32)
FUN3("", VAR33,
strerror(VAR29));

return -1;
}

VAR19 = (struct VAR18 *)(VAR4 + sizeof(struct VAR34));


VAR16 = VAR19->VAR35;
VAR19->VAR35 = 0;
VAR17 = FUN4((const void *)VAR19, sizeof(struct VAR18));
if (VAR16 != VAR17) {
if (VAR36.VAR37)
FUN5(
"",
VAR33, VAR17, VAR16);
return -1;
}

*VAR6 = VAR19->VAR6;
if (*VAR6 != 254) {

if (VAR19->VAR38 == VAR19->VAR39)
return -1;

if (VAR36.VAR37)
FUN5("", VAR33, *VAR6);
return -1;
}

VAR10->VAR40.VAR41 = VAR42;
memcpy(&VAR10->VAR40.VAR43, &VAR19->VAR39, sizeof(VAR19->VAR39));
VAR11->VAR40.VAR41 = VAR42;
memcpy(&VAR11->VAR40.VAR43, &VAR19->VAR38, sizeof(VAR19->VAR38));

*VAR8 = VAR13.VAR44;


VAR21 = (struct VAR20 *)(VAR4 + sizeof(struct VAR18) +
sizeof(struct VAR34));
VAR16 = VAR21->VAR35;
VAR21->VAR35 = 0;
VAR17 = FUN6(VAR21, FUN7(VAR21->VAR45),
(struct VAR46 *)&VAR19->VAR39, VAR42);
if (VAR16 != VAR17) {
if (VAR36.VAR37)
FUN5(
"",
VAR33, VAR17, VAR16);
return -1;
}
return VAR12;
}
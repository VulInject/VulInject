static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct ec_params_usb_pd_control VAR4;
struct ec_response_usb_pd_control_v2 VAR5;
int VAR6;

if (VAR3 < 0 || VAR3 >= VAR2->VAR7) {
FUN2(VAR2->VAR8, "",
VAR3);
return -VAR9;
}

VAR4.VAR10 = VAR3;
VAR4.VAR11 = VAR12;
VAR4.VAR13 = VAR14;
VAR4.VAR15 = VAR16;

VAR6 = FUN3(VAR2->VAR17, VAR2->VAR18,
VAR19, &VAR4, sizeof(VAR4),
&VAR5, sizeof(VAR5));
if (VAR6 < 0)
return VAR6;


VAR6 = FUN4(VAR2, VAR3, &VAR5);
if (VAR6)
FUN5(VAR2->VAR8, "", VAR6);

FUN6(VAR2->VAR8, "", VAR3, VAR5.VAR20);
FUN6(VAR2->VAR8, "", VAR3, VAR5.VAR11);
FUN6(VAR2->VAR8, "", VAR3, VAR5.VAR21);
FUN6(VAR2->VAR8, "", VAR3, VAR5.VAR22);

if (VAR2->VAR18 != 0)
FUN7(VAR2, VAR3,
(struct VAR23 *)&VAR5);
else
FUN8(VAR2, VAR3,
(struct VAR24 *) &VAR5);

if (VAR2->VAR25)
FUN9(VAR2, VAR3);

return 0;
}
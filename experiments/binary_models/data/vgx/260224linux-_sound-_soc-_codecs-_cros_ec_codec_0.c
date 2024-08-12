static int FUN1(struct VAR1 *VAR2,
const unsigned int VAR3 *VAR4,
unsigned int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 =
FUN3(VAR7);
struct ec_param_ec_codec_wov VAR10;
struct ec_response_ec_codec_wov_get_lang VAR11;
uint8_t VAR12[VAR13];
VAR14 *VAR15;
int VAR16;


VAR4 += 2;
VAR5 -= 8;

FUN4(VAR9->VAR17, "", VAR18, VAR5);

VAR15 = FUN5(VAR4, VAR5);
if (FUN6(VAR15))
return FUN7(VAR15);

FUN8(VAR15, VAR5, VAR12);
FUN4(VAR9->VAR17, "", VAR13, VAR12);

VAR10.VAR19 = VAR20;
VAR16 = FUN9(VAR9->VAR21, VAR22,
(VAR14 *)&VAR10, sizeof(VAR10),
(VAR14 *)&VAR11, sizeof(VAR11));
if (VAR16)
goto VAR23;

if (memcmp(VAR12, VAR11.VAR24, VAR13) == 0) {
FUN4(VAR9->VAR17, "");
goto VAR23;
}

if (FUN10(VAR9, VAR25))
VAR16 = FUN11(VAR9, VAR15, VAR5, VAR12);
else
VAR16 = FUN12(VAR9, VAR15, VAR5, VAR12);

VAR23:
FUN13(VAR15);
return VAR16;
}
int FUN1(mbedtls_svc_key_id_t VAR1,
psa_key_usage_t VAR2,
psa_algorithm_t VAR3)
{
int VAR4 = 0;

if (!FUN2(VAR1)) {
return 0;
}

if (VAR3 == 0) {
VAR4 = 1; 
} else if (FUN3(VAR3)) {
VAR4 = FUN4(VAR1, VAR2, VAR3);
} else if (FUN5(VAR3)) {
VAR4 = FUN6(VAR1, VAR2, VAR3);
} else if (FUN7(VAR3)) {
VAR4 = FUN8(VAR1, VAR2, VAR3);
} else if (FUN9(VAR3)) {
VAR4 = FUN10(VAR1, VAR2, VAR3);
} else if (FUN11(VAR3)) {
VAR4 = FUN12(VAR1, VAR2, VAR3);
} else if (FUN13(VAR3)) {
VAR4 = FUN14(VAR1, VAR2, VAR3);
} else if (FUN15(VAR3)) {
VAR4 = FUN16(VAR1, VAR2, VAR3);
} else if (FUN17(VAR3)) {
VAR4 = FUN18(VAR1, VAR2, VAR3);
} else {
FUN19(!"");
}

VAR4 = VAR4 && FUN20(VAR1, VAR2);
VAR4 = VAR4 && FUN21(VAR1);

VAR5:
return VAR4;
}
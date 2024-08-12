static VAR1 FUN1(VAR2 *VAR3, tpm2_option_flags VAR4) {

FUN2(VAR4);


tool_rc VAR5 = FUN3();
if (VAR5 != VAR6) {
return VAR5;
}


VAR5 = FUN4(VAR3);
if (VAR5 != VAR6) {
return VAR5;
}


VAR5 = FUN5(VAR3, VAR7.VAR8, &VAR7.VAR9, &VAR7.VAR10,
VAR7.VAR11, VAR7.VAR12[0],
VAR7.VAR12[1]);
if (VAR5 != VAR6) {
return VAR5;
}


return FUN6(VAR3);
}
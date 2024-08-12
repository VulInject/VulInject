static bool FUN1(VAR1 *VAR2, bool VAR3) {
ARMDebugState64 VAR4;
thread_t VAR5 = FUN2 (VAR2, NULL);

mach_msg_type_number_t VAR6 = VAR7;
if (FUN3 (VAR5, VAR8, (VAR9)&VAR4, &VAR6)) {
FUN4 ("");
return false;
}






if (VAR3) {
VAR4.VAR10 |= 1LL;
} else {
VAR4.VAR10 &= ~(1ULL);
}
if (FUN5 (VAR5, VAR8, (VAR9)&VAR4, VAR6)) {
FUN4 ("");
}
return true;
}
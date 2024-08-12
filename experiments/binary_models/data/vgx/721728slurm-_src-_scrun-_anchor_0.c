static int FUN1(VAR1 *VAR2, int signal)
{
int VAR3 = VAR4, VAR5;
container_state_msg_status_t VAR6;

FUN2();
VAR5 = VAR7.VAR5;
VAR6 = VAR7.VAR6;
FUN3();

if (VAR5 && (VAR6 <= VAR8)) {
VAR3 = FUN4(VAR5, signal, VAR9);

FUN5("",
VAR10, (VAR2 ? VAR2->VAR11 : ""), VAR5, signal,
FUN6(signal), FUN7(VAR3));
} else {
FUN5("", VAR10, VAR2->VAR11);
}

return VAR3;
}
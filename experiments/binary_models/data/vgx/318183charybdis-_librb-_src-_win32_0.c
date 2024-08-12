static int
FUN1(pid_t VAR1, VAR2 *VAR3, VAR4 * VAR5)
{
WSAPROTOCOL_INFO VAR6;
if(!FUN2((VAR7) FUN3(VAR3), VAR1, &VAR6))
{
memcpy(VAR5, &VAR6, sizeof(VAR4));
return 1;
}
return 0;
}
int
FUN1(smb_sign_ctx_t VAR1, void *VAR2, size_t VAR3)
{
crypto_data_t VAR4;
int VAR5;

FUN2(&VAR4, sizeof (VAR4));
VAR4.VAR6 = VAR7;
VAR4.VAR8 = VAR3;
VAR4.VAR9.VAR10 = VAR2;
VAR4.VAR9.VAR11 = VAR3;

VAR5 = FUN3(VAR1, &VAR4, 0);

if (VAR5 != VAR12) {
FUN4(VAR1);
return (-1);
}

return (0);
}
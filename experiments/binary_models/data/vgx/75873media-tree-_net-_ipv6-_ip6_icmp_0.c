void FUN1(struct VAR1 *VAR2, u8 VAR3, u8 VAR4, __u32 VAR5)
{
VAR6 *send;

FUN2();
send = FUN3(VAR7);

if (!send)
goto VAR8;
send(VAR2, VAR3, VAR4, VAR5, NULL);
VAR8:
FUN4();
}
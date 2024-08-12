static VAR1
FUN1(krb5_context VAR2, VAR3 *VAR4)
{
VAR5 *VAR6 = (VAR5 *)VAR4;
VAR7 *VAR8 = (VAR7*)VAR4->VAR9;

FUN2(VAR8 != 0, "");

(*VAR8->close)(VAR8);
VAR4->VAR9 = 0;

if (VAR6->VAR10 >= 0) {
close(VAR6->VAR10);
VAR6->VAR10 = -1;
}

return 0;
}
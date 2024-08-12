VAR1
FUN1(krb5_context VAR2, int VAR3, int VAR4,
krb5_plugin_vtable VAR5)
{
k5_tls_vtable VAR6;

VAR6 = (VAR7)VAR5;
VAR6->VAR8 = VAR8;
VAR6->write = VAR9;
VAR6->read = VAR10;
VAR6->VAR11 = VAR11;
return 0;
}
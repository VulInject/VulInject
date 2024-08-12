static void
FUN1(krb5_context VAR1, VAR2 *VAR3)
{
krb5_error_code VAR4;
size_t VAR5;
uint32_t VAR6;

FUN2(VAR3, -1);
FUN3(VAR3, 0);
for (VAR5=0; VAR5 < 4096; VAR5++) {
FUN4(VAR3, VAR5);
}

FUN3(VAR3, 1024);
VAR4 = FUN5(VAR3, &VAR6);
if (VAR4 != -1)
FUN6(VAR1, 1, "");

FUN7(VAR3, 8, VAR7);
VAR4 = FUN5(VAR3, &VAR6);
if (VAR4 == -1)
FUN6(VAR1, 1, "");
if (VAR6 != 2)
FUN6(VAR1, 1, "");
}
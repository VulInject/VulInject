static void
FUN1(void **VAR1)
{
krb5_key_data VAR2[] = { FUN2(5), FUN2(5), FUN2(4), FUN2(3), FUN2(3), FUN2(2),
FUN2(2), FUN2(1) };
int VAR3 = sizeof(VAR2)/sizeof(VAR2[0]);

FUN3(VAR2, VAR3);
FUN4(VAR2, VAR3);
}
static void FUN1(void)
{
ptls_base64_decode_state_t VAR1;
ptls_buffer_t VAR2;
int VAR3;

FUN2(&VAR2, "", 0);

FUN3(&VAR1);
VAR3 = FUN4("", &VAR1, &VAR2);
FUN5(VAR3 == 0);
FUN5(VAR2.VAR4 == 11);
FUN5(memcmp(VAR2.VAR5, "", 11) == 0);

VAR2.VAR4 = 0;

FUN3(&VAR1);
VAR3 = FUN4("", &VAR1, &VAR2);
FUN5(VAR3 != 0);

VAR2.VAR4 = 0;

FUN3(&VAR1);
VAR3 = FUN4(""
"",
&VAR1, &VAR2);
FUN5(VAR3 != 0);

FUN6(&VAR2);
}
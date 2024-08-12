static void FUN1(const char *VAR1, int VAR2, double VAR3)
{
parse_buffer VAR4 = { 0, 0, 0, 0, { 0, 0, 0 } };
VAR4.VAR5 = (const unsigned char*)VAR1;
VAR4.VAR6 = strlen(VAR1) + sizeof("");

FUN2(FUN3(VAR7, &VAR4));
FUN4(VAR7);
FUN5(VAR2, VAR7->VAR8);
FUN6(VAR3, VAR7->VAR9);
}
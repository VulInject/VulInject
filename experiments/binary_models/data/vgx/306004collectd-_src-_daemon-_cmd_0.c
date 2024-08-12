static int FUN1(void) {
const char *VAR1 = FUN2("");
if (VAR1 == NULL)
return 0;

return unlink(VAR1);
}
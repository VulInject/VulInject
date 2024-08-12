static VAR1
FUN1(const char *VAR2, VAR3 *VAR4)
{
FUN2(VAR2);
FUN2(VAR4);

uint32_t VAR5;

for (VAR5 = 0; VAR5 < FUN3(VAR6); VAR5++) {
if (strcmp(VAR6[VAR5].VAR2, VAR2) == 0) {

if (VAR6[VAR5].VAR7) {
int VAR8 = VAR6[VAR5].FUN4();
if (VAR8) {
*VAR4 = NULL;
return VAR8;
}
}
*VAR4 = VAR6[VAR5].VAR9;
return 0;
}
}

return -VAR10;
}
static enum VAR1
FUN1(struct VAR2 *VAR3, void *VAR4,
size_t VAR5)
{
enum xp_retval VAR6;
int VAR7;

while (1) {
VAR7 = FUN2(VAR3, VAR4, VAR5);
if (VAR7 == VAR8) {
VAR6 = VAR9;
break;
}

if (VAR7 == VAR10) {
FUN3(VAR11, ""
"");


(void)FUN4(10);
} else if (VAR7 == VAR12) {
FUN3(VAR11, ""
"");


} else {

FUN5(VAR11, ""
"", VAR7);
VAR6 = VAR13;
break;
}
}
return VAR6;
}
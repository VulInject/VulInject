int
FUN1(VAR1 *VAR2, const void *VAR3, size_t VAR4)
{
size_t VAR5;

if (VAR4 == 0)
return 1;

VAR5 = fwrite(VAR3, 1, VAR4, VAR2);

if (VAR5 == 0) {
FUN2(VAR6, "", strerror(VAR7));
return 0;
} else if (VAR5 < VAR4) {
FUN2(VAR6, "");
return 0;
} else {
return 1;
}
}
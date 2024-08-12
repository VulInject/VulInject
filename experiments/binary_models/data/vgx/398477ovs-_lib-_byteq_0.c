int
FUN1(struct VAR1 *VAR2, int VAR3)
{
while (!FUN2(VAR2)) {
ssize_t VAR4 = write(VAR3, FUN3(VAR2), FUN4(VAR2));
if (VAR4 > 0) {
FUN5(VAR2, VAR4);
} else {
FUN6(VAR4 < 0);
return VAR5;
}
}
return 0;
}
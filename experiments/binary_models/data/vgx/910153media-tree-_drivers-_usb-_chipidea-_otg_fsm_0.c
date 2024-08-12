static VAR1
FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);

if (VAR7 > 2)
return -1;

FUN3(&VAR9->VAR10.VAR11);
if (VAR6[0] == '') {
VAR9->VAR10.VAR12 = 0;
} else if (VAR6[0] == '') {

if (VAR9->VAR10.VAR13) {
FUN4(&VAR9->VAR10.VAR11);
return VAR7;
}
VAR9->VAR10.VAR12 = 1;
if (VAR9->VAR10.VAR14->VAR15 == VAR16) {
VAR9->VAR17.VAR18 = 1;
FUN4(&VAR9->VAR10.VAR11);
return VAR7;
}
}

FUN5(VAR9);
FUN4(&VAR9->VAR10.VAR11);

return VAR7;
}
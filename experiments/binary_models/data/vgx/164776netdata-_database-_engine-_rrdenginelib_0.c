int FUN1(uv_file VAR1, VAR2 *VAR3, size_t VAR4)
{
int VAR5;
uv_fs_t VAR6;
VAR7* VAR8;

VAR5 = FUN2(NULL, &VAR6, VAR1, NULL);
if (VAR5 < 0) {
FUN3("", FUN4(VAR5));
}
FUN5(VAR6.VAR9 == 0);
VAR8 = VAR6.VAR10;
if (!(VAR8->VAR11 & VAR12)) {
FUN6("");
FUN7(&VAR6);
return VAR13;
}
if (VAR8->VAR14 < VAR4) {
FUN6("");
FUN7(&VAR6);
return VAR13;
}
*VAR3 = VAR8->VAR14;
FUN7(&VAR6);

return 0;
}
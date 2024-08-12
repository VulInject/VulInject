int FUN1(const char *VAR1, VAR2 *VAR3) {
_i32 VAR4;
SlFsFileInfo_t VAR5;
_i32 VAR6 = FUN2((const VAR2 *) VAR1, 0, &VAR5);
FUN3(VAR6 == 0 ? '' : '');
if (VAR6 != 0) return VAR6;
{
char VAR7[20];
FUN4(VAR5.VAR8, VAR7, 10);
FUN5(VAR7);
}
VAR6 = FUN6((const VAR2 *) VAR1, VAR9, NULL, &VAR4);
FUN3(VAR6 == 0 ? '' : '');
if (VAR6 != 0) return VAR6;
VAR6 = FUN7(VAR4, 0, VAR3, VAR5.VAR8);
if (VAR6 != VAR5.VAR8) return VAR6;
FUN8(VAR4, NULL, NULL, 0);
return 0;
}
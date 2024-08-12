static int FUN1(const char *VAR1) {
char VAR2[sizeof("") + FUN2(VAR3)];
uint64_t VAR4, VAR5;
uid_t VAR6;
gid_t VAR7;
int VAR8;

VAR8 = FUN3(&VAR1, &VAR6, &VAR7, NULL, NULL, 0);
if (VAR8 < 0)
return FUN4(VAR8,
VAR8 == -VAR9 ? ""%VAR10\"" :
VAR8 == -VAR11 ? ""%VAR10\""
: ""%VAR10\"",
VAR1);

VAR8 = FUN5(&VAR4, &VAR5);
if (VAR8 < 0)
return VAR8;

FUN6(VAR2, "" VAR12, VAR6);

FUN7(""VAR12""VAR13, VAR2, VAR6, VAR7);
return FUN8(VAR2, VAR6, VAR7, VAR4, VAR5);
}
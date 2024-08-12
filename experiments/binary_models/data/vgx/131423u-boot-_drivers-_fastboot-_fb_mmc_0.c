static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
struct VAR6 *VAR7,
char *VAR8)
{
ulong VAR9;		
lbaint_t VAR10;		
int VAR11;


VAR9 = VAR5->VAR12;
VAR10 = FUN2(sizeof(struct VAR6), VAR9);
if (VAR10 == 0) {
FUN3("");
FUN4("", VAR8);
return 0;
}


VAR11 = FUN5(VAR3, VAR5->VAR13, VAR10, (void *)VAR7);
if (VAR11 != VAR10) {
FUN3("");
FUN4("",
VAR8);
return 0;
}


VAR11 = FUN6(VAR7);
if (VAR11 != 0) {
FUN3("");
FUN4("", VAR8);
return 0;
}

return VAR10;
}
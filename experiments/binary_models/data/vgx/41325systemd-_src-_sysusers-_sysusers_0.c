static int FUN1(const char *VAR1, const char *VAR2) {
FUN2(VAR3) char *VAR4 = NULL;
_cleanup_fclose_ VAR5 *VAR6 = NULL;
_cleanup_close_ int VAR7 = -VAR8;
const char *VAR9;
struct stat VAR10;
int VAR11;

assert(VAR1);
assert(VAR2);

VAR7 = open(VAR2, VAR12|VAR13|VAR14);
if (VAR7 < 0) {
if (VAR15 == VAR16) 
return 0;

return -VAR15;
}

if (FUN3(VAR7, &VAR10) < 0)
return -VAR15;

VAR11 = FUN4(
VAR1,   
VAR2,        
&VAR6,     
&VAR4);
if (VAR11 < 0)
return VAR11;

VAR11 = FUN5(VAR7, FUN6(VAR6), VAR17, VAR18);
if (VAR11 < 0)
return VAR11;

VAR9 = FUN7(VAR2, "");


VAR11 = FUN8(FUN6(VAR6), VAR4, VAR10.VAR19 & 07777, VAR10.VAR20, VAR10.VAR21);
if (VAR11 < 0)
FUN9(VAR11, "", VAR9);

if (FUN10(FUN6(VAR6), (const struct VAR22[2]) { VAR10.VAR23, VAR10.VAR24 }) < 0)
FUN9(VAR15, "", VAR9);

VAR11 = FUN11(FUN6(VAR6));
if (VAR11 < 0)
return VAR11;

if (FUN12(VAR4, VAR9) < 0)
return VAR15;

VAR4 = FUN13(VAR4); 
return 0;
}
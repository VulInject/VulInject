static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4) {
union in_addr_union VAR5 = {}, VAR6 = {};
unsigned char VAR7;
const char *VAR8, *VAR9;
int VAR10, VAR11;



if (FUN2(VAR3, VAR4))
return -VAR12;

if (VAR4[0] == '') {
VAR9 = strchr(VAR4, '');
if (!VAR9)
return -VAR12;

if (VAR9[1] != '')
return -VAR12;

VAR8 = FUN3(VAR4 + 1, VAR9 - VAR4 - 1);
VAR4 = VAR9 + 2;
VAR10 = VAR13;
} else {
VAR9 = strchr(VAR4, '');
if (!VAR9)
return -VAR12;

VAR8 = FUN3(VAR4, VAR9 - VAR4);
VAR4 = VAR9 + 1;
VAR10 = VAR14;
}

VAR11 = FUN4(VAR8, VAR10, &VAR5, &VAR7);
if (VAR11 < 0)
return VAR11;

VAR9 = strchr(VAR4, '');
if (!VAR9)
VAR4 = FUN5(VAR4, "");

VAR11 = FUN6(VAR10, &VAR4, &VAR6);
if (VAR11 < 0)
return VAR11;

return FUN7(VAR2, VAR4, VAR10, VAR7, &VAR5, &VAR6);
}
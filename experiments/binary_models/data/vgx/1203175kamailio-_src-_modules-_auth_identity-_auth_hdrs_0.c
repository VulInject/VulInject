int FUN1(struct VAR1* VAR2, char *VAR3, enum _hdr_types_t VAR4)
{
struct VAR5* VAR6;
char* VAR7;
int VAR8;

if (FUN2(VAR2, VAR9, 0) == -1) {
FUN3(VAR10, "");
return -1;
}

VAR6 = FUN4(VAR2, VAR2->VAR11 - VAR2->VAR12, 0, VAR4);
if (VAR6 == 0) {
FUN3(VAR10, "");
return -1;
}

VAR8=strlen(VAR3);

VAR7 = (char*)FUN5(VAR8+1);
if (!VAR7) {
FUN3(VAR10, "");
return -1;
}

memcpy(VAR7, VAR3, VAR8);
VAR7[VAR8] = '';

if (FUN6(VAR6, VAR7, VAR8, VAR4) == 0) {
FUN3(VAR10, "");
FUN7(VAR7);
return -1;
}
return 0;
}
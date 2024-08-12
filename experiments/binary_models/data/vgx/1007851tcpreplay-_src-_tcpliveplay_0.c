VAR1* 
FUN1(char *VAR2, VAR3* VAR4, unsigned int VAR5)
{
VAR1 *VAR6 = NULL;          
char VAR7[VAR8];  
struct bpf_program VAR9;          
char VAR10[52];
sprintf(VAR10,"",
VAR4->VAR11, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14, VAR5);  
bpf_u_int32 VAR15;           
bpf_u_int32 VAR16;            


if (VAR2 == NULL) {
fprintf(VAR17, "", VAR7);
return VAR6;
}

if (FUN2(VAR2, &VAR16, &VAR15, VAR7) == -1) {
fprintf(VAR17, "", VAR2, VAR7);
VAR16 = 0;
VAR15 = 0;
}


VAR6 = FUN3(VAR2, VAR18, VAR19, VAR20, VAR7);
if (VAR6 == NULL) {
fprintf(VAR17, "", VAR2, VAR7);
return VAR6;
}

if (FUN4(VAR6, &VAR9, VAR10, 0, VAR16) == -1) {
fprintf(VAR17, "", VAR10, FUN5(VAR6));
return VAR6;
}
if (FUN6(VAR6, &VAR9) == -1) {
fprintf(VAR17, "", VAR10, FUN5(VAR6));
return VAR6;
}

FUN7(&VAR9);
return VAR6;
}
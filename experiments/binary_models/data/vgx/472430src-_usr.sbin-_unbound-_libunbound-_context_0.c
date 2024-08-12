struct VAR1* 
FUN1(struct VAR2* VAR3, VAR4* VAR5, uint32_t VAR6)
{
struct VAR1* VAR7 = (struct VAR1*)calloc(1, sizeof(*VAR7));
if(!VAR7) return NULL;
if(VAR6 < 4*sizeof(VAR8)+1) {
free(VAR7);
return NULL;
}
FUN2( FUN3(VAR5) == VAR9);
VAR7->VAR10 = (int)FUN3(VAR5+sizeof(VAR8));
VAR7->VAR11.VAR12 = &VAR7->VAR10;
VAR7->VAR13 = 1;
VAR7->VAR14 = (struct VAR15*)calloc(1, sizeof(*VAR7->VAR14));
if(!VAR7->VAR14) {
free(VAR7);
return NULL;
}
VAR7->VAR14->VAR16 = (int)FUN3(VAR5+2*sizeof(VAR8));
VAR7->VAR14->VAR17 = (int)FUN3(VAR5+3*sizeof(VAR8));
VAR7->VAR14->VAR18 = strdup((char*)(VAR5+4*sizeof(VAR8)));
if(!VAR7->VAR14->VAR18) {
free(VAR7->VAR14);
free(VAR7);
return NULL;
}


VAR3->VAR19++;
(void)FUN4(&VAR3->VAR20, &VAR7->VAR11);
return VAR7;
}
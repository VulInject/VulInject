char *FUN1(const VAR1 *VAR2, size_t VAR3)
{
if (VAR2 != NULL && VAR3 >= 1) {
static char VAR4[64];	

if (VAR2[0] == 0x01 && VAR3 >= 5) {		
unsigned short VAR5 = (VAR2[1] << 8) + VAR2[2];
snprintf(VAR4, sizeof(VAR4), "", VAR5);
return VAR4;
}
else if (VAR2[0] == 0x12) {			
strcpy(VAR4, "");
return VAR4;
}
else if (VAR2[0] == 0x13) {			
strcpy(VAR4, "");
return VAR4;
}
else if (VAR2[0] == 0x16) {			
strcpy(VAR4, "");
return VAR4;
}
}
return NULL;
}
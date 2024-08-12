void*
FUN1(uint32_t VAR1, char* VAR2) {
void        *VAR3;
Status_t    VAR4;

FUN2("", VAR1, VAR2);
VAR4 = FUN3(&VAR5, VAR1, (void*)&VAR3);
if (VAR4 != VAR6 || !VAR3)
return NULL;
return VAR3;
}
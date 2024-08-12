void *FUN1(const void *VAR1, size_t VAR2, const char *VAR3)
{
if (VAR1 == NULL) {
FUN2(VAR2 == 0);
return NULL;
}


void *VAR4 = FUN3(VAR2, VAR3);
if (VAR2 > 0) {
FUN2(VAR1 != NULL); 
memcpy(VAR4, VAR1, VAR2);
}
return VAR4;
}
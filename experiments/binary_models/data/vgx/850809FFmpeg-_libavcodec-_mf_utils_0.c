VAR1 *FUN1(VAR2 *VAR3,void *VAR4, size_t VAR5,
size_t VAR6)
{
HRESULT VAR7;
VAR1 *VAR8;
VAR9 *VAR10;

VAR7 = VAR3->FUN2(&VAR8);
if (FUN3(VAR7))
return NULL;

VAR6 = FUN4(VAR6, 16); 

VAR7 = VAR3->FUN5(VAR5, VAR6 - 1, &VAR10);
if (FUN3(VAR7))
return NULL;

if (VAR4) {
VAR11 *VAR12;

VAR7 = FUN6(VAR10, &VAR12, NULL, NULL);
if (FUN3(VAR7)) {
FUN7(VAR10);
FUN8(VAR8);
return NULL;
}
memcpy(VAR12, VAR4, VAR5);

FUN9(VAR10, VAR5);
FUN10(VAR10);
}

FUN11(VAR8, VAR10);
FUN7(VAR10);

return VAR8;
}
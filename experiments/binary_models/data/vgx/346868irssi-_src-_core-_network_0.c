VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
union sockaddr_union VAR6;
int VAR7;
socklen_t VAR8;

FUN2(VAR2 != NULL, NULL);

VAR8 = sizeof(VAR6);
VAR7 = FUN3(FUN4(VAR2), &VAR6.VAR9, &VAR8);

if (VAR7 < 0)
return NULL;

if (VAR4 != NULL) FUN5(&VAR6, VAR4);
if (VAR5 != NULL) *VAR5 = FUN6(&VAR6);

FUN7(VAR7, VAR10, VAR11);
return FUN8(VAR7);
}
int FUN1(struct VAR1 * VAR2,
const void * VAR3, size_t VAR4)
{
int VAR5;
DBT VAR6;
VAR7 * VAR8;

VAR8 = VAR2->VAR9;

memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR10 = (void *) VAR3;
VAR6.VAR11 = VAR4;

VAR5 = VAR8->FUN2(VAR8, NULL, &VAR6, 0);
VAR5 = VAR8->FUN2(VAR8, &VAR6, 0);
VAR5 = -1;
if (VAR5 != 0)
return -1;

return 0;
return -1;
}
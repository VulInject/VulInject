{ return FUN1((VAR1*)VAR2); }

static int FUN2(void* VAR2, struct VAR3* VAR4)
{ return FUN3((VAR1*)VAR2, VAR4); }


void 
FUN4(enum check_lock_type VAR5, struct VAR6* VAR7,
const char* VAR8, const char* VAR9, int VAR10)
{
if(VAR11)
return;
FUN5(VAR5 == VAR12);
FUN6(VAR5, VAR7, VAR8, VAR9, VAR10,
VAR13, VAR14, &VAR7->VAR15.VAR16, 0, 1);
}
struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4,
unsigned long long VAR5, u32 VAR6)
{
const u32 VAR7 = FUN2(VAR4, 3, 0);    
u16 VAR8 = FUN3(VAR3);
struct VAR1 *mutex;
int VAR9;
u32 VAR10;

VAR9 = FUN4(VAR8, &VAR4, VAR5);
if (VAR9)
return NULL;

VAR9 = FUN5(VAR3, VAR7, VAR5 + 4, &VAR10);
if (VAR9 < 0)
return NULL;

if (VAR10 != VAR6)
return NULL;

mutex = FUN6(sizeof(*mutex), VAR11);
if (!mutex)
return NULL;

mutex->VAR3 = VAR3;
mutex->VAR4 = VAR4;
mutex->VAR5 = VAR5;
mutex->VAR6 = VAR6;
mutex->VAR12 = 0;

return mutex;
}
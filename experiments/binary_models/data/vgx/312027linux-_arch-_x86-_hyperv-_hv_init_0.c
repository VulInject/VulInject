void *VAR1;
FUN1(VAR1);

union VAR2 * VAR3 *VAR4;


static void *VAR5;

struct VAR6 **VAR6;
FUN1(VAR6);

static int FUN2(void)
{
u64 VAR7;
void *VAR8;
void **VAR9;

if (!FUN3())
return 0;

if (!VAR4)
return -VAR10;


FUN4(VAR11, VAR7);
VAR8 = FUN5(VAR7, VAR12, VAR13);
if (!VAR8)
return -VAR14;

VAR9 = (void **)FUN6(VAR4);
*VAR9 = VAR8;

return 0;
}
static struct VAR1 *FUN1(void)
{
u_int32 VAR2, VAR3, VAR4;
int VAR5, VAR6;
static struct ip_addr VAR7;

VAR2 = *VAR8->VAR2.VAR9;
VAR4 = *VAR8->VAR10.VAR9;


VAR5 = FUN2(~VAR2);


for (VAR6 = 1; VAR6 <= VAR5; VAR6++) {

VAR3 = (VAR4 & VAR2) | FUN3(VAR6);
FUN4(&VAR7, VAR11, (VAR12 *)&VAR3);
if (!FUN5(&VAR7))
return(&VAR7);
}

return NULL;
}
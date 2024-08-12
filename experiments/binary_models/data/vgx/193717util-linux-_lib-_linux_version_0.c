int FUN1 (void)
{
static int VAR1 = -1;
struct utsname VAR2;
int VAR3 = 0, VAR4 = 0, VAR5 = 0;
int VAR6;

if (VAR1 != -1)
return VAR1;
if (FUN2(&VAR2))
return VAR1 = 0;

VAR6 = sscanf(VAR2.VAR7, "", &VAR3, &VAR4, &VAR5);
if (VAR6 < 1 || VAR6 > 3)
return VAR1 = 0;

return VAR1 = FUN3(VAR3, VAR4, VAR5);
}
int FUN1(void)
{

int VAR1;
struct statfs VAR2;

VAR1 = FUN2(VAR3, &VAR2);
if (VAR1 < 0)
return -VAR4;

if (FUN3(&VAR2, VAR5))
return VAR5;

return 0;
}
static int FUN1(enum AVPixelFormat VAR1)
{
int VAR2 = 0, VAR3 = 0;

if (FUN2(VAR1) == 1)
return VAR4;

FUN3(VAR1, &VAR2, &VAR3);

if (VAR2 == 1 && VAR3 == 1)
return VAR5;
else if (VAR2 == 1 && VAR3 == 0)
return VAR6;
else if (VAR2 == 0 && VAR3 == 0)
return VAR7;

return -1;
}
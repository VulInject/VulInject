const char *const *FUN1(void)
{
if (FUN2()) {
if (FUN3(VAR1))
FUN4();

if (FUN5())
return VAR2;
else
return VAR3;
} else if (FUN5()) {
return VAR4;
}

return NULL;
}
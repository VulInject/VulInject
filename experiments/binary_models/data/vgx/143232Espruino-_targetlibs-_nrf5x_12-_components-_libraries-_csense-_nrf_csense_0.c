VAR1 FUN1(void)
{
FUN2(VAR2.VAR3 != VAR4);

ret_code_t VAR5;
VAR6 ** VAR7 = &VAR8;

VAR5 = FUN3();
if (VAR5 != VAR9)
{
return VAR5;
}

if (VAR2.VAR10 != 0)
{
VAR5 = FUN4(VAR11);
if (VAR5 != VAR9)
{
return VAR5;
}
}

while ((*VAR7) != NULL)
{
VAR6 ** VAR12 = (&(*VAR7)->VAR13);
(*VAR7) = NULL;
VAR7 = VAR12;
}

memset((void *)&VAR2, 0, sizeof(VAR14));

VAR2.VAR3 = VAR4;


return VAR9;
}
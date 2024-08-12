static int FUN1(git_runtime_init_fn VAR1[], size_t VAR2)
{
size_t VAR3;
int VAR4;


for (VAR3 = 0; VAR3 < VAR2; VAR3++) {
if ((VAR4 = VAR1[VAR3]()) != 0)
break;
}

VAR5;

return VAR4;
}
static void FUN1(u32 VAR1)
{
int VAR2;

for (VAR2 = 0; VAR2 < VAR3; ++VAR2) {


if (VAR4[VAR2] == VAR1)
return;


if (VAR4[VAR2] != VAR5)
continue;


VAR4[VAR2] = VAR1;

return;
}


FUN2();
}